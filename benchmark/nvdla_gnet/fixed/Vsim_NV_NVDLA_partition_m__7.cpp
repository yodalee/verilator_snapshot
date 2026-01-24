// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__14(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d2;
    }
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__15(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d2) 
             | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_sel_d2;
        } else if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d2) 
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
           && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d2));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__16(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld[0U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld[1U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld[2U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld[3U] 
            = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0[0U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 8U))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0[1U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 8U))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0[2U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 8U))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0[3U] 
            = (0x000000ffU & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                               >> 8U)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld[0U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld[1U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld[2U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld[3U] 
            = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1[0U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 9U))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1[1U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 9U))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1[2U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 9U))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1[3U] 
            = (0x000000ffU & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                               >> 9U)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld[0U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld[1U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld[2U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld[3U] 
            = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2[0U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0aU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2[1U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0aU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2[2U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0aU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2[3U] 
            = (0x000000ffU & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                               >> 0x0aU)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld[0U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld[1U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld[2U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld[3U] 
            = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3[0U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0bU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3[1U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0bU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3[2U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0bU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3[3U] 
            = (0x000000ffU & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                               >> 0x0bU)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt4_actv_pvld[0U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt4_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt4_actv_pvld[1U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt4_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt4_actv_pvld[2U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt4_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt4_actv_pvld[3U] 
            = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt4_actv_pvld_w))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg4[0U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0cU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg4[1U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0cU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg4[2U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0cU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg4[3U] 
            = (0x000000ffU & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                               >> 0x0cU)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt5_actv_pvld[0U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt5_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt5_actv_pvld[1U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt5_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt5_actv_pvld[2U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt5_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt5_actv_pvld[3U] 
            = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt5_actv_pvld_w))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg5[0U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0dU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg5[1U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0dU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg5[2U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0dU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg5[3U] 
            = (0x000000ffU & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                               >> 0x0dU)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[0U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt6_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[1U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt6_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt6_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U] 
            = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt6_actv_pvld_w))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[0U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0eU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[1U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0eU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0eU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] 
            = (0x000000ffU & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                               >> 0x0eU)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt7_actv_pvld[0U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt7_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt7_actv_pvld[1U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt7_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt7_actv_pvld[2U] 
            = (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt7_actv_pvld_w)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt7_actv_pvld[3U] 
            = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt7_actv_pvld_w))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg7[0U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0fU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg7[1U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0fU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg7[2U] 
            = (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                >> 0x0fU))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg7[3U] 
            = (0x000000ffU & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                                               >> 0x0fU)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld 
            = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))));
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt4_actv_pvld[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt4_actv_pvld[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt4_actv_pvld[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt4_actv_pvld[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg4[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg4[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg4[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg4[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt5_actv_pvld[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt5_actv_pvld[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt5_actv_pvld[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt5_actv_pvld[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg5[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg5[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg5[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg5[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_actv_pvld[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg6[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt7_actv_pvld[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt7_actv_pvld[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt7_actv_pvld[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt7_actv_pvld[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg7[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg7[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg7[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg7[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w 
        = ((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st))
            ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_sd_pvld)
            : ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_vld)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w 
        = ((2U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st))
            ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_sd_pvld)
            : ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_vld)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w 
        = ((4U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st))
            ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_sd_pvld)
            : ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_vld)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w 
        = ((8U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st))
            ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_sd_pvld)
            : ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_vld)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt4_actv_pvld_w 
        = ((0x00000010U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st))
            ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt4_sd_pvld)
            : ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt4_actv_vld)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt5_actv_pvld_w 
        = ((0x00000020U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st))
            ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt5_sd_pvld)
            : ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt5_actv_vld)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt6_actv_pvld_w 
        = ((0x00000040U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st))
            ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt6_sd_pvld)
            : ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt6_actv_vld)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt7_actv_pvld_w 
        = ((0x00000080U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st))
            ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt7_sd_pvld)
            : ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt7_actv_vld)));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__18(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__18\n"); );
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
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__19(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[0U] 
            = (IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[0U])))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[1U] 
            = ((0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[1U]) 
               | (IData)(((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[0U])))) 
                          >> 0x00000020U)));
    }
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[0U] 
            = (IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[0U])))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[1U] 
            = ((0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[1U]) 
               | (IData)(((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[0U])))) 
                          >> 0x00000020U)));
    } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[1U] 
            = (0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[1U]);
    }
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[0U] 
            = (IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[0U])))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[1U] 
            = ((0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[1U]) 
               | (IData)(((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[0U])))) 
                          >> 0x00000020U)));
    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[1U] 
            = (0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[1U]);
    }
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[0U] 
            = (IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[0U])))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[1U] 
            = ((0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[1U]) 
               | (IData)(((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[0U])))) 
                          >> 0x00000020U)));
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[1U] 
            = (0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[1U]);
    }
    if ((8U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[0U] 
            = (IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[0U])))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[1U] 
            = ((0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[1U]) 
               | (IData)(((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[0U])))) 
                          >> 0x00000020U)));
    } else if ((8U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[1U] 
            = (0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[1U]);
    }
    if ((4U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[0U] 
            = (IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[0U])))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[1U] 
            = ((0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[1U]) 
               | (IData)(((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[0U])))) 
                          >> 0x00000020U)));
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[1U] 
            = (0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[1U]);
    }
    if ((2U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[0U] 
            = (IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[0U])))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[1U] 
            = ((0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[1U]) 
               | (IData)(((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[0U])))) 
                          >> 0x00000020U)));
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[1U] 
            = (0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[1U]);
    }
    if ((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[0U] 
            = (IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[0U])))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[1U] 
            = ((0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[1U]) 
               | (IData)(((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[0U])))) 
                          >> 0x00000020U)));
    } else if ((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[1U] 
            = (0xfffff000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[1U]);
    }
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__20(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00000080U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                        & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[1U] 
            = ((0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[1U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[2U])) 
                             << 0x00000014U) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[1U])) 
                                                >> 0x0000000cU)))) 
                  << 0x0000000cU));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[2U] 
            = ((0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[2U]) 
               | (((IData)((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[2U])) 
                              << 0x00000014U) | ((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[1U])) 
                                                 >> 0x0000000cU)))) 
                   >> 0x00000014U) | ((IData)(((0x00000fffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[2U])) 
                                                    << 0x00000014U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[1U])) 
                                                      >> 0x0000000cU))) 
                                               >> 0x00000020U)) 
                                      << 0x0000000cU)));
    } else if ((0x00000080U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[1U] 
            = (0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[1U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[2U] 
            = (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[2U]);
    }
    if ((0x00000080U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                        & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[2U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[2U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[4U])) 
                             << 0x00000028U) | (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[3U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[2U])) 
                                                   >> 0x00000018U))))) 
                  << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[3U] 
            = (((IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[4U])) 
                                                   << 0x00000028U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[3U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[2U])) 
                                                        >> 0x00000018U))))) 
                >> 8U) | ((IData)(((0x00000fffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[4U])) 
                                        << 0x00000028U) 
                                       | (((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[3U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[2U])) 
                                           >> 0x00000018U)))) 
                                   >> 0x00000020U)) 
                          << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[4U] 
            = ((0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[4U]) 
               | ((IData)(((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[4U])) 
                              << 0x00000028U) | (((QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[3U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[2U])) 
                                                    >> 0x00000018U)))) 
                           >> 0x00000020U)) >> 8U));
    } else if ((0x00000080U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[2U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[2U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[4U] 
            = (0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[4U]);
    }
    if ((0x00000080U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                        & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[4U] 
            = ((0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[4U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[5U])) 
                             << 0x0000001cU) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[4U])) 
                                                >> 4U)))) 
                  << 4U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[5U] 
            = (0x0000ffffU & (((IData)((0x00000fffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[4U])) 
                                              >> 4U)))) 
                               >> 0x0000001cU) | ((IData)(
                                                          ((0x00000fffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[5U])) 
                                                                << 0x0000001cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_data[4U])) 
                                                                  >> 4U))) 
                                                           >> 0x00000020U)) 
                                                  << 4U)));
    } else if ((0x00000080U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[4U] 
            = (0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[4U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data7_d1[5U] = 0U;
    }
    if ((0x00000040U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                        & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[1U] 
            = ((0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[1U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[2U])) 
                             << 0x00000014U) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[1U])) 
                                                >> 0x0000000cU)))) 
                  << 0x0000000cU));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[2U] 
            = ((0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[2U]) 
               | (((IData)((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[2U])) 
                              << 0x00000014U) | ((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[1U])) 
                                                 >> 0x0000000cU)))) 
                   >> 0x00000014U) | ((IData)(((0x00000fffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[2U])) 
                                                    << 0x00000014U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[1U])) 
                                                      >> 0x0000000cU))) 
                                               >> 0x00000020U)) 
                                      << 0x0000000cU)));
    } else if ((0x00000040U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[1U] 
            = (0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[1U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[2U] 
            = (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[2U]);
    }
    if ((0x00000040U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                        & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[2U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[2U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[4U])) 
                             << 0x00000028U) | (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[3U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[2U])) 
                                                   >> 0x00000018U))))) 
                  << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[3U] 
            = (((IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[4U])) 
                                                   << 0x00000028U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[3U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[2U])) 
                                                        >> 0x00000018U))))) 
                >> 8U) | ((IData)(((0x00000fffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[4U])) 
                                        << 0x00000028U) 
                                       | (((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[3U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[2U])) 
                                           >> 0x00000018U)))) 
                                   >> 0x00000020U)) 
                          << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[4U] 
            = ((0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[4U]) 
               | ((IData)(((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[4U])) 
                              << 0x00000028U) | (((QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[3U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[2U])) 
                                                    >> 0x00000018U)))) 
                           >> 0x00000020U)) >> 8U));
    } else if ((0x00000040U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[2U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[2U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[4U] 
            = (0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[4U]);
    }
    if ((0x00000040U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                        & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[4U] 
            = ((0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[4U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[5U])) 
                             << 0x0000001cU) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[4U])) 
                                                >> 4U)))) 
                  << 4U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[5U] 
            = (0x0000ffffU & (((IData)((0x00000fffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[4U])) 
                                              >> 4U)))) 
                               >> 0x0000001cU) | ((IData)(
                                                          ((0x00000fffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[5U])) 
                                                                << 0x0000001cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_data[4U])) 
                                                                  >> 4U))) 
                                                           >> 0x00000020U)) 
                                                  << 4U)));
    } else if ((0x00000040U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[4U] 
            = (0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[4U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data6_d1[5U] = 0U;
    }
    if ((0x00000020U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                        & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[1U] 
            = ((0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[1U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[2U])) 
                             << 0x00000014U) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[1U])) 
                                                >> 0x0000000cU)))) 
                  << 0x0000000cU));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[2U] 
            = ((0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[2U]) 
               | (((IData)((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[2U])) 
                              << 0x00000014U) | ((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[1U])) 
                                                 >> 0x0000000cU)))) 
                   >> 0x00000014U) | ((IData)(((0x00000fffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[2U])) 
                                                    << 0x00000014U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[1U])) 
                                                      >> 0x0000000cU))) 
                                               >> 0x00000020U)) 
                                      << 0x0000000cU)));
    } else if ((0x00000020U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[1U] 
            = (0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[1U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[2U] 
            = (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[2U]);
    }
    if ((0x00000020U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                        & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[2U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[2U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[4U])) 
                             << 0x00000028U) | (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[3U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[2U])) 
                                                   >> 0x00000018U))))) 
                  << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[3U] 
            = (((IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[4U])) 
                                                   << 0x00000028U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[3U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[2U])) 
                                                        >> 0x00000018U))))) 
                >> 8U) | ((IData)(((0x00000fffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[4U])) 
                                        << 0x00000028U) 
                                       | (((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[3U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[2U])) 
                                           >> 0x00000018U)))) 
                                   >> 0x00000020U)) 
                          << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[4U] 
            = ((0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[4U]) 
               | ((IData)(((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[4U])) 
                              << 0x00000028U) | (((QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[3U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[2U])) 
                                                    >> 0x00000018U)))) 
                           >> 0x00000020U)) >> 8U));
    } else if ((0x00000020U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[2U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[2U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[4U] 
            = (0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[4U]);
    }
    if ((0x00000020U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                        & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[4U] 
            = ((0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[4U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[5U])) 
                             << 0x0000001cU) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[4U])) 
                                                >> 4U)))) 
                  << 4U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[5U] 
            = (0x0000ffffU & (((IData)((0x00000fffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[4U])) 
                                              >> 4U)))) 
                               >> 0x0000001cU) | ((IData)(
                                                          ((0x00000fffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[5U])) 
                                                                << 0x0000001cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_data[4U])) 
                                                                  >> 4U))) 
                                                           >> 0x00000020U)) 
                                                  << 4U)));
    } else if ((0x00000020U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[4U] 
            = (0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[4U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data5_d1[5U] = 0U;
    }
    if ((0x00000010U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                        & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[1U] 
            = ((0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[1U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[2U])) 
                             << 0x00000014U) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[1U])) 
                                                >> 0x0000000cU)))) 
                  << 0x0000000cU));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[2U] 
            = ((0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[2U]) 
               | (((IData)((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[2U])) 
                              << 0x00000014U) | ((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[1U])) 
                                                 >> 0x0000000cU)))) 
                   >> 0x00000014U) | ((IData)(((0x00000fffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[2U])) 
                                                    << 0x00000014U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[1U])) 
                                                      >> 0x0000000cU))) 
                                               >> 0x00000020U)) 
                                      << 0x0000000cU)));
    } else if ((0x00000010U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[1U] 
            = (0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[1U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[2U] 
            = (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[2U]);
    }
    if ((0x00000010U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                        & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[2U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[2U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[4U])) 
                             << 0x00000028U) | (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[3U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[2U])) 
                                                   >> 0x00000018U))))) 
                  << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[3U] 
            = (((IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[4U])) 
                                                   << 0x00000028U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[3U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[2U])) 
                                                        >> 0x00000018U))))) 
                >> 8U) | ((IData)(((0x00000fffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[4U])) 
                                        << 0x00000028U) 
                                       | (((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[3U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[2U])) 
                                           >> 0x00000018U)))) 
                                   >> 0x00000020U)) 
                          << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[4U] 
            = ((0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[4U]) 
               | ((IData)(((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[4U])) 
                              << 0x00000028U) | (((QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[3U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[2U])) 
                                                    >> 0x00000018U)))) 
                           >> 0x00000020U)) >> 8U));
    } else if ((0x00000010U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[2U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[2U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[4U] 
            = (0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[4U]);
    }
    if ((0x00000010U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                        & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[4U] 
            = ((0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[4U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[5U])) 
                             << 0x0000001cU) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[4U])) 
                                                >> 4U)))) 
                  << 4U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[5U] 
            = (0x0000ffffU & (((IData)((0x00000fffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[4U])) 
                                              >> 4U)))) 
                               >> 0x0000001cU) | ((IData)(
                                                          ((0x00000fffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[5U])) 
                                                                << 0x0000001cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_data[4U])) 
                                                                  >> 4U))) 
                                                           >> 0x00000020U)) 
                                                  << 4U)));
    } else if ((0x00000010U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[4U] 
            = (0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[4U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data4_d1[5U] = 0U;
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[1U] 
            = ((0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[1U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[2U])) 
                             << 0x00000014U) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[1U])) 
                                                >> 0x0000000cU)))) 
                  << 0x0000000cU));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[2U] 
            = ((0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[2U]) 
               | (((IData)((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[2U])) 
                              << 0x00000014U) | ((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[1U])) 
                                                 >> 0x0000000cU)))) 
                   >> 0x00000014U) | ((IData)(((0x00000fffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[2U])) 
                                                    << 0x00000014U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[1U])) 
                                                      >> 0x0000000cU))) 
                                               >> 0x00000020U)) 
                                      << 0x0000000cU)));
    } else if ((8U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[1U] 
            = (0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[1U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[2U] 
            = (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[2U]);
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[2U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[2U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[4U])) 
                             << 0x00000028U) | (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[3U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[2U])) 
                                                   >> 0x00000018U))))) 
                  << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[3U] 
            = (((IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[4U])) 
                                                   << 0x00000028U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[3U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[2U])) 
                                                        >> 0x00000018U))))) 
                >> 8U) | ((IData)(((0x00000fffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[4U])) 
                                        << 0x00000028U) 
                                       | (((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[3U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[2U])) 
                                           >> 0x00000018U)))) 
                                   >> 0x00000020U)) 
                          << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[4U] 
            = ((0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[4U]) 
               | ((IData)(((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[4U])) 
                              << 0x00000028U) | (((QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[3U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[2U])) 
                                                    >> 0x00000018U)))) 
                           >> 0x00000020U)) >> 8U));
    } else if ((8U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[2U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[2U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[4U] 
            = (0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[4U]);
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[4U] 
            = ((0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[4U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[5U])) 
                             << 0x0000001cU) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[4U])) 
                                                >> 4U)))) 
                  << 4U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[5U] 
            = (0x0000ffffU & (((IData)((0x00000fffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[4U])) 
                                              >> 4U)))) 
                               >> 0x0000001cU) | ((IData)(
                                                          ((0x00000fffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[5U])) 
                                                                << 0x0000001cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_data[4U])) 
                                                                  >> 4U))) 
                                                           >> 0x00000020U)) 
                                                  << 4U)));
    } else if ((8U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[4U] 
            = (0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[4U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1[5U] = 0U;
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[1U] 
            = ((0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[1U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[2U])) 
                             << 0x00000014U) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[1U])) 
                                                >> 0x0000000cU)))) 
                  << 0x0000000cU));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[2U] 
            = ((0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[2U]) 
               | (((IData)((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[2U])) 
                              << 0x00000014U) | ((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[1U])) 
                                                 >> 0x0000000cU)))) 
                   >> 0x00000014U) | ((IData)(((0x00000fffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[2U])) 
                                                    << 0x00000014U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[1U])) 
                                                      >> 0x0000000cU))) 
                                               >> 0x00000020U)) 
                                      << 0x0000000cU)));
    } else if ((4U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[1U] 
            = (0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[1U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[2U] 
            = (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[2U]);
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[2U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[2U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[4U])) 
                             << 0x00000028U) | (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[3U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[2U])) 
                                                   >> 0x00000018U))))) 
                  << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[3U] 
            = (((IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[4U])) 
                                                   << 0x00000028U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[3U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[2U])) 
                                                        >> 0x00000018U))))) 
                >> 8U) | ((IData)(((0x00000fffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[4U])) 
                                        << 0x00000028U) 
                                       | (((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[3U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[2U])) 
                                           >> 0x00000018U)))) 
                                   >> 0x00000020U)) 
                          << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[4U] 
            = ((0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[4U]) 
               | ((IData)(((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[4U])) 
                              << 0x00000028U) | (((QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[3U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[2U])) 
                                                    >> 0x00000018U)))) 
                           >> 0x00000020U)) >> 8U));
    } else if ((4U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[2U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[2U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[4U] 
            = (0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[4U]);
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[4U] 
            = ((0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[4U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[5U])) 
                             << 0x0000001cU) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[4U])) 
                                                >> 4U)))) 
                  << 4U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[5U] 
            = (0x0000ffffU & (((IData)((0x00000fffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[4U])) 
                                              >> 4U)))) 
                               >> 0x0000001cU) | ((IData)(
                                                          ((0x00000fffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[5U])) 
                                                                << 0x0000001cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_data[4U])) 
                                                                  >> 4U))) 
                                                           >> 0x00000020U)) 
                                                  << 4U)));
    } else if ((4U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[4U] 
            = (0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[4U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1[5U] = 0U;
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[1U] 
            = ((0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[1U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[2U])) 
                             << 0x00000014U) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[1U])) 
                                                >> 0x0000000cU)))) 
                  << 0x0000000cU));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[2U] 
            = ((0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[2U]) 
               | (((IData)((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[2U])) 
                              << 0x00000014U) | ((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[1U])) 
                                                 >> 0x0000000cU)))) 
                   >> 0x00000014U) | ((IData)(((0x00000fffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[2U])) 
                                                    << 0x00000014U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[1U])) 
                                                      >> 0x0000000cU))) 
                                               >> 0x00000020U)) 
                                      << 0x0000000cU)));
    } else if ((2U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[1U] 
            = (0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[1U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[2U] 
            = (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[2U]);
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[2U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[2U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[4U])) 
                             << 0x00000028U) | (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[3U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[2U])) 
                                                   >> 0x00000018U))))) 
                  << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[3U] 
            = (((IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[4U])) 
                                                   << 0x00000028U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[3U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[2U])) 
                                                        >> 0x00000018U))))) 
                >> 8U) | ((IData)(((0x00000fffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[4U])) 
                                        << 0x00000028U) 
                                       | (((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[3U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[2U])) 
                                           >> 0x00000018U)))) 
                                   >> 0x00000020U)) 
                          << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[4U] 
            = ((0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[4U]) 
               | ((IData)(((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[4U])) 
                              << 0x00000028U) | (((QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[3U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[2U])) 
                                                    >> 0x00000018U)))) 
                           >> 0x00000020U)) >> 8U));
    } else if ((2U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[2U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[2U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[4U] 
            = (0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[4U]);
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[4U] 
            = ((0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[4U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[5U])) 
                             << 0x0000001cU) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[4U])) 
                                                >> 4U)))) 
                  << 4U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[5U] 
            = (0x0000ffffU & (((IData)((0x00000fffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[4U])) 
                                              >> 4U)))) 
                               >> 0x0000001cU) | ((IData)(
                                                          ((0x00000fffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[5U])) 
                                                                << 0x0000001cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_data[4U])) 
                                                                  >> 4U))) 
                                                           >> 0x00000020U)) 
                                                  << 4U)));
    } else if ((2U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[4U] 
            = (0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[4U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1[5U] = 0U;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[1U] 
            = ((0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[1U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[2U])) 
                             << 0x00000014U) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[1U])) 
                                                >> 0x0000000cU)))) 
                  << 0x0000000cU));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[2U] 
            = ((0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[2U]) 
               | (((IData)((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[2U])) 
                              << 0x00000014U) | ((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[1U])) 
                                                 >> 0x0000000cU)))) 
                   >> 0x00000014U) | ((IData)(((0x00000fffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[2U])) 
                                                    << 0x00000014U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[1U])) 
                                                      >> 0x0000000cU))) 
                                               >> 0x00000020U)) 
                                      << 0x0000000cU)));
    } else if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_1)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[1U] 
            = (0x00000fffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[1U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[2U] 
            = (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[2U]);
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[2U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[2U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[4U])) 
                             << 0x00000028U) | (((QData)((IData)(
                                                                 vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[3U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[2U])) 
                                                   >> 0x00000018U))))) 
                  << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[3U] 
            = (((IData)((0x00000fffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[4U])) 
                                                   << 0x00000028U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[3U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[2U])) 
                                                        >> 0x00000018U))))) 
                >> 8U) | ((IData)(((0x00000fffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[4U])) 
                                        << 0x00000028U) 
                                       | (((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[3U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[2U])) 
                                           >> 0x00000018U)))) 
                                   >> 0x00000020U)) 
                          << 0x00000018U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[4U] 
            = ((0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[4U]) 
               | ((IData)(((0x00000fffffffffffULL & 
                            (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[4U])) 
                              << 0x00000028U) | (((QData)((IData)(
                                                                  vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[3U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[2U])) 
                                                    >> 0x00000018U)))) 
                           >> 0x00000020U)) >> 8U));
    } else if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_2)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[2U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[2U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[4U] 
            = (0xfffffff0U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[4U]);
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[4U] 
            = ((0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[4U]) 
               | ((IData)((0x00000fffffffffffULL & 
                           (((QData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[5U])) 
                             << 0x0000001cU) | ((QData)((IData)(
                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[4U])) 
                                                >> 4U)))) 
                  << 4U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[5U] 
            = (0x0000ffffU & (((IData)((0x00000fffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[4U])) 
                                              >> 4U)))) 
                               >> 0x0000001cU) | ((IData)(
                                                          ((0x00000fffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[5U])) 
                                                                << 0x0000001cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_data[4U])) 
                                                                  >> 4U))) 
                                                           >> 0x00000020U)) 
                                                  << 4U)));
    } else if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_dat_en_3)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[4U] 
            = (0x0000000fU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[4U]);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1[5U] = 0U;
    }
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__21(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__21\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2));
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

void Vsim_NV_NVDLA_partition_m___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__3(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_mask 
        = ((((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_7->__PVT__mac_out_pvld) 
               << 3U) | ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_6->__PVT__mac_out_pvld) 
                         << 2U)) | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_5->__PVT__mac_out_pvld) 
                                     << 1U) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_4->__PVT__mac_out_pvld))) 
            << 4U) | ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3->__PVT__mac_out_pvld) 
                        << 3U) | ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2->__PVT__mac_out_pvld) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1->__PVT__mac_out_pvld) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0->__PVT__mac_out_pvld))));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__23(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__23\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_int8 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (0U == (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__reg2dp_proc_precision)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg) 
                        >> 2U) & ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__op_en_d1)) 
                                  | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__op_done_d1)))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_wg 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)
                ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode)
                : (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__op_en_d1 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg) 
                     >> 2U)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__op_done_d1 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d4));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__24(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__24\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
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
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d4) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer_w;
        }
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg_w;
        if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csb2cmac__DOT__csb2cmac_req_pvld_d3) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csb2cmac__DOT__csb2cmac_req_pd_d3;
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer = 0U;
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

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__25(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__25\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d4 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d2));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d2 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d1));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d1 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(((0x0140U == (0x0140U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d2))) 
                       & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2))));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__26(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__26\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d1;
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1;
    }
}

void Vsim_NV_NVDLA_partition_m___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__4(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg_w 
        = ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d4)
            ? 0U : ((6U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg) 
                           << 1U)) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_ori)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en_w 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)) 
                  & ((8U == (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                            << 2U))) 
                     & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_wr_en)))
                  ? (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                             >> 0x00000016U)) : ((~ 
                                                  ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)) 
                                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d4))) 
                                                 & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en_w 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)) 
                  & ((8U == (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                            << 2U))) 
                     & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_wr_en)))
                  ? (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                             >> 0x00000016U)) : ((~ 
                                                  ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d4) 
                                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer))) 
                                                 & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en))));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__27(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__27\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__28(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__28\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_pvld_d2) 
             | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_pd_d2;
        } else if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_pvld_d2) 
                    | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1 = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1 = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_pvld_d2));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__29(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma__29\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_ 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__NV_GENERIC_CELL__DOT__d0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_;
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__0(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__reg_wr_en) {
        if ((4U == (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                   << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_single_reg: reg wr: NVDLA_CMAC_A_S_POINTER_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer) 
                                  << 0x00000010U) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer)),
                             32,(((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer) 
                                  << 0x00000010U) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer)));
                Verilated::runFlushCallbacks();
            }
        } else if ((0U == (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_single_reg: read-only reg wr: NVDLA_CMAC_A_S_STATUS_0 = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)));
                Verilated::runFlushCallbacks();
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_abort_on_rowr))) {
                VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                Verilated::runFlushCallbacks();
                VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CMAC_REG_single.v", 110, "");
            }
        } else {
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_single_reg: reg wr: Unknown register (0x%x) = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),12,
                             (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                             << 2U)),
                             32,(IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                         >> 0x00000016U)));
                Verilated::runFlushCallbacks();
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_abort_on_invalid_wr))) {
                VL_WRITEF_NX("ERROR: write to undefined register!\n",0);
                Verilated::runFlushCallbacks();
                VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CMAC_REG_single.v", 114, "");
            }
        }
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_wr_en) {
        if ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d0: reg wr: NVDLA_CMAC_A_D_MISC_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision) 
                                  << 0x0000000cU) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode)),
                             32,(((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision) 
                                  << 0x0000000cU) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode)));
                Verilated::runFlushCallbacks();
            }
        } else if ((8U == (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d0: reg wr: NVDLA_CMAC_A_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en,
                             32,(IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en));
                Verilated::runFlushCallbacks();
            }
        } else {
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d0: reg wr: Unknown register (0x%x) = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),12,
                             (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                             << 2U)),
                             32,(IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                         >> 0x00000016U)));
                Verilated::runFlushCallbacks();
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__arreggen_abort_on_invalid_wr))) {
                VL_WRITEF_NX("ERROR: write to undefined register!\n",0);
                Verilated::runFlushCallbacks();
                VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CMAC_REG_dual.v", 116, "");
            }
        }
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_wr_en) {
        if ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d1: reg wr: NVDLA_CMAC_A_D_MISC_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision) 
                                  << 0x0000000cU) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode)),
                             32,(((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision) 
                                  << 0x0000000cU) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode)));
                Verilated::runFlushCallbacks();
            }
        } else if ((8U == (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d1: reg wr: NVDLA_CMAC_A_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en,
                             32,(IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en));
                Verilated::runFlushCallbacks();
            }
        } else {
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d1: reg wr: Unknown register (0x%x) = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),12,
                             (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                             << 2U)),
                             32,(IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                         >> 0x00000016U)));
                Verilated::runFlushCallbacks();
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__arreggen_abort_on_invalid_wr))) {
                VL_WRITEF_NX("ERROR: write to undefined register!\n",0);
                Verilated::runFlushCallbacks();
                VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CMAC_REG_dual.v", 116, "");
            }
        }
    }
    vlSelfRef.__PVT__u_dla_clk_ovr_on_sync__DOT__sync_sbus 
        = vlSelfRef.__PVT__u_dla_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1;
    vlSelfRef.__PVT__u_dla_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1 
        = vlSelfRef.__PVT__u_dla_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__u_dla_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__3(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_global_clk_ovr_on_sync__DOT__sync_sbus 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__u_global_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pvld 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cmac__DOT__csb2cmac_req_pvld_d3));
    if (vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_rd_en) {
            vlSelfRef.cmac_a2csb_resp_pd = (QData)((IData)(
                                                           (((- (IData)(
                                                                        (8U 
                                                                         > 
                                                                         (0x00000ffcU 
                                                                          & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                             << 2U))))) 
                                                             & ((4U 
                                                                 == 
                                                                 (0x00000ffcU 
                                                                  & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                     << 2U)))
                                                                 ? 
                                                                (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer) 
                                                                  << 0x00000010U) 
                                                                 | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer))
                                                                 : 
                                                                ((0U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                      << 2U)))
                                                                  ? 
                                                                 ((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)
                                                                      ? 1U
                                                                      : 2U)
                                                                     : 0U) 
                                                                   << 0x00000010U) 
                                                                  | ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)
                                                                       ? 2U
                                                                       : 1U)
                                                                      : 0U))
                                                                  : 0U))) 
                                                            | (((- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d0))) 
                                                                & ((0x000cU 
                                                                    == 
                                                                    (0x00000ffcU 
                                                                     & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                        << 2U)))
                                                                    ? 
                                                                   (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision) 
                                                                     << 0x0000000cU) 
                                                                    | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode))
                                                                    : 
                                                                   ((8U 
                                                                     == 
                                                                     (0x00000ffcU 
                                                                      & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                         << 2U)))
                                                                     ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)
                                                                     : 0U))) 
                                                               | ((- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d1))) 
                                                                  & ((0x000cU 
                                                                      == 
                                                                      (0x00000ffcU 
                                                                       & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                          << 2U)))
                                                                      ? 
                                                                     (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision) 
                                                                       << 0x0000000cU) 
                                                                      | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode))
                                                                      : 
                                                                     ((8U 
                                                                       == 
                                                                       (0x00000ffcU 
                                                                        & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                           << 2U)))
                                                                       ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)
                                                                       : 0U)))))));
        } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
                    & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                               >> 0x00000037U)))) {
            vlSelfRef.cmac_a2csb_resp_pd = 0x0000000200000000ULL;
        }
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d3 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d2;
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__nvdla_cmac_a_d_misc_cfg_0_wren) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision 
                = (3U & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x00000022U)));
        }
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__nvdla_cmac_a_d_misc_cfg_0_wren) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision 
                = (3U & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x00000022U)));
        }
        if (((4U == (0x00000ffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                    << 2U))) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__reg_wr_en))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer 
                = (1U & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d1;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d1 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_ori))));
    } else {
        vlSelfRef.cmac_a2csb_resp_pd = 0ULL;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d3 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision = 1U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision = 1U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d2 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d1 = 0U;
    }
    vlSelfRef.cmac_a2csb_resp_valid = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                       >> 0x00000037U))) 
                                           | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_rd_en)));
    vlSelfRef.__PVT__u_global_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__u_global_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en_w));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en_w));
    vlSelfRef.__PVT__u_global_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_)));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__4(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_pvld_d1) 
             | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U];
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U];
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U];
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U];
        } else if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_pvld_d1) 
                    | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] = 0U;
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] = 0U;
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] = 0U;
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] = 0U;
        }
        if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_pvld_d1) 
             | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U];
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U];
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U];
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U];
        } else if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_pvld_d1) 
                    | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] = 0U;
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] = 0U;
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] = 0U;
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] = 0U;
        }
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__cfg_reg_en_d1) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__slcg_wg_en_d2 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__slcg_wg_en_d1;
        }
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__slcg_wg_en_d1 
                = (0x000001ffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_wg))));
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__slcg_wg_en_d2 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__slcg_wg_en_d1 = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_int16 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (1U == (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__reg2dp_proc_precision)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__in_wt_mask_int8[0U] 
        = ((((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                        >> 0x0000000eU)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                  >> 0x0000000fU))) 
                << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                  >> 0x0000000dU)) 
                           | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                    >> 0x0000000eU))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                              >> 0x0000000cU)) 
                                       | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                >> 0x0000000dU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                                    >> 0x0000000bU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                      >> 0x0000000cU))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                           >> 0x0000000aU)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                             >> 0x0000000bU))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                    >> 0x0000000aU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                             >> 8U)) 
                                      | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                               >> 9U))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                                   >> 7U)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                     >> 8U))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                        >> 6U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                         >> 7U))) << 6U) 
               | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                          >> 5U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                           >> 6U))) 
                  << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                      >> 4U)) | (1U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                               >> 3U)) 
                                        | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                 >> 4U))))) 
             << 8U) | (((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                 >> 2U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                  >> 3U))) 
                         << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                           >> 1U)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                             >> 2U))) 
                                   << 4U)) | ((((2U 
                                                 & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U]) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                      >> 1U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U]))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__in_wt_mask_int8[1U] 
        = ((((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                        >> 0x0000001eU)) | (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                            >> 0x0000001fU)) 
                << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                  >> 0x0000001dU)) 
                           | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                    >> 0x0000001eU))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                              >> 0x0000001cU)) 
                                       | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                >> 0x0000001dU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                      >> 0x0000001cU))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                           >> 0x0000001aU)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                             >> 0x0000001bU))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                                >> 0x00000019U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                    >> 0x0000001aU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                             >> 0x00000018U)) 
                                      | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                               >> 0x00000019U))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                                   >> 0x00000017U)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                     >> 0x00000018U))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                        >> 0x00000016U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                  >> 0x00000017U))) 
                << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                  >> 0x00000015U)) 
                           | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                    >> 0x00000016U))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                              >> 0x00000014U)) 
                                       | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                                    >> 0x00000013U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                      >> 0x00000014U))))) 
             << 8U) | (((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                 >> 0x00000012U)) | 
                          (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                 >> 0x00000013U))) 
                         << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                           >> 0x00000011U)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                             >> 0x00000012U))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                                    >> 0x00000010U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                      >> 0x00000011U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[2U] 
                                                     >> 0x0000000fU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[0U] 
                                                       >> 0x00000010U)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__in_wt_mask_int8[2U] 
        = ((((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                        >> 0x0000000eU)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                  >> 0x0000000fU))) 
                << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                  >> 0x0000000dU)) 
                           | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                    >> 0x0000000eU))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                              >> 0x0000000cU)) 
                                       | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                >> 0x0000000dU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                                    >> 0x0000000bU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                      >> 0x0000000cU))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                           >> 0x0000000aU)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                             >> 0x0000000bU))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                    >> 0x0000000aU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                             >> 8U)) 
                                      | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                               >> 9U))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                                   >> 7U)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                     >> 8U))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                        >> 6U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                         >> 7U))) << 6U) 
               | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                          >> 5U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                           >> 6U))) 
                  << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                      >> 4U)) | (1U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                               >> 3U)) 
                                        | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                 >> 4U))))) 
             << 8U) | (((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                 >> 2U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                  >> 3U))) 
                         << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                           >> 1U)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                             >> 2U))) 
                                   << 4U)) | ((((2U 
                                                 & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U]) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                      >> 1U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U]))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__in_wt_mask_int8[3U] 
        = ((((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                        >> 0x0000001eU)) | (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                            >> 0x0000001fU)) 
                << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                  >> 0x0000001dU)) 
                           | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                    >> 0x0000001eU))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                              >> 0x0000001cU)) 
                                       | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                >> 0x0000001dU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                      >> 0x0000001cU))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                           >> 0x0000001aU)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                             >> 0x0000001bU))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                                >> 0x00000019U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                    >> 0x0000001aU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                             >> 0x00000018U)) 
                                      | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                               >> 0x00000019U))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                                   >> 0x00000017U)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                     >> 0x00000018U))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                        >> 0x00000016U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                  >> 0x00000017U))) 
                << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                  >> 0x00000015U)) 
                           | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                    >> 0x00000016U))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                              >> 0x00000014U)) 
                                       | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                                    >> 0x00000013U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                      >> 0x00000014U))))) 
             << 8U) | (((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                 >> 0x00000012U)) | 
                          (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                 >> 0x00000013U))) 
                         << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                           >> 0x00000011U)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                             >> 0x00000012U))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                                    >> 0x00000010U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                      >> 0x00000011U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[3U] 
                                                     >> 0x0000000fU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1[1U] 
                                                       >> 0x00000010U)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__in_dat_mask_int8[0U] 
        = ((((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                        >> 0x0000000eU)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                  >> 0x0000000fU))) 
                << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                  >> 0x0000000dU)) 
                           | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                    >> 0x0000000eU))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                              >> 0x0000000cU)) 
                                       | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                >> 0x0000000dU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                                    >> 0x0000000bU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                      >> 0x0000000cU))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                           >> 0x0000000aU)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                             >> 0x0000000bU))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                    >> 0x0000000aU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                             >> 8U)) 
                                      | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                               >> 9U))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                                   >> 7U)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                     >> 8U))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                        >> 6U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                         >> 7U))) << 6U) 
               | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                          >> 5U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                           >> 6U))) 
                  << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                      >> 4U)) | (1U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                               >> 3U)) 
                                        | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                 >> 4U))))) 
             << 8U) | (((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                 >> 2U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                  >> 3U))) 
                         << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                           >> 1U)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                             >> 2U))) 
                                   << 4U)) | ((((2U 
                                                 & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U]) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                      >> 1U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U]))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__in_dat_mask_int8[1U] 
        = ((((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                        >> 0x0000001eU)) | (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                            >> 0x0000001fU)) 
                << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                  >> 0x0000001dU)) 
                           | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                    >> 0x0000001eU))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                              >> 0x0000001cU)) 
                                       | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                >> 0x0000001dU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                      >> 0x0000001cU))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                           >> 0x0000001aU)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                             >> 0x0000001bU))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                                >> 0x00000019U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                    >> 0x0000001aU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                             >> 0x00000018U)) 
                                      | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                               >> 0x00000019U))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                                   >> 0x00000017U)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                     >> 0x00000018U))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                        >> 0x00000016U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                  >> 0x00000017U))) 
                << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                  >> 0x00000015U)) 
                           | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                    >> 0x00000016U))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                              >> 0x00000014U)) 
                                       | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                                    >> 0x00000013U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                      >> 0x00000014U))))) 
             << 8U) | (((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                 >> 0x00000012U)) | 
                          (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                 >> 0x00000013U))) 
                         << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                           >> 0x00000011U)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                             >> 0x00000012U))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                                    >> 0x00000010U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                      >> 0x00000011U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[2U] 
                                                     >> 0x0000000fU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[0U] 
                                                       >> 0x00000010U)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__in_dat_mask_int8[2U] 
        = ((((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                        >> 0x0000000eU)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                  >> 0x0000000fU))) 
                << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                  >> 0x0000000dU)) 
                           | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                    >> 0x0000000eU))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                              >> 0x0000000cU)) 
                                       | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                >> 0x0000000dU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                                    >> 0x0000000bU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                      >> 0x0000000cU))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                           >> 0x0000000aU)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                             >> 0x0000000bU))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                    >> 0x0000000aU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                             >> 8U)) 
                                      | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                               >> 9U))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                                   >> 7U)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                     >> 8U))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                        >> 6U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                         >> 7U))) << 6U) 
               | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                          >> 5U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                           >> 6U))) 
                  << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                      >> 4U)) | (1U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                               >> 3U)) 
                                        | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                 >> 4U))))) 
             << 8U) | (((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                 >> 2U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                  >> 3U))) 
                         << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                           >> 1U)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                             >> 2U))) 
                                   << 4U)) | ((((2U 
                                                 & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U]) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                      >> 1U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U]))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__in_dat_mask_int8[3U] 
        = ((((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                        >> 0x0000001eU)) | (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                            >> 0x0000001fU)) 
                << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                  >> 0x0000001dU)) 
                           | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                    >> 0x0000001eU))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                              >> 0x0000001cU)) 
                                       | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                >> 0x0000001dU))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                      >> 0x0000001cU))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                           >> 0x0000001aU)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                             >> 0x0000001bU))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                                >> 0x00000019U)) 
                                              | (1U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                    >> 0x0000001aU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                             >> 0x00000018U)) 
                                      | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                               >> 0x00000019U))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                                   >> 0x00000017U)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                     >> 0x00000018U))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                        >> 0x00000016U)) | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                  >> 0x00000017U))) 
                << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                  >> 0x00000015U)) 
                           | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                    >> 0x00000016U))) 
                          << 4U)) | ((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                              >> 0x00000014U)) 
                                       | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                                    >> 0x00000013U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                      >> 0x00000014U))))) 
             << 8U) | (((((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                 >> 0x00000012U)) | 
                          (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                 >> 0x00000013U))) 
                         << 6U) | (((2U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                           >> 0x00000011U)) 
                                    | (1U & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                             >> 0x00000012U))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                                    >> 0x00000010U)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                      >> 0x00000011U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[3U] 
                                                     >> 0x0000000fU)) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1[1U] 
                                                       >> 0x00000010U)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__cfg_reg_en_d1 
        = ((IData)(vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en));
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__11(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0U]));
    } else if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U]);
    }
    if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0U]));
    } else if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U]);
    }
    if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0U]));
    } else if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U]);
    }
    if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0U]));
    } else if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0U]);
    }
    if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[1U]));
    } else if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U]);
    }
    if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[1U]));
    } else if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U]);
    }
    if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[1U]));
    } else if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U]);
    }
    if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[1U]));
    } else if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[1U]);
    }
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[2U]));
    } else if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U]);
    }
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[2U]));
    } else if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U]);
    }
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[2U]));
    } else if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U]);
    }
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[2U]));
    } else if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[2U]);
    }
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[3U]));
    } else if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U]);
    }
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[3U]));
    } else if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U]);
    }
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[3U]));
    } else if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U]);
    }
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[3U]));
    } else if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[3U]);
    }
    if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[4U]));
    } else if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U]);
    }
    if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[4U]));
    } else if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U]);
    }
    if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[4U]));
    } else if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U]);
    }
    if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[4U]));
    } else if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[4U]);
    }
    if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[5U]));
    } else if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U]);
    }
    if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[5U]));
    } else if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U]);
    }
    if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[5U]));
    } else if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U]);
    }
    if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[5U]));
    } else if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[5U]);
    }
    if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[6U]));
    } else if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U]);
    }
    if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[6U]));
    } else if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U]);
    }
    if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[6U]));
    } else if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U]);
    }
    if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[6U]));
    } else if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[6U]);
    }
    if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[7U]));
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U]);
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[7U]));
    } else if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U]);
    }
    if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[7U]));
    } else if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U]);
    }
    if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U] 
         >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[7U]));
    } else if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U] 
                >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[7U]);
    }
    if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[8U]));
    } else if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U]);
    }
    if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[8U]));
    } else if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U]);
    }
    if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[8U]));
    } else if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U]);
    }
    if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[8U]));
    } else if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[8U]);
    }
    if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[9U]));
    } else if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U]);
    }
    if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[9U]));
    } else if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U]);
    }
    if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[9U]));
    } else if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U]);
    }
    if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[9U]));
    } else if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[9U]);
    }
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000aU]));
    } else if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU]);
    }
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000aU]));
    } else if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU]);
    }
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000aU]));
    } else if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU]);
    }
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000aU]));
    } else if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000aU]);
    }
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000bU]));
    } else if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU]);
    }
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000bU]));
    } else if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU]);
    }
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000bU]));
    } else if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU]);
    }
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000bU]));
    } else if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000bU]);
    }
    if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000cU]));
    } else if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU]);
    }
    if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000cU]));
    } else if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU]);
    }
    if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000cU]));
    } else if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU]);
    }
    if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000cU]));
    } else if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000cU]);
    }
    if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000dU]));
    } else if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU]);
    }
    if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000dU]));
    } else if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU]);
    }
    if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000dU]));
    } else if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU]);
    }
    if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000dU]));
    } else if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000dU]);
    }
    if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000eU]));
    } else if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU]);
    }
    if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000eU]));
    } else if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU]);
    }
    if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000eU]));
    } else if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU]);
    }
    if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000eU]));
    } else if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000eU]);
    }
    if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000fU]));
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU]);
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000fU]));
    } else if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU]);
    }
    if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000fU]));
    } else if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU]);
    }
    if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U] 
         >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000fU]));
    } else if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U] 
                >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000000fU]);
    }
    if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000010U]));
    } else if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U]);
    }
    if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000010U]));
    } else if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U]);
    }
    if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000010U]));
    } else if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U]);
    }
    if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000010U]));
    } else if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000010U]);
    }
    if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000011U]));
    } else if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U]);
    }
    if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000011U]));
    } else if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U]);
    }
    if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000011U]));
    } else if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U]);
    }
    if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000011U]));
    } else if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000011U]);
    }
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000012U]));
    } else if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U]);
    }
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000012U]));
    } else if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U]);
    }
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000012U]));
    } else if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U]);
    }
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000012U]));
    } else if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000012U]);
    }
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000013U]));
    } else if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U]);
    }
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000013U]));
    } else if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U]);
    }
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000013U]));
    } else if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U]);
    }
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000013U]));
    } else if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000013U]);
    }
    if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000014U]));
    } else if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U]);
    }
    if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000014U]));
    } else if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U]);
    }
    if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000014U]));
    } else if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U]);
    }
    if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000014U]));
    } else if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000014U]);
    }
    if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000015U]));
    } else if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U]);
    }
    if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000015U]));
    } else if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U]);
    }
    if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000015U]));
    } else if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U]);
    }
    if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000015U]));
    } else if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000015U]);
    }
    if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000016U]));
    } else if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U]);
    }
    if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000016U]));
    } else if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U]);
    }
    if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000016U]));
    } else if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U]);
    }
    if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000016U]));
    } else if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000016U]);
    }
    if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000017U]));
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U]);
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000017U]));
    } else if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U]);
    }
    if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000017U]));
    } else if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U]);
    }
    if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U] 
         >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000017U]));
    } else if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U] 
                >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000017U]);
    }
    if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000018U]));
    } else if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U]);
    }
    if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000018U]));
    } else if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U]);
    }
    if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000018U]));
    } else if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U]);
    }
    if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000018U]));
    } else if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000018U]);
    }
    if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000019U]));
    } else if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U]);
    }
    if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000019U]));
    } else if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U]);
    }
    if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000019U]));
    } else if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U]);
    }
    if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000019U]));
    } else if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x00000019U]);
    }
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001aU]));
    } else if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU]);
    }
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001aU]));
    } else if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU]);
    }
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001aU]));
    } else if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU]);
    }
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001aU]));
    } else if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001aU]);
    }
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001bU]));
    } else if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU]);
    }
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001bU]));
    } else if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU]);
    }
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001bU]));
    } else if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU]);
    }
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001bU]));
    } else if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001bU]);
    }
    if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001cU]));
    } else if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU]);
    }
    if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001cU]));
    } else if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU]);
    }
    if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001cU]));
    } else if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU]);
    }
    if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001cU]));
    } else if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001cU]);
    }
    if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001dU]));
    } else if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU]);
    }
    if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001dU]));
    } else if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU]);
    }
    if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001dU]));
    } else if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU]);
    }
    if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001dU]));
    } else if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001dU]);
    }
    if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001eU]));
    } else if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU]);
    }
    if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001eU]));
    } else if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU]);
    }
    if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001eU]));
    } else if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU]);
    }
    if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001eU]));
    } else if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001eU]);
    }
    if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001fU]));
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU]);
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001fU]));
    } else if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU]);
    }
    if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001fU]));
    } else if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU]);
    }
    if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U] 
         >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001fU]));
    } else if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U] 
                >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d1[0x0000001fU]);
    }
    if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0U]));
    } else if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U]);
    }
    if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0U]));
    } else if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U]);
    }
    if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0U]));
    } else if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U]);
    }
    if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0U]));
    } else if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0U]);
    }
    if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[1U]));
    } else if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U]);
    }
    if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[1U]));
    } else if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U]);
    }
    if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[1U]));
    } else if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U]);
    }
    if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[1U]));
    } else if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[1U]);
    }
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[2U]));
    } else if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U]);
    }
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[2U]));
    } else if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U]);
    }
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[2U]));
    } else if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U]);
    }
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[2U]));
    } else if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[2U]);
    }
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[3U]));
    } else if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U]);
    }
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[3U]));
    } else if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U]);
    }
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[3U]));
    } else if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U]);
    }
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[3U]));
    } else if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[3U]);
    }
    if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[4U]));
    } else if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U]);
    }
    if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[4U]));
    } else if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U]);
    }
    if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[4U]));
    } else if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U]);
    }
    if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[4U]));
    } else if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[4U]);
    }
    if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[5U]));
    } else if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U]);
    }
    if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[5U]));
    } else if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U]);
    }
    if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[5U]));
    } else if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U]);
    }
    if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[5U]));
    } else if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[5U]);
    }
    if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[6U]));
    } else if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U]);
    }
    if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[6U]));
    } else if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U]);
    }
    if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[6U]));
    } else if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U]);
    }
    if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[6U]));
    } else if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[6U]);
    }
    if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[7U]));
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U]);
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[7U]));
    } else if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U]);
    }
    if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[7U]));
    } else if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U]);
    }
    if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U] 
         >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[7U]));
    } else if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U] 
                >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[7U]);
    }
    if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[8U]));
    } else if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U]);
    }
    if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[8U]));
    } else if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U]);
    }
    if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[8U]));
    } else if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U]);
    }
    if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[8U]));
    } else if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[8U]);
    }
    if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[9U]));
    } else if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U]);
    }
    if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[9U]));
    } else if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U]);
    }
    if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[9U]));
    } else if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U]);
    }
    if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[9U]));
    } else if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[9U]);
    }
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000aU]));
    } else if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU]);
    }
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000aU]));
    } else if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU]);
    }
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000aU]));
    } else if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU]);
    }
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000aU]));
    } else if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000aU]);
    }
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000bU]));
    } else if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU]);
    }
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000bU]));
    } else if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU]);
    }
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000bU]));
    } else if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU]);
    }
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000bU]));
    } else if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000bU]);
    }
    if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000cU]));
    } else if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU]);
    }
    if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000cU]));
    } else if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU]);
    }
    if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000cU]));
    } else if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU]);
    }
    if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000cU]));
    } else if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000cU]);
    }
    if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000dU]));
    } else if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU]);
    }
    if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000dU]));
    } else if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU]);
    }
    if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000dU]));
    } else if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU]);
    }
    if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000dU]));
    } else if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000dU]);
    }
    if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000eU]));
    } else if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU]);
    }
    if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000eU]));
    } else if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU]);
    }
    if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000eU]));
    } else if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU]);
    }
    if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000eU]));
    } else if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000eU]);
    }
    if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000fU]));
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU]);
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000fU]));
    } else if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU]);
    }
    if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000fU]));
    } else if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU]);
    }
    if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U] 
         >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000fU]));
    } else if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U] 
                >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000000fU]);
    }
    if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000010U]));
    } else if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U]);
    }
    if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000010U]));
    } else if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U]);
    }
    if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000010U]));
    } else if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U]);
    }
    if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000010U]));
    } else if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000010U]);
    }
    if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000011U]));
    } else if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U]);
    }
    if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000011U]));
    } else if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U]);
    }
    if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000011U]));
    } else if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U]);
    }
    if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000011U]));
    } else if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000011U]);
    }
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000012U]));
    } else if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U]);
    }
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000012U]));
    } else if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U]);
    }
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000012U]));
    } else if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U]);
    }
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000012U]));
    } else if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000012U]);
    }
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000013U]));
    } else if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U]);
    }
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000013U]));
    } else if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U]);
    }
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000013U]));
    } else if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U]);
    }
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000013U]));
    } else if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000013U]);
    }
    if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000014U]));
    } else if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U]);
    }
    if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000014U]));
    } else if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U]);
    }
    if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000014U]));
    } else if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U]);
    }
    if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000014U]));
    } else if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000014U]);
    }
    if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000015U]));
    } else if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U]);
    }
    if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000015U]));
    } else if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U]);
    }
    if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000015U]));
    } else if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U]);
    }
    if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000015U]));
    } else if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000015U]);
    }
    if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000016U]));
    } else if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U]);
    }
    if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000016U]));
    } else if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U]);
    }
    if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000016U]));
    } else if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U]);
    }
    if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000016U]));
    } else if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000016U]);
    }
    if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000017U]));
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U]);
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000017U]));
    } else if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U]);
    }
    if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000017U]));
    } else if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U]);
    }
    if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U] 
         >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000017U]));
    } else if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U] 
                >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000017U]);
    }
    if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000018U]));
    } else if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U]);
    }
    if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000018U]));
    } else if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U]);
    }
    if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000018U]));
    } else if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U]);
    }
    if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000018U]));
    } else if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000018U]);
    }
    if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000019U]));
    } else if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U]);
    }
    if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000019U]));
    } else if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U]);
    }
    if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000019U]));
    } else if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U]);
    }
    if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000019U]));
    } else if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x00000019U]);
    }
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001aU]));
    } else if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU]);
    }
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001aU]));
    } else if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU]);
    }
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001aU]));
    } else if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU]);
    }
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001aU]));
    } else if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001aU]);
    }
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001bU]));
    } else if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU]);
    }
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001bU]));
    } else if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU]);
    }
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001bU]));
    } else if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU]);
    }
    if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001bU]));
    } else if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001bU]);
    }
    if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001cU]));
    } else if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU]);
    }
    if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001cU]));
    } else if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU]);
    }
    if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001cU]));
    } else if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU]);
    }
    if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001cU]));
    } else if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001cU]);
    }
    if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001dU]));
    } else if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU]);
    }
    if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001dU]));
    } else if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU]);
    }
    if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001dU]));
    } else if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU]);
    }
    if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001dU]));
    } else if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001dU]);
    }
    if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001eU]));
    } else if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU]);
    }
    if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001eU]));
    } else if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU]);
    }
    if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001eU]));
    } else if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU]);
    }
    if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001eU]));
    } else if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001eU]);
    }
    if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU]) 
               | (0x000000ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001fU]));
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU] 
            = (0xffffff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU]);
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU]) 
               | (0x0000ff00U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001fU]));
    } else if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU] 
            = (0xffff00ffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU]);
    }
    if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU]) 
               | (0x00ff0000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001fU]));
    } else if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U])) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU] 
            = (0xff00ffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU]);
    }
    if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U] 
         >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU] 
            = ((0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU]) 
               | (0xff000000U & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001fU]));
    } else if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U] 
                >> 0x0000001fU)) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU] 
            = (0x00ffffffU & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d1[0x0000001fU]);
    }
}

void Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__13(Vsim_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_NV_NVDLA_partition_m___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data7_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data6_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data5_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data4_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data3_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data2_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data1_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data0_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[1U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data7_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data6_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data5_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data4_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data3_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data2_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data1_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data0_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[2U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data15_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data14_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data13_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data12_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data11_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data10_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data9_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data8_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[3U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data15_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data14_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data13_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data12_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data11_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data10_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data9_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data8_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[4U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data23_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data22_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data21_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data20_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data19_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data18_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data17_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data16_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[5U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data23_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data22_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data21_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data20_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data19_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data18_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data17_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data16_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[6U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data31_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data30_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data29_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data28_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data27_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data26_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data25_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data24_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[7U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data31_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data30_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data29_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data28_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data27_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data26_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data25_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data24_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[8U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data39_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data38_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data37_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data36_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data35_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data34_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data33_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data32_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[9U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data39_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data38_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data37_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data36_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data35_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data34_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data33_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data32_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000aU] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data47_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data46_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data45_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data44_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data43_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data42_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data41_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data40_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000bU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data47_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data46_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data45_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data44_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data43_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data42_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data41_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data40_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000cU] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data55_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data54_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data53_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data52_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data51_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data50_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data49_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data48_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000dU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data55_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data54_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data53_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data52_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data51_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data50_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data49_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data48_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000eU] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data63_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data62_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data61_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data60_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data59_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data58_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data57_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data56_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000000fU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data63_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data62_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data61_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data60_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data59_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data58_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data57_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data56_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000010U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data71_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data70_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data69_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data68_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data67_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data66_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data65_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data64_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000011U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data71_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data70_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data69_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data68_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data67_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data66_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data65_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data64_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000012U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data79_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data78_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data77_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data76_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data75_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data74_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data73_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data72_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000013U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data79_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data78_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data77_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data76_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data75_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data74_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data73_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data72_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000014U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data87_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data86_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data85_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data84_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data83_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data82_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data81_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data80_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000015U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data87_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data86_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data85_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data84_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data83_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data82_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data81_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data80_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000016U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data95_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data94_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data93_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data92_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data91_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data90_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data89_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data88_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000017U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data95_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data94_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data93_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data92_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data91_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data90_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data89_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data88_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000018U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data103_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data102_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data101_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data100_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data99_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data98_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data97_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data96_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x00000019U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data103_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data102_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data101_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data100_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data99_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data98_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data97_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data96_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001aU] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data111_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data110_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data109_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data108_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data107_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data106_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data105_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data104_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001bU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data111_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data110_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data109_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data108_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data107_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data106_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data105_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data104_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001cU] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data119_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data118_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data117_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data116_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data115_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data114_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data113_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data112_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001dU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data119_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data118_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data117_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data116_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data115_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data114_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data113_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data112_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001eU] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data127_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data126_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data125_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data124_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data123_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data122_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data121_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data120_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data_d0[0x0000001fU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data127_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data126_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data125_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data124_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data123_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data122_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data121_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_data120_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data7_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data6_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data5_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data4_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data3_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data2_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data1_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data0_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[1U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data7_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data6_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data5_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data4_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data3_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data2_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data1_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data0_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[2U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data15_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data14_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data13_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data12_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data11_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data10_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data9_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data8_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[3U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data15_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data14_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data13_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data12_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data11_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data10_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data9_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data8_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[4U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data23_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data22_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data21_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data20_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data19_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data18_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data17_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data16_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[5U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data23_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data22_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data21_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data20_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data19_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data18_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data17_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data16_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[6U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data31_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data30_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data29_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data28_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data27_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data26_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data25_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data24_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[7U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data31_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data30_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data29_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data28_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data27_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data26_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data25_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data24_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[8U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data39_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data38_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data37_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data36_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data35_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data34_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data33_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data32_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[9U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data39_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data38_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data37_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data36_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data35_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data34_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data33_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data32_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000aU] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data47_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data46_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data45_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data44_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data43_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data42_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data41_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data40_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000bU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data47_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data46_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data45_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data44_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data43_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data42_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data41_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data40_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000cU] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data55_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data54_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data53_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data52_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data51_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data50_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data49_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data48_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000dU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data55_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data54_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data53_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data52_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data51_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data50_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data49_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data48_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000eU] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data63_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data62_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data61_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data60_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data59_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data58_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data57_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data56_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000000fU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data63_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data62_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data61_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data60_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data59_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data58_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data57_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data56_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000010U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data71_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data70_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data69_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data68_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data67_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data66_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data65_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data64_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000011U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data71_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data70_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data69_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data68_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data67_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data66_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data65_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data64_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000012U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data79_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data78_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data77_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data76_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data75_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data74_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data73_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data72_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000013U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data79_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data78_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data77_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data76_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data75_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data74_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data73_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data72_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000014U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data87_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data86_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data85_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data84_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data83_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data82_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data81_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data80_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000015U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data87_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data86_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data85_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data84_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data83_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data82_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data81_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data80_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000016U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data95_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data94_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data93_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data92_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data91_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data90_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data89_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data88_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000017U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data95_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data94_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data93_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data92_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data91_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data90_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data89_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data88_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000018U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data103_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data102_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data101_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data100_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data99_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data98_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data97_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data96_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x00000019U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data103_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data102_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data101_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data100_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data99_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data98_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data97_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data96_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001aU] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data111_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data110_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data109_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data108_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data107_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data106_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data105_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data104_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001bU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data111_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data110_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data109_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data108_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data107_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data106_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data105_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data104_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001cU] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data119_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data118_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data117_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data116_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data115_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data114_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data113_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data112_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001dU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data119_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data118_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data117_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data116_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data115_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data114_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data113_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data112_d1)))))) 
                   >> 0x00000020U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001eU] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data127_d1) 
                                       << 0x00000018U) 
                                      | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data126_d1) 
                                         << 0x00000010U)) 
                                     | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data125_d1) 
                                         << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data124_d1))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data123_d1) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data122_d1) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data121_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data120_d1)))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data_d0[0x0000001fU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data127_d1) 
                                        << 0x00000018U) 
                                       | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data126_d1) 
                                          << 0x00000010U)) 
                                      | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data125_d1) 
                                          << 8U) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data124_d1))))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data123_d1) 
                                                          << 0x00000018U) 
                                                         | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data122_d1) 
                                                            << 0x00000010U)) 
                                                        | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data121_d1) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_data120_d1)))))) 
                   >> 0x00000020U));
}

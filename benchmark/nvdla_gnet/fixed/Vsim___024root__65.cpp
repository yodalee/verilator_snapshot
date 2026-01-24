// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_sequent__TOP__1450(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1450\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__ITOP__DOT__radclk) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
    }
}

void Vsim___024root___nba_comb__TOP__278(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__278\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__wthru_en)
            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net)
            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2));
}

void Vsim___024root___nba_comb__TOP__279(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__279\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__wthru_en)
            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net)
            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2));
}

void Vsim___024root___nba_comb__TOP__280(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__280\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__wthru_en)
            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net)
            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2));
}

void Vsim___024root___nba_comb__TOP__281(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__281\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__wthru_en)
            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net)
            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2));
}

void Vsim___024root___nba_comb__TOP__282(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__282\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__cmd2dat_dma_pd 
        = ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ra))
            ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ra))
                ? 0U : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ra))
                         ? 0U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__dma_fifo_pd)))
            : ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ra))
                ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ra))
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ram_ff3)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ram_ff2))
                : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ra))
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ram_ff1)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__ram__DOT__ram_ff0))));
}

void Vsim___024root___nba_sequent__TOP__1451(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1451\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_re_r0)));
    }
}

void Vsim___024root___nba_sequent__TOP__1452(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1452\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__ram_Inst_32X32__DOT__ITOP__DOT__radclk) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__ram_Inst_32X32__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__ram_Inst_32X32__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
    }
}

void Vsim___024root___nba_sequent__TOP__1453(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1453\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__muxed_re_r0)));
    }
}

void Vsim___024root___nba_sequent__TOP__1454(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1454\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__radclk) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
    }
}

void Vsim___024root___nba_comb__TOP__283(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__283\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat_is_nan__BRA__3__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__cfg_do_fp16) 
           & (IData)(((0x7c00000000000000ULL == (0x7c00000000000000ULL 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_data)) 
                      & (0U != (0x000003ffU & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_data 
                                                       >> 0x00000030U)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat_is_nan__BRA__2__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__cfg_do_fp16) 
           & (IData)(((0x00007c0000000000ULL == (0x00007c0000000000ULL 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_data)) 
                      & (0U != (0x000003ffU & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_data 
                                                       >> 0x00000020U)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat_is_nan__BRA__1__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__cfg_do_fp16) 
           & (IData)(((0x000000007c000000ULL == (0x000000007c000000ULL 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_data)) 
                      & (0U != (0x000003ffU & (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_data 
                                                       >> 0x00000010U)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat_is_nan__BRA__0__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__cfg_do_fp16) 
           & (IData)(((0x0000000000007c00ULL == (0x0000000000007c00ULL 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_data)) 
                      & (0U != (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_data))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__nan_num_in_8byte 
        = (7U & ((3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat_is_nan__BRA__0__KET__) 
                        + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat_is_nan__BRA__1__KET__))) 
                 + (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat_is_nan__BRA__2__KET__) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat_is_nan__BRA__3__KET__)))));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hdfdc498f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hce636776_0;

void Vsim___024root___nba_sequent__TOP__1456(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1456\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_line 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_line;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_wr_accpet 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_busy_in)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__op_prcess));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__wdma_done 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__cnt_clr) 
                | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__waiting_rdma)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__reading_done_flag)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__cnt_clr) 
             & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__reading_done_flag)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__waiting_rdma = 1U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__reading_done_flag) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__waiting_rdma = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__waiting_rdma = 0U;
    }
    __Vtableidx13 = ((((4U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__datin_src_cfg)) 
                              << 2U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__op_load) 
                                          << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__datin_src_cfg))) 
                      << 3U) | ((0xfffffffcU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hd45498a0_0_13) 
                                                 << 2U) 
                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p6_pipe_data[0U])) 
                                | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__cnt_clr) 
                                    << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if (Vsim__ConstPool__TABLE_hdfdc498f_0[__Vtableidx13]) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__reading_done_flag 
            = Vsim__ConstPool__TABLE_hce636776_0[__Vtableidx13];
    }
}

void Vsim___024root___nba_sequent__TOP__1458(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1458\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U];
    }
}

void Vsim___024root___nba_sequent__TOP__1459(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1459\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0[2U];
    }
}

void Vsim___024root___nba_sequent__TOP__1460(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1460\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__RADR 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__D_Ra_reg_r0;
    }
}

void Vsim___024root___nba_comb__TOP__284(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__284\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cmd_en) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0U] 
            = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__line_addr);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[1U] 
            = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__line_addr 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[2U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_cmd_require_ack) 
                << 0x0000000dU) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_line_size));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[4U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[5U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[6U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[7U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[8U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[9U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x0000000aU] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x0000000bU] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x0000000cU] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x0000000dU] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x0000000eU] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x0000000fU] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x00000010U] = 0U;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x00000010U] 
            = (4U | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_line_size)) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__is_last_beat))
                      ? 1U : 3U));
    }
}

void Vsim___024root___nba_comb__TOP__285(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__285\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x0000000fU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_data[0x00000010U];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__pre_muxed_Di_w0_B[0x00000010U];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0U] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[0U]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[0U])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[0U]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[0U])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[1U] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[1U]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[1U])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[1U]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[1U])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[2U] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[2U]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[2U])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[2U]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[2U])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[3U] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[3U]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[3U])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[3U]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[3U])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[4U] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[4U]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[4U])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[4U]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[4U])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[5U] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[5U]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[5U])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[5U]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[5U])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[6U] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[6U]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[6U])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[6U]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[6U])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[7U] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[7U]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[7U])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[7U]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[7U])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[8U] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[8U]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[8U])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[8U]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[8U])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[9U] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[9U]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[9U])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[9U]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[9U])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000aU] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000aU]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[0x0000000aU])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[0x0000000aU]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[0x0000000aU])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000bU] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000bU]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[0x0000000bU])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[0x0000000bU]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[0x0000000bU])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000cU] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000cU]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[0x0000000cU])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[0x0000000cU]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[0x0000000cU])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000dU] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000dU]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[0x0000000dU])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[0x0000000dU]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[0x0000000dU])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000eU] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000eU]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[0x0000000eU])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[0x0000000eU]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[0x0000000eU])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x0000000fU] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000fU]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[0x0000000fU])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[0x0000000fU]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[0x0000000fU])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_Di_w0[0x00000010U] 
            = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_data[0x00000010U])) 
               | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_data[0x00000010U]
                      : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_data[0x00000010U])));
    }
}

void Vsim___024root___nba_sequent__TOP__1461(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1461\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RECLK) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__dout 
            = ((((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow0__DOT__arr
                  [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RADR) 
                                   >> 2U))] & (- (IData)(
                                                         ((~ 
                                                           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RADR) 
                                                            >> 1U)) 
                                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT____VdfgRegularize_h64eea6ca_0_10))))) 
                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow1__DOT__arr
                    [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RADR) 
                                     >> 2U))] & (- (IData)(
                                                           ((~ 
                                                             ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RADR) 
                                                              >> 1U)) 
                                                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT____VdfgRegularize_h64eea6ca_0_5)))))) 
                | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow2__DOT__arr
                   [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RADR) 
                                    >> 2U))] & (- (IData)(
                                                          ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT____VdfgRegularize_h64eea6ca_0_10) 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RADR) 
                                                              >> 1U)))))) 
               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow3__DOT__arr
                  [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RADR) 
                                   >> 2U))] & (- (IData)(
                                                         ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT____VdfgRegularize_h64eea6ca_0_5) 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RADR) 
                                                             >> 1U))))));
    }
}

void Vsim___024root___nba_comb__TOP__286(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__286\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__tran_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_pvld_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_prdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT____VdfgRegularize_hf194c145_0_1 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT____VdfgRegularize_hf194c145_0_1)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_pvld_p));
}

void Vsim___024root___nba_sequent__TOP__1464(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1464\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__radclk) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[8U];
    }
}

void Vsim___024root___nba_comb__TOP__287(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__287\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__mbist_Do_r0_int_net[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__mbist_Do_r0_int_net[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__mbist_Do_r0_int_net[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__mbist_Do_r0_int_net[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__mbist_Do_r0_int_net[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__mbist_Do_r0_int_net[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__mbist_Do_r0_int_net[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[7U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__mbist_Do_r0_int_net[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[8U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__mbist_Do_r0_int_net[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[9U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Data_reg_temp_r0;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg2dp_addr 
        = (((QData)((IData)(((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3116[7U] 
                              << 0x0000001aU) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3116[6U] 
                                                 >> 6U)))) 
            << 0x00000020U) | (QData)((IData)((0xffffffe0U 
                                               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[9U] 
                                                   << 0x0000001fU) 
                                                  | (0x7fffffe0U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[8U] 
                                                        >> 1U)))))));
}

void Vsim___024root___nba_sequent__TOP__1465(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1465\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__RECLK) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__dout 
            = ((((0x27U >= (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__RADR) 
                                           >> 1U)))
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__iow0__DOT__arr
                 [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__RADR) 
                                  >> 1U))] : 0U) & 
                (- (IData)(((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__RADR)) 
                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__RECLK))))) 
               | (((0x27U >= (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__RADR) 
                                             >> 1U)))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__iow1__DOT__arr
                   [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__RADR) 
                                    >> 1U))] : 0U) 
                  & (- (IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__RECLK) 
                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__RADR))))));
    }
}

void Vsim___024root___nba_comb__TOP__288(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__288\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__is_last_beat 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__beat_count) 
           == (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__ig2eg_size) 
                              >> 1U)));
}

void Vsim___024root___nba_comb__TOP__289(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__289\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__is_last_beat 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__beat_count) 
           == (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__ig2eg_size) 
                              >> 1U)));
}

void Vsim___024root___nba_comb__TOP__290(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__290\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__is_last_beat 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__beat_count) 
           == (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__ig2eg_size) 
                              >> 1U)));
}

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h9e67c271_0;

void Vsim___024root___nba_comb__TOP__291(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__291\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cfg_mode_1bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cfg_mode_2bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cfg_mode_1bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cfg_mode_2bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim___024root___nba_comb__TOP__292(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__292\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cfg_mode_1bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cfg_mode_2bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cfg_mode_1bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cfg_mode_2bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim___024root___nba_comb__TOP__293(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__293\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_cnt) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[0U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data1_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data0_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[1U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data3_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data2_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[2U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data5_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data4_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[3U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data7_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data6_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[4U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data9_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data8_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[5U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data11_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data10_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[6U] 
            = (IData)((((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data15_ext) 
                                          << 0x00000010U) 
                                         | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data14_ext)))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data13_ext) 
                                                            << 0x00000010U) 
                                                           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data12_ext))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[7U] 
            = (IData)(((((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data15_ext) 
                                           << 0x00000010U) 
                                          | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data14_ext)))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data13_ext) 
                                                             << 0x00000010U) 
                                                            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data12_ext))))) 
                       >> 0x00000020U));
    }
}

void Vsim___024root___nba_comb__TOP__294(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__294\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_1bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_2bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_1bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_2bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim___024root___nba_comb__TOP__295(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__295\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_1bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_2bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_1bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_2bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim___024root___nba_comb__TOP__296(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__296\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_cnt) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[0U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data1_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data0_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[1U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data3_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data2_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[2U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data5_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data4_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[3U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data7_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data6_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[4U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data9_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data8_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[5U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data11_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data10_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[6U] 
            = (IData)((((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data15_ext) 
                                          << 0x00000010U) 
                                         | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data14_ext)))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data13_ext) 
                                                            << 0x00000010U) 
                                                           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data12_ext))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[7U] 
            = (IData)(((((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data15_ext) 
                                           << 0x00000010U) 
                                          | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data14_ext)))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data13_ext) 
                                                             << 0x00000010U) 
                                                            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data12_ext))))) 
                       >> 0x00000020U));
    }
}

void Vsim___024root___nba_comb__TOP__297(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__297\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<16>/*511:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout;
    VL_ZERO_W(512, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout);
    VlWide<16>/*511:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di;
    VL_ZERO_W(512, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di);
    VlWide<16>/*511:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout;
    VL_ZERO_W(512, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout);
    VlWide<16>/*511:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di;
    VL_ZERO_W(512, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di);
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[7U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[8U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[9U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000aU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000bU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000cU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000dU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000eU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000fU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[7U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[1U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[2U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[3U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[4U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[5U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[6U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[7U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[7U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[8U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[8U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[9U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[9U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0x0000000aU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000aU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0x0000000bU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000bU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0x0000000cU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000cU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0x0000000dU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000dU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0x0000000eU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000eU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0x0000000fU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000fU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[0U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[1U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[2U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[3U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[4U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[5U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[6U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[7U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[0U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[1U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[9U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[2U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0x0000000aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[3U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[4U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[5U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0x0000000dU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[6U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0x0000000eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[7U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__di[0x0000000fU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0U] 
        = ((((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[0U]) 
             | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[0U] 
                               >> 8U))) << 0x00000010U) 
           | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[0U] 
                              << 8U)) | (0x000000ffU 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[0U])));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[1U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[0U] 
                             >> 0x00000010U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[0U] 
                                                 >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[0U] 
                                               >> 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[0U] 
                                                 >> 0x00000010U))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[2U] 
        = ((((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[1U]) 
             | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[1U] 
                               >> 8U))) << 0x00000010U) 
           | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[1U] 
                              << 8U)) | (0x000000ffU 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[1U])));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[3U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[1U] 
                             >> 0x00000010U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[1U] 
                                                 >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[1U] 
                                               >> 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[1U] 
                                                 >> 0x00000010U))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[4U] 
        = ((((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[2U]) 
             | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[2U] 
                               >> 8U))) << 0x00000010U) 
           | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[2U] 
                              << 8U)) | (0x000000ffU 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[2U])));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[5U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[2U] 
                             >> 0x00000010U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[2U] 
                                                 >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[2U] 
                                               >> 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[2U] 
                                                 >> 0x00000010U))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[6U] 
        = ((((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[3U]) 
             | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[3U] 
                               >> 8U))) << 0x00000010U) 
           | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[3U] 
                              << 8U)) | (0x000000ffU 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[3U])));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[7U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[3U] 
                             >> 0x00000010U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[3U] 
                                                 >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[3U] 
                                               >> 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[3U] 
                                                 >> 0x00000010U))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[8U] 
        = ((((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[4U]) 
             | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[4U] 
                               >> 8U))) << 0x00000010U) 
           | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[4U] 
                              << 8U)) | (0x000000ffU 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[4U])));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[9U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[4U] 
                             >> 0x00000010U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[4U] 
                                                 >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[4U] 
                                               >> 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[4U] 
                                                 >> 0x00000010U))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0x0000000aU] 
        = ((((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[5U]) 
             | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[5U] 
                               >> 8U))) << 0x00000010U) 
           | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[5U] 
                              << 8U)) | (0x000000ffU 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[5U])));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0x0000000bU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[5U] 
                             >> 0x00000010U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[5U] 
                                                 >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[5U] 
                                               >> 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[5U] 
                                                 >> 0x00000010U))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0x0000000cU] 
        = ((((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[6U]) 
             | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[6U] 
                               >> 8U))) << 0x00000010U) 
           | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[6U] 
                              << 8U)) | (0x000000ffU 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[6U])));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0x0000000dU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[6U] 
                             >> 0x00000010U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[6U] 
                                                 >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[6U] 
                                               >> 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[6U] 
                                                 >> 0x00000010U))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0x0000000eU] 
        = ((((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[7U]) 
             | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[7U] 
                               >> 8U))) << 0x00000010U) 
           | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[7U] 
                              << 8U)) | (0x000000ffU 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[7U])));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0x0000000fU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[7U] 
                             >> 0x00000010U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[7U] 
                                                 >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di1[7U] 
                                               >> 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__Vstatic__di0[7U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[1U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[2U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[3U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[4U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[5U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[6U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[7U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[8U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[9U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[9U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0x0000000aU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0x0000000aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0x0000000bU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0x0000000cU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0x0000000dU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0x0000000dU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0x0000000eU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0x0000000eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0x0000000fU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb8__0__Vfuncout[0x0000000fU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[1U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[2U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[3U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[4U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[5U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[6U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[7U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[7U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[8U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[8U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[9U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[9U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0x0000000aU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000aU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0x0000000bU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000bU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0x0000000cU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000cU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0x0000000dU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000dU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0x0000000eU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000eU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0x0000000fU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000fU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[0U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[1U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[2U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[3U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[4U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[5U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[6U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[7U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[0U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[1U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[9U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[2U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0x0000000aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[3U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[4U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[5U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0x0000000dU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[6U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0x0000000eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[7U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__di[0x0000000fU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[0U]) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[0U] 
                                        >> 0x00000010U)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[0U] 
                                                        << 0x00000010U) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[0U]))))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[1U] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[0U]) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[0U] 
                                         >> 0x00000010U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[0U] 
                                                         << 0x00000010U) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[0U]))))) 
                   >> 0x00000020U));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[2U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[1U]) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[1U] 
                                        >> 0x00000010U)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[1U] 
                                                        << 0x00000010U) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[1U]))))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[3U] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[1U]) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[1U] 
                                         >> 0x00000010U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[1U] 
                                                         << 0x00000010U) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[1U]))))) 
                   >> 0x00000020U));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[4U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[2U]) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[2U] 
                                        >> 0x00000010U)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[2U] 
                                                        << 0x00000010U) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[2U]))))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[5U] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[2U]) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[2U] 
                                         >> 0x00000010U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[2U] 
                                                         << 0x00000010U) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[2U]))))) 
                   >> 0x00000020U));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[6U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[3U]) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[3U] 
                                        >> 0x00000010U)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[3U] 
                                                        << 0x00000010U) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[3U]))))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[7U] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[3U]) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[3U] 
                                         >> 0x00000010U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[3U] 
                                                         << 0x00000010U) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[3U]))))) 
                   >> 0x00000020U));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[8U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[4U]) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[4U] 
                                        >> 0x00000010U)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[4U] 
                                                        << 0x00000010U) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[4U]))))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[9U] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[4U]) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[4U] 
                                         >> 0x00000010U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[4U] 
                                                         << 0x00000010U) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[4U]))))) 
                   >> 0x00000020U));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0x0000000aU] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[5U]) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[5U] 
                                        >> 0x00000010U)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[5U] 
                                                        << 0x00000010U) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[5U]))))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0x0000000bU] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[5U]) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[5U] 
                                         >> 0x00000010U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[5U] 
                                                         << 0x00000010U) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[5U]))))) 
                   >> 0x00000020U));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0x0000000cU] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[6U]) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[6U] 
                                        >> 0x00000010U)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[6U] 
                                                        << 0x00000010U) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[6U]))))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0x0000000dU] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[6U]) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[6U] 
                                         >> 0x00000010U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[6U] 
                                                         << 0x00000010U) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[6U]))))) 
                   >> 0x00000020U));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0x0000000eU] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[7U]) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[7U] 
                                        >> 0x00000010U)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[7U] 
                                                        << 0x00000010U) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[7U]))))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0x0000000fU] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[7U]) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[7U] 
                                         >> 0x00000010U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di1[7U] 
                                                         << 0x00000010U) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__Vstatic__di0[7U]))))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[1U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[2U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[3U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[4U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[5U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[6U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[7U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[8U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[9U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[9U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0x0000000aU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0x0000000aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0x0000000bU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0x0000000cU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0x0000000dU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0x0000000dU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0x0000000eU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0x0000000eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0x0000000fU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__data_comb16__1__Vfuncout[0x0000000fU];
}

void Vsim___024root___nba_comb__TOP__298(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__298\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_1bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod1_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_2bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_1bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_2bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim___024root___nba_comb__TOP__299(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__299\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_1bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod3_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_2bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_1bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod1_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod1_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_2bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim___024root___nba_comb__TOP__300(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__300\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_cnt) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod2_pd[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[0U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data1_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data0_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[1U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data3_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data2_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[2U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data5_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data4_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[3U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data7_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data6_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[4U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data9_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data8_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[5U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data11_ext) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data10_ext));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[6U] 
            = (IData)((((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data15_ext) 
                                          << 0x00000010U) 
                                         | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data14_ext)))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data13_ext) 
                                                            << 0x00000010U) 
                                                           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data12_ext))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[7U] 
            = (IData)(((((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data15_ext) 
                                           << 0x00000010U) 
                                          | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data14_ext)))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data13_ext) 
                                                             << 0x00000010U) 
                                                            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_rod0_data12_ext))))) 
                       >> 0x00000020U));
    }
}

void Vsim___024root___nba_comb__TOP__301(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__301\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale 
            = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_oflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
                << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_oflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                    << 0x0000000fU) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_oflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14) 
                                       << 0x0000000eU) 
                                      | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_oflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10) 
                                          << 0x0000000aU) 
                                         | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_oflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale 
            = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
                << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                    << 0x0000000fU) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14) 
                                       << 0x0000000eU) 
                                      | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10) 
                                          << 0x0000000aU) 
                                         | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale 
            = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_oflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
                << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_oflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                    << 0x0000000fU) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_oflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14) 
                                       << 0x0000000eU) 
                                      | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_oflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10) 
                                          << 0x0000000aU) 
                                         | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_oflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale 
            = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_uflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
                << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_uflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                    << 0x0000000fU) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_uflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14) 
                                       << 0x0000000eU) 
                                      | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_uflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10) 
                                          << 0x0000000aU) 
                                         | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_uflow_scale.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut2intp_pvld 
            = (0x0000000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__FMcvt_out_vld));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale 
            = ((0x00010000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__reg2dp_lut_le_slope_oflow_scale_sync) 
                               << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__reg2dp_lut_le_slope_oflow_scale_sync));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale 
            = ((0x00010000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__reg2dp_lut_le_slope_uflow_scale_sync) 
                               << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__reg2dp_lut_le_slope_uflow_scale_sync));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale 
            = ((0x00010000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__reg2dp_lut_lo_slope_oflow_scale_sync) 
                               << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__reg2dp_lut_lo_slope_oflow_scale_sync));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale 
            = ((0x00010000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__reg2dp_lut_lo_slope_uflow_scale_sync) 
                               << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__reg2dp_lut_lo_slope_uflow_scale_sync));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut2intp_pvld 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_pvld_f;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0U] 
        = ((0xffff0000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0U]) 
           | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                  ? 0U : (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel) 
                                         >> 4U))) << 0x0000000cU) 
               | (0x00000f00U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                                   ? ((((2U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                               >> 3U)) 
                                        | (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                                 >> 4U))) 
                                       << 2U) | ((2U 
                                                  & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                                     >> 3U)) 
                                                 | (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                                       >> 4U))))
                                   : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel)) 
                                 << 8U))) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                                                ? 0U
                                                : (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel) 
                                                      >> 4U))) 
                                              << 4U) 
                                             | (0x0000000fU 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                                                    ? 
                                                   ((((2U 
                                                       & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                                          >> 4U)) 
                                                      | (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                                            >> 5U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                                           >> 4U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                                             >> 5U))))
                                                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0U] 
        = ((0x0000ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : ((0x000c0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_7 
                                        << 2U)) | (
                                                   (0x00030000U 
                                                    & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_7) 
                                                   | (0x0000ffffU 
                                                      & ((0x00000080U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel))
                                                          ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_7
                                                          : 
                                                         ((0x00000080U 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel))
                                                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_7
                                                           : 0U)))))) 
              << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[1U] 
        = ((0xfffffff0U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[1U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : ((0x000c0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_7 
                                        << 2U)) | (
                                                   (0x00030000U 
                                                    & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_7) 
                                                   | (0x0000ffffU 
                                                      & ((0x00000080U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel))
                                                          ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_7
                                                          : 
                                                         ((0x00000080U 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel))
                                                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_7
                                                           : 0U)))))) 
              >> 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[1U] 
        = ((0xff00000fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[1U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : ((0x000c0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_6 
                                        << 2U)) | (
                                                   (0x00030000U 
                                                    & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_6) 
                                                   | (0x0000ffffU 
                                                      & ((0x00000040U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel))
                                                          ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_6
                                                          : 
                                                         ((0x00000040U 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel))
                                                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_6
                                                           : 0U)))))) 
              << 4U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[1U] 
        = ((0x00ffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[1U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : ((0x000c0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_5 
                                        << 2U)) | (
                                                   (0x00030000U 
                                                    & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_5) 
                                                   | (0x0000ffffU 
                                                      & ((0x00000020U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel))
                                                          ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_5
                                                          : 
                                                         ((0x00000020U 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel))
                                                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_5
                                                           : 0U)))))) 
              << 0x00000018U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[2U] 
        = ((0xfffff000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[2U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : ((0x000c0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_5 
                                        << 2U)) | (
                                                   (0x00030000U 
                                                    & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_5) 
                                                   | (0x0000ffffU 
                                                      & ((0x00000020U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel))
                                                          ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_5
                                                          : 
                                                         ((0x00000020U 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel))
                                                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_5
                                                           : 0U)))))) 
              >> 8U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[2U] 
        = ((0x00000fffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[2U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : ((0x000c0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_4 
                                        << 2U)) | (
                                                   (0x00030000U 
                                                    & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_4) 
                                                   | (0x0000ffffU 
                                                      & ((0x00000010U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel))
                                                          ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_4
                                                          : 
                                                         ((0x00000010U 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel))
                                                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_4
                                                           : 0U)))))) 
              << 0x0000000cU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[3U] 
        = ((0xfff00000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[3U]) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
               ? ((0x000f0000U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                  << 0x00000010U)) 
                  | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.uint16tofp17_Xout))
               : ((0x000c0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_3 
                                  << 2U)) | ((0x00030000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_3) 
                                             | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.uint16tofp17_Xin)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[3U] 
        = ((0x000fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[3U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((0x000f0000U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                   << 0x00000010U)) 
                   | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.uint16tofp17_Xout))
                : ((0x000c0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_2 
                                   << 2U)) | ((0x00030000U 
                                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_2) 
                                              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.uint16tofp17_Xin)))) 
              << 0x00000014U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[4U] 
        = ((0xffffff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[4U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((0x000f0000U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                   << 0x00000010U)) 
                   | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.uint16tofp17_Xout))
                : ((0x000c0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_2 
                                   << 2U)) | ((0x00030000U 
                                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_2) 
                                              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.uint16tofp17_Xin)))) 
              >> 0x0000000cU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[4U] 
        = ((0xf00000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[4U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((0x000f0000U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                   << 0x00000010U)) 
                   | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.uint16tofp17_Xout))
                : ((0x000c0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_1 
                                   << 2U)) | ((0x00030000U 
                                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_1) 
                                              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.uint16tofp17_Xin)))) 
              << 8U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[4U] 
        = ((0x0fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[4U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((0x000f0000U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                   << 0x00000010U)) 
                   | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.uint16tofp17_Xout))
                : ((0x000c0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_0 
                                   << 2U)) | ((0x00030000U 
                                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_0) 
                                              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.uint16tofp17_Xin)))) 
              << 0x0000001cU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[5U] 
        = ((0xffff0000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[5U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((0x000f0000U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__pipe_p1__DOT__p1_pipe_data) 
                                   << 0x00000010U)) 
                   | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.uint16tofp17_Xout))
                : ((0x000c0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_0 
                                   << 2U)) | ((0x00030000U 
                                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_0) 
                                              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.uint16tofp17_Xin)))) 
              >> 4U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[5U] 
        = ((0x0000ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[5U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_71) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_71))) 
              << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[6U] 
        = ((0xffff0000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[6U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_71) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_71))) 
              >> 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[6U] 
        = ((0x0000ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[6U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : ((0x00010000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_70) 
                                        << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_70))) 
              << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[7U] 
        = ((0xfffffffeU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[7U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : ((0x00010000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_70) 
                                        << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_70))) 
              >> 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[7U] 
        = ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[7U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_70) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_70))) 
              << 1U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[8U] 
        = ((0xfffffffeU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[8U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_70) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_70))) 
              >> 0x0000001fU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[8U] 
        = ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[8U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_61) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_61))) 
              << 1U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[9U] 
        = ((0xfffffffeU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[9U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_61) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_61))) 
              >> 0x0000001fU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[9U] 
        = ((0xfffc0001U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[9U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : ((0x00010000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_60) 
                                        << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_60))) 
              << 1U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[9U] 
        = ((0x0003ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[9U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_60) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_60))) 
              << 0x00000012U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000aU] 
        = ((0xfffc0000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000aU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_60) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_60))) 
              >> 0x0000000eU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000aU] 
        = ((0x0003ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000aU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_51) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_51))) 
              << 0x00000012U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000bU] 
        = ((0xfffc0000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000bU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_51) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_51))) 
              >> 0x0000000eU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000bU] 
        = ((0x0003ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000bU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : ((0x00010000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_50) 
                                        << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_50))) 
              << 0x00000012U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000cU] 
        = ((0xfffffff8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000cU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : ((0x00010000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_50) 
                                        << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_50))) 
              >> 0x0000000eU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000cU] 
        = ((7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000cU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_50) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_50))) 
              << 3U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000dU] 
        = ((0xfffffff8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000dU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_50) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_50))) 
              >> 0x0000001dU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000dU] 
        = ((7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000dU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_41) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_41))) 
              << 3U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000eU] 
        = ((0xfffffff8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000eU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_41) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_41))) 
              >> 0x0000001dU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000eU] 
        = ((0xfff00007U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000eU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : ((0x00010000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_40) 
                                        << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_40))) 
              << 3U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000eU] 
        = ((0x000fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000eU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_40) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_40))) 
              << 0x00000014U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000fU] 
        = ((0xfff00000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000fU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? 0U : (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_40) 
                                           >> 0x0000000fU)))) 
                         << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_40))) 
              >> 0x0000000cU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000fU] 
        = ((0x000fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x0000000fU]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to32_in_X1) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to32_in_X1))) 
              << 0x00000014U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000010U] 
        = ((0xfff00000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000010U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to32_in_X1) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to32_in_X1))) 
              >> 0x0000000cU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000010U] 
        = ((0x000fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000010U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
                    << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                        << 0x0000000fU) 
                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14) 
                                           << 0x0000000eU) 
                                          | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10) 
                                              << 0x0000000aU) 
                                             | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0)))))
                : ((0x00010000U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to17_in_X0) 
                                   << 1U)) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to17_in_X0))) 
              << 0x00000014U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000011U] 
        = ((0xffffffe0U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000011U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
                    << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                        << 0x0000000fU) 
                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14) 
                                           << 0x0000000eU) 
                                          | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10) 
                                              << 0x0000000aU) 
                                             | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0)))))
                : ((0x00010000U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to17_in_X0) 
                                   << 1U)) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to17_in_X0))) 
              >> 0x0000000cU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000011U] 
        = ((0x0000001fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000011U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to17_in_X0) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to17_in_X0))) 
              << 5U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000012U] 
        = ((0xffffffe0U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000012U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to17_in_X0) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to17_in_X0))) 
              >> 0x0000001bU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000012U] 
        = ((0x0000001fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000012U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.fp16to32_in_X1) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.fp16to32_in_X1))) 
              << 5U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000013U] 
        = ((0xffffffe0U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000013U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.fp16to32_in_X1) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.fp16to32_in_X1))) 
              >> 0x0000001bU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000013U] 
        = ((0xffc0001fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000013U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
                    << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                        << 0x0000000fU) 
                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14) 
                                           << 0x0000000eU) 
                                          | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10) 
                                              << 0x0000000aU) 
                                             | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0)))))
                : ((0x00010000U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.fp16to17_in_X0) 
                                   << 1U)) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.fp16to17_in_X0))) 
              << 5U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000013U] 
        = ((0x003fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000013U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.fp16to17_in_X0) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.fp16to17_in_X0))) 
              << 0x00000016U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000014U] 
        = ((0xffc00000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000014U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.fp16to17_in_X0) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.fp16to17_in_X0))) 
              >> 0x0000000aU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000014U] 
        = ((0x003fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000014U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to32_in_X1) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to32_in_X1))) 
              << 0x00000016U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000015U] 
        = ((0xffc00000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000015U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to32_in_X1) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to32_in_X1))) 
              >> 0x0000000aU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000015U] 
        = ((0x003fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000015U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
                    << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                        << 0x0000000fU) 
                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14) 
                                           << 0x0000000eU) 
                                          | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10) 
                                              << 0x0000000aU) 
                                             | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0)))))
                : ((0x00010000U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to17_in_X0) 
                                   << 1U)) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to17_in_X0))) 
              << 0x00000016U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000016U] 
        = ((0xffffff80U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000016U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
                    << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                        << 0x0000000fU) 
                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14) 
                                           << 0x0000000eU) 
                                          | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10) 
                                              << 0x0000000aU) 
                                             | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0)))))
                : ((0x00010000U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to17_in_X0) 
                                   << 1U)) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to17_in_X0))) 
              >> 0x0000000aU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000016U] 
        = ((0x0000007fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000016U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to17_in_X0) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to17_in_X0))) 
              << 7U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000017U] 
        = ((0xffffff80U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000017U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to17_in_X0) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to17_in_X0))) 
              >> 0x00000019U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000017U] 
        = ((0x0000007fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000017U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.fp16to32_in_X1) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.fp16to32_in_X1))) 
              << 7U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000018U] 
        = ((0xffffff80U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000018U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_1__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.fp16to32_in_X1) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.fp16to32_in_X1))) 
              >> 0x00000019U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000018U] 
        = ((0xff00007fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000018U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16) 
                    << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15) 
                                        << 0x0000000fU) 
                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14) 
                                           << 0x0000000eU) 
                                          | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10) 
                                              << 0x0000000aU) 
                                             | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0)))))
                : ((0x00010000U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.fp16to17_in_X0) 
                                   << 1U)) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.fp16to17_in_X0))) 
              << 7U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000018U] 
        = ((0x00ffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000018U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                     << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                         << 0x0000001dU) 
                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                            << 0x0000001bU) 
                                           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                              << 0x00000017U)))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                       << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                           << 0x0000000aU) 
                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
                : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.fp16to17_in_X0) 
                                      >> 0x0000000fU)))) 
                    << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.fp16to17_in_X0))) 
              << 0x00000018U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_data[0x00000019U] 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
             ? ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                  << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_30_29) 
                                      << 0x0000001dU) 
                                     | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_28_27) 
                                         << 0x0000001bU) 
                                        | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_26_23) 
                                           << 0x00000017U)))) 
                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                    << 0x0000000dU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_12_10) 
                                        << 0x0000000aU) 
                                       | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__u_X_fp16_to_fp32_0__DOT__HLS_fp16_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))))
             : (((- (IData)((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.fp16to17_in_X0) 
                                   >> 0x0000000fU)))) 
                 << 0x00000010U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.fp16to17_in_X0))) 
           >> 8U);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_ready)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut2intp_pvld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_skid_valid));
}

void Vsim___024root___nba_comb__TOP__302(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__302\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT____VdfgRegularize_hcfa81255_0_1 
        = (((0x0000001fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__rdys_in)) 
            << 1U) | (0x0000001fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__rdys_in)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT____VdfgRegularize_hcfa81255_0_2 
        = (((0x0000001fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__rdys_in)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT____VdfgRegularize_hcfa81255_0_1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__FMcvt_in_rdy 
        = (((0x0000001fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__rdys_in)) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT____VdfgRegularize_hcfa81255_0_2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_prdy 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                  ? ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
                     | (0x0000000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__FMcvt_in_rdy)))
                  : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_prdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_pvld_f)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_prdy)));
}

void Vsim___024root___nba_comb__TOP__303(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__303\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_8 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_7));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_9 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_7) 
              | (1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))));
}

void Vsim___024root___nba_comb__TOP__304(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__304\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_2d_rdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_3d_vld)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_rand_ready)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_2nd__DOT__sq_pd_int16_0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__sq_pd_int16_0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_3;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_4;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_5;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_6;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_4 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_7;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_5 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_8;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_6 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_9;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_7 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_10;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_2nd__DOT__sq_pd_int16_0 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__sq_pd_int16_0 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_0 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_1 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_2 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_3 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_4 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_5 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_6 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int16_7 = 0ULL;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_2nd__DOT__sq_pd_int8_lsb_0 
            = (0x0001ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_3));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__sq_pd_int8_lsb_0 
            = (0x0001ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_4));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int8_lsb_0 
            = (0x0001ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int8_lsb_2 
            = (0x0001ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_6));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int8_lsb_4 
            = (0x0001ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_7));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int8_lsb_6 
            = (0x0001ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_8));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int8_lsb_8 
            = (0x0001ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int16_sq_9));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_2nd__DOT__sq_pd_int8_lsb_0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__sq_pd_int8_lsb_0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int8_lsb_0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int8_lsb_2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int8_lsb_4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int8_lsb_6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__sq_pd_int8_lsb_8 = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_1st__DOT__load_din_2d 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_2d_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_2d_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_d_rdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_2d_vld)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_2d_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_1st__DOT__load_din_d 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_d_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_d_rdy));
}

void Vsim___024root___nba_comb__TOP__305(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__305\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_0 
            = (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_69));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_1 
            = (QData)((IData)(((vlSelfRef.__VdfgRegularize_he50b618e_0_72[2U] 
                                << 0x00000016U) | (
                                                   vlSelfRef.__VdfgRegularize_he50b618e_0_72[1U] 
                                                   >> 0x0000000aU))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_2 
            = (QData)((IData)(((vlSelfRef.__VdfgRegularize_he50b618e_0_76[3U] 
                                << 0x0000000cU) | (
                                                   vlSelfRef.__VdfgRegularize_he50b618e_0_76[2U] 
                                                   >> 0x00000014U))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_3 
            = (QData)((IData)(((vlSelfRef.__VdfgRegularize_he50b618e_0_80[4U] 
                                << 2U) | (vlSelfRef.__VdfgRegularize_he50b618e_0_80[3U] 
                                          >> 0x0000001eU))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_0;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_3;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_0 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_1 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_2 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_3 = 0ULL;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sqsum_bypass_enable) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_0 
                    = (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q)) 
                        << 0x00000025U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_12);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_1 
                    = (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q)) 
                        << 0x00000025U) | (0x0000001fffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.__VdfgRegularize_he50b618e_0_73[2U])) 
                                               << 0x00000016U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_he50b618e_0_73[1U])) 
                                                 >> 0x0000000aU))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_2 
                    = (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__120__KET____DOT__SSS__DOT__nr__Q)) 
                        << 0x00000025U) | (0x0000001fffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.__VdfgRegularize_he50b618e_0_77[3U])) 
                                               << 0x0000000cU) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_he50b618e_0_77[2U])) 
                                                 >> 0x00000014U))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_3 
                    = (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__162__KET____DOT__SSS__DOT__nr__Q)) 
                        << 0x00000025U) | (0x0000001fffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.__VdfgRegularize_he50b618e_0_81[5U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__VdfgRegularize_he50b618e_0_81[4U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_he50b618e_0_81[3U])) 
                                                    >> 0x0000001eU)))));
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_0 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_12;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_1 
                    = (0x0000001fffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_he50b618e_0_73[2U])) 
                                                 << 0x00000016U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__VdfgRegularize_he50b618e_0_73[1U])) 
                                                   >> 0x0000000aU)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_2 
                    = (0x0000001fffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_he50b618e_0_77[3U])) 
                                                 << 0x0000000cU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__VdfgRegularize_he50b618e_0_77[2U])) 
                                                   >> 0x00000014U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_3 
                    = (0x0000001fffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_he50b618e_0_81[5U])) 
                                                 << 0x00000022U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_he50b618e_0_81[4U])) 
                                                    << 2U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__VdfgRegularize_he50b618e_0_81[3U])) 
                                                      >> 0x0000001eU))));
            }
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sqsum_bypass_enable) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_0 
                    = (((QData)((IData)((0x0001ffffU 
                                         & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q)))))) 
                        << 0x00000015U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_68)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_1 
                    = (((QData)((IData)((0x0001ffffU 
                                         & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q)))))) 
                        << 0x00000015U) | (QData)((IData)(
                                                          (0x001fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.__VdfgRegularize_he50b618e_0_71 
                                                                      >> 0x0000002aU))))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_2 
                    = (((QData)((IData)((0x0001ffffU 
                                         & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q)))))) 
                        << 0x00000015U) | (QData)((IData)(
                                                          (0x001fffffU 
                                                           & ((vlSelfRef.__VdfgRegularize_he50b618e_0_75[3U] 
                                                               << 0x0000000cU) 
                                                              | (vlSelfRef.__VdfgRegularize_he50b618e_0_75[2U] 
                                                                 >> 0x00000014U))))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_3 
                    = (((QData)((IData)((0x0001ffffU 
                                         & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__146__KET____DOT__SSS__DOT__nr__Q)))))) 
                        << 0x00000015U) | (QData)((IData)(
                                                          (0x001fffffU 
                                                           & ((vlSelfRef.__VdfgRegularize_he50b618e_0_79[4U] 
                                                               << 2U) 
                                                              | (vlSelfRef.__VdfgRegularize_he50b618e_0_79[3U] 
                                                                 >> 0x0000001eU))))));
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_0 
                    = (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_68));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_1 
                    = (QData)((IData)((0x001fffffU 
                                       & (IData)((vlSelfRef.__VdfgRegularize_he50b618e_0_71 
                                                  >> 0x0000002aU)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_2 
                    = (QData)((IData)((0x001fffffU 
                                       & ((vlSelfRef.__VdfgRegularize_he50b618e_0_75[3U] 
                                           << 0x0000000cU) 
                                          | (vlSelfRef.__VdfgRegularize_he50b618e_0_75[2U] 
                                             >> 0x00000014U)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_3 
                    = (QData)((IData)((0x001fffffU 
                                       & ((vlSelfRef.__VdfgRegularize_he50b618e_0_79[4U] 
                                           << 2U) | 
                                          (vlSelfRef.__VdfgRegularize_he50b618e_0_79[3U] 
                                           >> 0x0000001eU)))));
            }
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_0 = 0ULL;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_1 = 0ULL;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_2 = 0ULL;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_3 = 0ULL;
        }
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sqsum_bypass_enable) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_4 
                = (((QData)((IData)((0x0001ffffU & 
                                     (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q)))))) 
                    << 0x00000015U) | (QData)((IData)(
                                                      (0x001fffffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__VdfgRegularize_he50b618e_0_70 
                                                                  >> 0x00000015U))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_5 
                = (((QData)((IData)((0x0001ffffU & 
                                     (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q)))))) 
                    << 0x00000015U) | (QData)((IData)(
                                                      (0x001fffffU 
                                                       & ((vlSelfRef.__VdfgRegularize_he50b618e_0_74[2U] 
                                                           << 1U) 
                                                          | (vlSelfRef.__VdfgRegularize_he50b618e_0_74[1U] 
                                                             >> 0x0000001fU))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_6 
                = (((QData)((IData)((0x0001ffffU & 
                                     (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q)))))) 
                    << 0x00000015U) | (QData)((IData)(
                                                      (0x001fffffU 
                                                       & (vlSelfRef.__VdfgRegularize_he50b618e_0_78[3U] 
                                                          >> 9U)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_7 
                = (((QData)((IData)((0x0001ffffU & 
                                     (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__167__KET____DOT__SSS__DOT__nr__Q)))))) 
                    << 0x00000015U) | (QData)((IData)(
                                                      (0x001fffffU 
                                                       & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_pd[5U] 
                                                           << 0x0000000dU) 
                                                          | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_pd[4U] 
                                                             >> 0x00000013U))))));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_4 
                = (QData)((IData)((0x001fffffU & (IData)(
                                                         (vlSelfRef.__VdfgRegularize_he50b618e_0_70 
                                                          >> 0x00000015U)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_5 
                = (QData)((IData)((0x001fffffU & ((
                                                   vlSelfRef.__VdfgRegularize_he50b618e_0_74[2U] 
                                                   << 1U) 
                                                  | (vlSelfRef.__VdfgRegularize_he50b618e_0_74[1U] 
                                                     >> 0x0000001fU)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_6 
                = (QData)((IData)((0x001fffffU & (vlSelfRef.__VdfgRegularize_he50b618e_0_78[3U] 
                                                  >> 9U))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_7 
                = (QData)((IData)((0x001fffffU & ((
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_pd[5U] 
                                                   << 0x0000000dU) 
                                                  | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_pd[4U] 
                                                     >> 0x00000013U)))));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_4 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_5 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_6 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_7 = 0ULL;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[0U] 
        = (((((((0x0000000cU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U]) 
                | (3U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U] 
                         >> 0x00000016U))) << 0x0000000cU) 
              | (((0x0000000cU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                  >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                             >> 0x0000001eU)) 
                 << 8U)) | ((((0x0000000cU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[3U] 
                                              >> 0x00000010U)) 
                              | (3U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U] 
                                       >> 6U))) << 4U) 
                            | ((0x0000000cU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U] 
                                               >> 0x00000018U)) 
                               | (3U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[5U] 
                                        >> 0x0000000eU))))) 
            << 0x00000010U) | (((((0x0000000cU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U] 
                                                  << 2U)) 
                                  | (3U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U] 
                                           >> 0x00000014U))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                                  >> 6U)) 
                                  | (3U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                           >> 0x0000001cU))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[3U] 
                                                  >> 0x0000000eU)) 
                                              | (3U 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U] 
                                                    >> 4U))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U] 
                                                   >> 0x00000016U)) 
                                               | (3U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[5U] 
                                                     >> 0x0000000cU))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[1U] 
        = ((0xff000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[1U]) 
           | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                 & (IData)(((0x000000007f800000ULL 
                             == (0x000000007f800000ULL 
                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_1)) 
                            & (0U != (0x007fffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_1)))))) 
                << 0x00000017U) | (((0x00000400U & 
                                     ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_1 
                                               >> 0x0000001fU)) 
                                      << 0x0000000aU)) 
                                    | (0x000003ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_1))) 
                                   << 0x0000000cU)) 
              | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                   & (IData)(((0x000000007f800000ULL 
                               == (0x000000007f800000ULL 
                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_0)) 
                              & (0U != (0x007fffffU 
                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_0)))))) 
                  << 0x0000000bU) | ((0x00000400U & 
                                      ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_0 
                                                >> 0x0000001fU)) 
                                       << 0x0000000aU)) 
                                     | (0x000003ffU 
                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_0))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[1U] 
        = ((0x00ffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[1U]) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_2) 
              << 0x00000018U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[2U] 
        = ((0x0000fffcU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[2U]) 
           | (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_2) 
                    >> 8U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[2U] 
        = ((0x0000fff3U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[2U]) 
           | (0x0000fffcU & ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                               & (IData)(((0x000000007f800000ULL 
                                           == (0x000000007f800000ULL 
                                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_2)) 
                                          & (0U != 
                                             (0x007fffffU 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_2)))))) 
                              << 3U) | (4U & ((IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_2 
                                                       >> 0x0000001fU)) 
                                              << 2U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[2U] 
        = ((0x0000000fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[2U]) 
           | (0x0000fff0U & ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                               & (IData)(((0x000000007f800000ULL 
                                           == (0x000000007f800000ULL 
                                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_3)) 
                                          & (0U != 
                                             (0x007fffffU 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_3)))))) 
                              << 0x0000000fU) | (((0x00000400U 
                                                   & ((IData)(
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_3 
                                                               >> 0x0000001fU)) 
                                                      << 0x0000000aU)) 
                                                  | (0x000003ffU 
                                                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_fp32_3))) 
                                                 << 4U))));
}

void Vsim___024root___nba_comb__TOP__306(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__306\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<6>/*191:0*/ __Vtemp_7;
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_2 
            = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[1U] 
                              >> 0x0000000dU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_3 
            = (0x000001ffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[2U] 
                               << 1U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[1U] 
                                         >> 0x0000001fU)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_4 
            = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[2U] 
                              >> 0x00000011U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_5 
            = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[3U] 
                              >> 3U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_6 
            = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[3U] 
                              >> 0x00000015U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_7 
            = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[4U] 
                              >> 7U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_8 
            = (0x000001ffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[5U] 
                               << 7U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[4U] 
                                         >> 0x00000019U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_9 
            = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[5U] 
                              >> 0x0000000bU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_2 
            = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[1U] 
                              >> 4U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_3 
            = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[1U] 
                              >> 0x00000016U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_4 
            = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[2U] 
                              >> 8U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_5 
            = (0x000001ffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[3U] 
                               << 6U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[2U] 
                                         >> 0x0000001aU)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_6 
            = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[3U] 
                              >> 0x0000000cU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_7 
            = (0x000001ffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[4U] 
                               << 2U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[3U] 
                                         >> 0x0000001eU)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_8 
            = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[4U] 
                              >> 0x00000010U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_9 
            = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[5U] 
                              >> 2U));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_7 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_8 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_9 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_7 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_8 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_9 = 0U;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_0 
            = (0x0001ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[0U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_1 
            = (0x0001ffffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[1U] 
                               << 0x0000000eU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[0U] 
                                                  >> 0x00000012U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_10 
            = (0x0001ffffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[6U] 
                               << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[5U] 
                                                  >> 0x00000014U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_11 
            = (0x0001ffffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[6U] 
                              >> 6U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_2 
            = (0x0001ffffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[1U] 
                               << 0x0000001cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[1U] 
                                                  >> 4U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_3 
            = (0x0001ffffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[2U] 
                               << 0x0000000aU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[1U] 
                                                  >> 0x00000016U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_4 
            = (0x0001ffffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[2U] 
                               << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[2U] 
                                                  >> 8U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_5 
            = (0x0001ffffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[3U] 
                               << 6U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[2U] 
                                         >> 0x0000001aU)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_6 
            = (0x0001ffffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[3U] 
                               << 0x00000014U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[3U] 
                                                  >> 0x0000000cU)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_7 
            = (0x0001ffffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[4U] 
                               << 2U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[3U] 
                                         >> 0x0000001eU)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_8 
            = (0x0001ffffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[5U] 
                               << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[4U] 
                                                  >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_9 
            = (0x0001ffffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[5U] 
                               << 0x0000001eU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[5U] 
                                                  >> 2U)));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_10 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_11 = 0U;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_2 
                = (0x0001ffffU & ((0x0001fe00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_2) 
                                                                 >> 8U)))) 
                                                  << 9U)) 
                                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_2)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_3 
                = (0x0001ffffU & ((0x0001fe00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_3) 
                                                                 >> 8U)))) 
                                                  << 9U)) 
                                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_3)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_4 
                = (0x0001ffffU & ((0x0001fe00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_4) 
                                                                 >> 8U)))) 
                                                  << 9U)) 
                                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_4)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_5 
                = (0x0001ffffU & ((0x0001fe00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_5) 
                                                                 >> 8U)))) 
                                                  << 9U)) 
                                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_5)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_6 
                = (0x0001ffffU & ((0x0001fe00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_6) 
                                                                 >> 8U)))) 
                                                  << 9U)) 
                                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_6)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_7 
                = (0x0001ffffU & ((0x0001fe00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_7) 
                                                                 >> 8U)))) 
                                                  << 9U)) 
                                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_7)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_8 
                = (0x0001ffffU & ((0x0001fe00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_8) 
                                                                 >> 8U)))) 
                                                  << 9U)) 
                                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_8)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_9 
                = (0x0001ffffU & ((0x0001fe00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_9) 
                                                                 >> 8U)))) 
                                                  << 9U)) 
                                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_lsb_9)));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_2 
                = (0x0001ffffU & 0U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_3 
                = (0x0001ffffU & 0U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_4 
                = (0x0001ffffU & 0U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_5 
                = (0x0001ffffU & 0U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_6 
                = (0x0001ffffU & 0U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_7 
                = (0x0001ffffU & 0U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_8 
                = (0x0001ffffU & 0U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_9 
                = (0x0001ffffU & 0U);
        }
    }
    __Vtemp_7[0U] = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                      ? (IData)((((QData)((IData)((
                                                   (0x001ffe00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                      >> 0x00000011U)))) 
                                                       << 9U)) 
                                                   | (0x000001ffU 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                         >> 9U))))) 
                                  << 0x00000015U) | (QData)((IData)(
                                                                    ((0x001ffe00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                                >> 8U)))) 
                                                                         << 9U)) 
                                                                     | (0x000001ffU 
                                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U]))))))
                      : (IData)((((QData)((IData)((0x01ffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                    >> 0x00000010U))))))) 
                                  << 0x00000011U) | (QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U]))))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)(((0x001ffe00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                    >> 7U)))) 
                                                     << 9U)) 
                                                 | (0x000001ffU 
                                                    & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                        << 1U) 
                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                          >> 0x0000001fU)))))) 
                                << 0x00000015U) | (QData)((IData)(
                                                                  ((0x001ffe00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                       << 9U)) 
                                                                   | (0x000001ffU 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                         >> 0x00000016U))))))) 
                      << 0x0000000aU) | (IData)(((((QData)((IData)(
                                                                   ((0x001ffe00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 0x00000015U)))) 
                                                                        << 9U)) 
                                                                    | (0x000001ffU 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                          >> 0x0000000dU))))) 
                                                   << 0x00000015U) 
                                                  | (QData)((IData)(
                                                                    ((0x001ffe00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 0x0000000cU)))) 
                                                                         << 9U)) 
                                                                     | (0x000001ffU 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                           >> 4U)))))) 
                                                 >> 0x00000020U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)(((0x001ffe00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                    >> 7U)))) 
                                                     << 9U)) 
                                                 | (0x000001ffU 
                                                    & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                        << 1U) 
                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                          >> 0x0000001fU)))))) 
                                << 0x00000015U) | (QData)((IData)(
                                                                  ((0x001ffe00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                       << 9U)) 
                                                                   | (0x000001ffU 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                         >> 0x00000016U))))))) 
                      >> 0x00000016U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((0x001ffe00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                                >> 7U)))) 
                                                                         << 9U)) 
                                                                     | (0x000001ffU 
                                                                        & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                            << 1U) 
                                                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                              >> 0x0000001fU)))))) 
                                                    << 0x00000015U) 
                                                   | (QData)((IData)(
                                                                     ((0x001ffe00U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                          << 9U)) 
                                                                      | (0x000001ffU 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                            >> 0x00000016U)))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000aU));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(((0x001ffe00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                    >> 3U)))) 
                                                     << 9U)) 
                                                 | (0x000001ffU 
                                                    & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                        << 5U) 
                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                          >> 0x0000001bU)))))) 
                                << 0x00000015U) | (QData)((IData)(
                                                                  ((0x001ffe00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                                >> 0x0000001aU)))) 
                                                                       << 9U)) 
                                                                   | (0x000001ffU 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                         >> 0x00000012U))))))) 
                      << 0x0000000aU) | (IData)(((((QData)((IData)(
                                                                   ((0x001ffe00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                                >> 0x00000011U)))) 
                                                                        << 9U)) 
                                                                    | (0x000001ffU 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                          >> 9U))))) 
                                                   << 0x00000015U) 
                                                  | (QData)((IData)(
                                                                    ((0x001ffe00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                                >> 8U)))) 
                                                                         << 9U)) 
                                                                     | (0x000001ffU 
                                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U]))))) 
                                                 >> 0x00000020U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)(((0x001ffe00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                    >> 3U)))) 
                                                     << 9U)) 
                                                 | (0x000001ffU 
                                                    & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                        << 5U) 
                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                          >> 0x0000001bU)))))) 
                                << 0x00000015U) | (QData)((IData)(
                                                                  ((0x001ffe00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                                >> 0x0000001aU)))) 
                                                                       << 9U)) 
                                                                   | (0x000001ffU 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                         >> 0x00000012U))))))) 
                      >> 0x00000016U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((0x001ffe00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 3U)))) 
                                                                         << 9U)) 
                                                                     | (0x000001ffU 
                                                                        & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                            << 5U) 
                                                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                              >> 0x0000001bU)))))) 
                                                    << 0x00000015U) 
                                                   | (QData)((IData)(
                                                                     ((0x001ffe00U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                                >> 0x0000001aU)))) 
                                                                          << 9U)) 
                                                                      | (0x000001ffU 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                            >> 0x00000012U)))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000aU));
    __Vtemp_6[2U] = (((IData)((((QData)((IData)((0x01ffffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                  >> 0x00000014U))))))) 
                                << 0x00000011U) | (QData)((IData)(
                                                                  (0x0001ffffU 
                                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                      >> 4U)))))) 
                      << 0x00000014U) | (((IData)((
                                                   ((QData)((IData)(
                                                                    (0x01ffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 2U))))))) 
                                                    << 0x00000011U) 
                                                   | (QData)((IData)(
                                                                     (0x0001ffffU 
                                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                          << 0x0000000eU) 
                                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                            >> 0x00000012U))))))) 
                                          >> 0x00000016U) 
                                         | ((IData)(
                                                    ((((QData)((IData)(
                                                                       (0x01ffffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 2U))))))) 
                                                       << 0x00000011U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                             << 0x0000000eU) 
                                                                            | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                               >> 0x00000012U)))))) 
                                                     >> 0x00000020U)) 
                                            << 0x0000000aU)));
    __Vtemp_6[3U] = (((IData)((((QData)((IData)((0x01ffffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                  >> 0x00000014U))))))) 
                                << 0x00000011U) | (QData)((IData)(
                                                                  (0x0001ffffU 
                                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                      >> 4U)))))) 
                      >> 0x0000000cU) | (((IData)((
                                                   ((QData)((IData)(
                                                                    (0x01ffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                                >> 6U))))))) 
                                                    << 0x00000011U) 
                                                   | (QData)((IData)(
                                                                     (0x0001ffffU 
                                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                          << 0x0000000aU) 
                                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                            >> 0x00000016U))))))) 
                                          << 0x0000001eU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(
                                                                       (0x01ffffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 0x00000014U))))))) 
                                                       << 0x00000011U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                            >> 4U))))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000014U)));
    __Vtemp_6[4U] = (((0x000fffffU & ((IData)((((QData)((IData)(
                                                                (0x01ffffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                                >> 6U))))))) 
                                                << 0x00000011U) 
                                               | (QData)((IData)(
                                                                 (0x0001ffffU 
                                                                  & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                      << 0x0000000aU) 
                                                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                        >> 0x00000016U))))))) 
                                      >> 2U)) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            (0x01ffffffU 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 0x00000014U))))))) 
                                                            << 0x00000011U) 
                                                           | (QData)((IData)(
                                                                             (0x0001ffffU 
                                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 4U))))) 
                                                          >> 0x00000020U)) 
                                                 >> 0x0000000cU)) 
                     | ((0x3ff00000U & ((IData)((((QData)((IData)(
                                                                  (0x01ffffffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                                >> 6U))))))) 
                                                  << 0x00000011U) 
                                                 | (QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                        << 0x0000000aU) 
                                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                          >> 0x00000016U))))))) 
                                        >> 2U)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (0x01ffffffU 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                                >> 6U))))))) 
                                                              << 0x00000011U) 
                                                             | (QData)((IData)(
                                                                               (0x0001ffffU 
                                                                                & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                                << 0x0000000aU) 
                                                                                | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 0x00000016U)))))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000001eU)));
    __Vtemp_6[5U] = (0x000fffffU & ((IData)(((((QData)((IData)(
                                                               (0x01ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                                >> 6U))))))) 
                                               << 0x00000011U) 
                                              | (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
                                                                     << 0x0000000aU) 
                                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                       >> 0x00000016U)))))) 
                                             >> 0x00000020U)) 
                                    >> 2U));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__sqsum_bypass_en) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[0U] 
            = __Vtemp_7[0U];
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[1U] 
                = __Vtemp_2[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[2U] 
                = (((IData)((((QData)((IData)(((0x001ffe00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                  >> 0x00000015U)))) 
                                                   << 9U)) 
                                               | (0x000001ffU 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                     >> 0x0000000dU))))) 
                              << 0x00000015U) | (QData)((IData)(
                                                                ((0x001ffe00U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 0x0000000cU)))) 
                                                                     << 9U)) 
                                                                 | (0x000001ffU 
                                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                       >> 4U))))))) 
                    << 0x00000014U) | __Vtemp_2[2U]);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[3U] 
                = (((IData)((((QData)((IData)(((0x001ffe00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                  >> 0x00000015U)))) 
                                                   << 9U)) 
                                               | (0x000001ffU 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                     >> 0x0000000dU))))) 
                              << 0x00000015U) | (QData)((IData)(
                                                                ((0x001ffe00U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                                >> 0x0000000cU)))) 
                                                                     << 9U)) 
                                                                 | (0x000001ffU 
                                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                       >> 4U))))))) 
                    >> 0x0000000cU) | (__Vtemp_1[1U] 
                                       << 0x00000014U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[4U] 
                = ((__Vtemp_1[1U] >> 0x0000000cU) | 
                   (__Vtemp_1[2U] << 0x00000014U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[5U] 
                = (__Vtemp_1[2U] >> 0x0000000cU);
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[1U] 
                = (((IData)((((QData)((IData)((0x01ffffffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                >> 2U))))))) 
                              << 0x00000011U) | (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
                                                                     << 0x0000000eU) 
                                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                       >> 0x00000012U))))))) 
                    << 0x0000000aU) | (IData)(((((QData)((IData)(
                                                                 (0x01ffffffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
                                                                                >> 0x00000010U))))))) 
                                                 << 0x00000011U) 
                                                | (QData)((IData)(
                                                                  (0x0001ffffU 
                                                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U])))) 
                                               >> 0x00000020U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[2U] 
                = __Vtemp_6[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[3U] 
                = __Vtemp_6[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[4U] 
                = __Vtemp_6[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[5U] 
                = __Vtemp_6[5U];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_data[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_data[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_data[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_data[5U];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_abs_0 
        = (0x0001ffffU & ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_0)
                           ? ((IData)(1U) + ((0x00010000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_0)
                                              ? (0x0000ffffU 
                                                 & (~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_0))
                                              : 0U))
                           : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_abs_1 
        = (0x0001ffffU & ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_1)
                           ? ((IData)(1U) + ((0x00010000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_1)
                                              ? (0x0000ffffU 
                                                 & (~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_1))
                                              : 0U))
                           : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_abs_10 
        = (0x0001ffffU & ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_10)
                           ? ((IData)(1U) + ((0x00010000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_10)
                                              ? (0x0000ffffU 
                                                 & (~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_10))
                                              : 0U))
                           : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_10));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_abs_11 
        = (0x0001ffffU & ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_11)
                           ? ((IData)(1U) + ((0x00010000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_11)
                                              ? (0x0000ffffU 
                                                 & (~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_11))
                                              : 0U))
                           : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_11));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_abs_2 
        = (0x000001ffU & ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_2))
                           ? ((IData)(1U) + ((0x00000100U 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_2))
                                              ? (0x000000ffU 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_2)))
                                              : 0U))
                           : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_abs_3 
        = (0x000001ffU & ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_3))
                           ? ((IData)(1U) + ((0x00000100U 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_3))
                                              ? (0x000000ffU 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_3)))
                                              : 0U))
                           : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_3)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_abs_4 
        = (0x000001ffU & ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_4))
                           ? ((IData)(1U) + ((0x00000100U 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_4))
                                              ? (0x000000ffU 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_4)))
                                              : 0U))
                           : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_4)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_abs_5 
        = (0x000001ffU & ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_5))
                           ? ((IData)(1U) + ((0x00000100U 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_5))
                                              ? (0x000000ffU 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_5)))
                                              : 0U))
                           : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_5)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_abs_6 
        = (0x000001ffU & ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_6))
                           ? ((IData)(1U) + ((0x00000100U 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_6))
                                              ? (0x000000ffU 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_6)))
                                              : 0U))
                           : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_6)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_abs_7 
        = (0x000001ffU & ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_7))
                           ? ((IData)(1U) + ((0x00000100U 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_7))
                                              ? (0x000000ffU 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_7)))
                                              : 0U))
                           : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_7)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_abs_8 
        = (0x000001ffU & ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_8))
                           ? ((IData)(1U) + ((0x00000100U 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_8))
                                              ? (0x000000ffU 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_8)))
                                              : 0U))
                           : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_8)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_abs_9 
        = (0x000001ffU & ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_9))
                           ? ((IData)(1U) + ((0x00000100U 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_9))
                                              ? (0x000000ffU 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_9)))
                                              : 0U))
                           : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_int8_msb_9)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_abs_2 
        = (0x0001ffffU & ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_2)
                           ? ((IData)(1U) + ((0x00010000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_2)
                                              ? (0x0000ffffU 
                                                 & (~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_2))
                                              : 0U))
                           : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_abs_3 
        = (0x0001ffffU & ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_3)
                           ? ((IData)(1U) + ((0x00010000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_3)
                                              ? (0x0000ffffU 
                                                 & (~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_3))
                                              : 0U))
                           : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_abs_4 
        = (0x0001ffffU & ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_4)
                           ? ((IData)(1U) + ((0x00010000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_4)
                                              ? (0x0000ffffU 
                                                 & (~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_4))
                                              : 0U))
                           : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_abs_5 
        = (0x0001ffffU & ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_5)
                           ? ((IData)(1U) + ((0x00010000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_5)
                                              ? (0x0000ffffU 
                                                 & (~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_5))
                                              : 0U))
                           : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_abs_6 
        = (0x0001ffffU & ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_6)
                           ? ((IData)(1U) + ((0x00010000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_6)
                                              ? (0x0000ffffU 
                                                 & (~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_6))
                                              : 0U))
                           : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_6));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_abs_7 
        = (0x0001ffffU & ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_7)
                           ? ((IData)(1U) + ((0x00010000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_7)
                                              ? (0x0000ffffU 
                                                 & (~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_7))
                                              : 0U))
                           : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_7));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_abs_8 
        = (0x0001ffffU & ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_8)
                           ? ((IData)(1U) + ((0x00010000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_8)
                                              ? (0x0000ffffU 
                                                 & (~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_8))
                                              : 0U))
                           : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_8));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_abs_9 
        = (0x0001ffffU & ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_9)
                           ? ((IData)(1U) + ((0x00010000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_9)
                                              ? (0x0000ffffU 
                                                 & (~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_9))
                                              : 0U))
                           : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int_sq_datin_9));
}

void Vsim___024root___nba_comb__TOP__307(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__307\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__0__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
           & (IData)(((0xfc00U == (0xfc00U & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_53))) 
                      & (0U != (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_52)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__1__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
           & (IData)(((0x00000003f0000000ULL == (0x00000003f0000000ULL 
                                                 & vlSelfRef.__VdfgRegularize_he50b618e_0_56)) 
                      & (0U != (0x000003ffU & (vlSelfRef.__VdfgRegularize_he50b618e_0_55 
                                               >> 0x00000012U))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__2__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
           & (IData)(((0x000fc00000000000ULL == (0x000fc00000000000ULL 
                                                 & vlSelfRef.__VdfgRegularize_he50b618e_0_61)) 
                      & (0U != (0x000003ffU & (IData)(
                                                      (vlSelfRef.__VdfgRegularize_he50b618e_0_60 
                                                       >> 0x00000024U)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__3__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
           & (IData)(((0x3fU == vlSelfRef.__VdfgRegularize_he50b618e_0_66[2U]) 
                      & (0U != (0x000003ffU & (IData)(
                                                      (vlSelfRef.__VdfgRegularize_he50b618e_0_65 
                                                       >> 0x00000036U)))))));
}

void Vsim___024root___nba_comb__TOP__308(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__308\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__sync2mul_pd[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__sync2mul_pd[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__sync2mul_pd[2U];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Di_w0[2U] = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Di_w0[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__p1_pipe_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Di_w0[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__p1_pipe_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Di_w0[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__p1_pipe_data[2U];
    }
}

void Vsim___024root___nba_comb__TOP__309(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__309\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_valid)) 
                 | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT____VdfgRegularize_ha48a0e22_0_0) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_pvld_int))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT____VdfgRegularize_h9c8fc933_0_2 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__sync2mul_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__mul_bypass_en)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT____VdfgRegularize_ha48a0e22_0_9)
            : (0x0000000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__mul_unit_vld)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__mul_in_vld) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_rdy) 
              & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT____VdfgRegularize_ha48a0e22_0_5))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__mul_in_vld) 
           & (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT____VdfgRegularize_ha48a0e22_0_6)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__mul_in_vld) 
           & (0x0eU == (0x0eU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__mul_rdy))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__mul_in_vld) 
           & (0x0000000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__mul_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_pvld_d) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT____VdfgRegularize_h9c8fc933_0_2)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_pvld_p));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_valid)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_vld 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_fp_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_vld 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_fp_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_int_vld 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_fp_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_vld 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_fp_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_count_next_is_80 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping)) 
           & (0x50U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_count_next 
            = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_reserving)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_count)
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_count) 
                                  - (IData)(1U))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_adr_p 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__rd_adr_next;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_count_next 
            = (0x0000007fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_count_next_no_wr_popping));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_adr_p 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_adr;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__we 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_reserving) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping)) 
              | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_count))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__re 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping)
              ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_adr) 
                 == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__rd_adr_next))
              : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_adr) 
                 == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_adr))) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_reserving)) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping)
                ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__rd_count_p_next_rd_popping))
                : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__rd_count_p_next_no_rd_popping))) 
              & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_pvld_p)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_load 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_load 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_int_load 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_int_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_int_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_load 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_rdy));
}

void Vsim___024root___nba_comb__TOP__310(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__310\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_pvld_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_20));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT____VdfgRegularize_h8cc3e894_0_2 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_o_rdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_1 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
              ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_sub.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1.__VdfgRegularize_h098ddedf_0_3))
              : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1.__PVT__int_in_rdy)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0.interp_in_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_2 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
              ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_sub.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2.__VdfgRegularize_h098ddedf_0_3))
              : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2.__PVT__int_in_rdy)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_3 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
              ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_sub.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3.__VdfgRegularize_h098ddedf_0_3))
              : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3.__PVT__int_in_rdy)) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_4 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
              ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__u_fp_sub.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4.__VdfgRegularize_h098ddedf_0_3))
              : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4.__PVT__int_in_rdy)) 
            << 4U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_5 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
              ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__u_fp_sub.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__VdfgRegularize_h098ddedf_0_3))
              : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__int_in_rdy)) 
            << 5U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_6 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
              ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__VdfgRegularize_h098ddedf_0_3))
              : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__int_in_rdy)) 
            << 6U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__Xinterp_in_rdy 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.interp_in_rdy) 
            << 7U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_6));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_in_prdy 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_busy_int)) 
           & (0x000000ffU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__Xinterp_in_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_in_prdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_valid));
}

void Vsim___024root___nba_comb__TOP__311(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__311\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_vld 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__odata_pvld_int) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd)) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_data) 
              & (((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__remain_data_size))
                   ? 0U : 2U) ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT____VdfgRegularize_hd4397acb_0_0)
                  : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half)
                      ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__odata_pvld_int)
                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__odata_pvld_int)))));
}

void Vsim___024root___nba_comb__TOP__312(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__312\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_rdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_open) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_ready_flop) 
              & ((~ ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wptr) 
                       ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rptr)) 
                      >> 1U) & ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wptr)) 
                                == (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rptr))))) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_vld))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_cdt_lat_fifo_pop 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_cdt_lat_fifo_pop)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_cdt_lat_fifo_pop) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_col_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_cdt_lat_fifo_pop) 
           & ((0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_ccnt))) 
              >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__wr_total_colm)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_done 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_col_end) 
           & ((0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_rcnt))) 
              == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__wr_total_row_reg)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_ordy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_done) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_ordy_hold));
}

void Vsim___024root___nba_comb__TOP__313(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__313\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__we_0_0_q))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__we_0_144_q))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__we_0_288_q))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__we_0_432_q))));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_we_w0_0_0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_reserving;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_we_w0_0_144 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_reserving;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_we_w0_0_288 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_reserving;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_we_w0_0_432 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_reserving;
    }
}

void Vsim___024root___nba_comb__TOP__314(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__314\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_wr_req_vld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_wr_req_vld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_skid_catch))));
}

void Vsim___024root___nba_comb__TOP__315(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__315\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ld2st_rd_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_prdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT____VdfgRegularize_h7ce8b973_0_4 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_popping 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT____VdfgRegularize_h7ce8b973_0_4)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_pvld_p));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_busy_next 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_popping)) 
           & (0x14U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_count_next_no_wr_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram_we 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_reserving) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_popping)) 
              | (0U < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_count))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_popping) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__rd_count_p_next 
                = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_count_p));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_count_next 
                = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_count));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__rd_count_p_next 
                = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_count_p) 
                                  - (IData)(1U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_count_next 
                = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_count) 
                                  - (IData)(1U)));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__rd_count_p_next 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_count_p) 
                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_reserving)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_count_next 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_count_next_no_wr_popping));
    }
}

void Vsim___024root___nba_comb__TOP__316(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__316\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_we_w0_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__we_0_0_q))))
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving));
}

void Vsim___024root___nba_comb__TOP__317(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__317\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cvt2sync_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__data_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__info_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cvt2buf_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cvtin_o_pvld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cvt2sync_prdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cdp_rdma2dp_valid 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__sqsum_bypass_en)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cvt2buf_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__sqsum_bypass_en)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cvt2buf_pvld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp16_sqsum_bypass_en) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pvld));
}

void Vsim___024root___nba_comb__TOP__318(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__318\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_busy_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_pvld_in));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_reserving 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_busy_int)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_pvld_in));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_count) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__ram__DOT__ram_ff0[2U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__ram__DOT__di_d[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__ram__DOT__di_d[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__ram__DOT__di_d[2U];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_count))
                  : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_count)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_rd_count) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_cmd_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__cmd_en) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pvld));
}

void Vsim___024root___nba_comb__TOP__319(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__319\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_251 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rsp_size_cnt_inc) 
                                                  == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rsp_size));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_ready 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3890) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_251));
}

void Vsim___024root___nba_comb__TOP__320(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__320\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_en) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_5 
        = (((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U] 
                >> 0x0000000bU)) | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_busy_int)) 
                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U] 
                                       >> 0x0000000bU))) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_7 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_5) 
           & (0U == (0x0700U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_10 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_5) 
           & (0x0100U == (0x0700U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_12 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_5) 
           & (0x0200U == (0x0700U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_14 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_5) 
           & (0x0300U == (0x0700U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U])));
}

void Vsim___024root___nba_comb__TOP__321(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__321\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__wait_for_op_en_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dp2reg_done) 
           | ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                  >> 2U)) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__wait_for_op_en)));
}

void Vsim___024root___nba_sequent__TOP__1468(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1468\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_valid_d2));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__layer_st) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int 
                = (0x01ffffffU & (- (IData)((2U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_fp 
                = (0x01ffffffU & (- (IData)((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision)))));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_valid_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_addr_d2;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int = 0x01ffffffU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_fp = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_addr = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_valid_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_valid_d1));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_valid_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_addr_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_addr_d1;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_addr_d2 = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_valid_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_valid) 
                     >> 8U)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_valid))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_addr_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_addr;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_valid 
            = (0x000001ffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_pvld_d2))));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_addr_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_valid = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_addr 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__cfg_winograd)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_cnt)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_cnt) 
                              >> 2U)));
}

extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_he8fb935c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_he8ec468b_0;

void Vsim___024root___nba_comb__TOP__322(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__322\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__batch_cnt_reg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dlv_valid) 
           & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_batches)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_first_atomic 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dlv_valid) 
           & (((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__batch_cnt)) 
               & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt))) 
              & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt)) 
                 & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__channel_cnt)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w 
        = (0x000000ffU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_553) 
                           << (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base))) 
                          >> 8U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_d0_sat_count_w 
        = (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en_w)) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en))
            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_count
            : (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en)) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en_w))
                ? 0U : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_d0_sat_count));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_d1_sat_count_w 
        = (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en_w)) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en))
            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_count
            : (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en)) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en_w))
                ? 0U : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_d1_sat_count));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt_reg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__batch_cnt_reg_en) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_batch_end));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_cnt 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_first_atomic)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_dataout_addr
                  : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_cnt_d1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt_reg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt_reg_en) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_width_end));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_push_skip 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__skip_cnt)
                  ? (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_batch_end))
                  : ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_batches)) 
                     & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_cnt)) 
                        & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_width_end))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__channel_cnt_reg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt_reg_en) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_height_end));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__back_reg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_push_skip) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__batch_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_valid_d0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dlv_valid) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_push_skip)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__skip_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_add_4 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x2) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_push_skip)) 
           | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_push_skip)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x4)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__skip_cnt_w 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_op_en) 
            & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_batches))) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dp2reg_done_w)) 
              & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_batch_end) 
                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__skip_cnt))) 
                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3646)
                     ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_push_skip)
                     : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__skip_cnt)))));
    __Vtableidx58 = ((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_cnt) 
                         << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt_reg_en) 
                                   << 2U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_line_stride) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_line_base))) 
                      << 4U) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt_reg_en) 
                                  << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_surf_stride) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_height_base) 
                                    << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__channel_cnt_reg_en))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__mon_dataout_addr_cnt_w 
        = Vsim__ConstPool__TABLE_he8fb935c_0[__Vtableidx58];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_cnt_w 
        = Vsim__ConstPool__TABLE_he8ec468b_0[__Vtableidx58];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_552 = (0x000001ffU 
                                                  & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_push_skip) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3646))
                                                      ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_back)
                                                      : 
                                                     ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_add_8)
                                                        ? 8U
                                                        : 
                                                       ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_add_4)
                                                         ? 4U
                                                         : 
                                                        ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x1) 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_push_skip)) 
                                                          | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_push_skip)) 
                                                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x2)))
                                                          ? 2U
                                                          : 1U))))));
}

extern const VlUnpacked<CData/*7:0*/, 64> Vsim__ConstPool__TABLE_h454513c8_0;

void Vsim___024root___nba_comb__TOP__323(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__323\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    // Body
    __Vtableidx57 = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_mode) 
                      << 2U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_channel_end) 
                                 << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en 
        = Vsim__ConstPool__TABLE_h454513c8_0[__Vtableidx57];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[0U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[0U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[0U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[1U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[1U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[1U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[2U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[2U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[2U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[3U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[3U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[3U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[4U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[4U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[5U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[5U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[5U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_15_w 
        = (0x00000fffffffffffULL & ((0x00008000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_31_w 
        = (0x00000fffffffffffULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U] 
                                     >> 0x0000001fU)
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_47_w 
        = (0x00000fffffffffffULL & ((0x00008000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_63_w 
        = (0x00000fffffffffffULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U] 
                                     >> 0x0000001fU)
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_15[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_14_w 
        = (0x00000fffffffffffULL & ((0x00004000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_30_w 
        = (0x00000fffffffffffULL & ((0x40000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_46_w 
        = (0x00000fffffffffffULL & ((0x00004000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_62_w 
        = (0x00000fffffffffffULL & ((0x40000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_14[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_13_w 
        = (0x00000fffffffffffULL & ((0x00002000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_29_w 
        = (0x00000fffffffffffULL & ((0x20000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_45_w 
        = (0x00000fffffffffffULL & ((0x00002000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_61_w 
        = (0x00000fffffffffffULL & ((0x20000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_13[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_12_w 
        = (0x00000fffffffffffULL & ((0x00001000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_28_w 
        = (0x00000fffffffffffULL & ((0x10000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_44_w 
        = (0x00000fffffffffffULL & ((0x00001000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_60_w 
        = (0x00000fffffffffffULL & ((0x10000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_12[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_11_w 
        = (0x00000fffffffffffULL & ((0x00000800U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_27_w 
        = (0x00000fffffffffffULL & ((0x08000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_43_w 
        = (0x00000fffffffffffULL & ((0x00000800U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_59_w 
        = (0x00000fffffffffffULL & ((0x08000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_11[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_10_w 
        = (0x00000fffffffffffULL & ((0x00000400U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_26_w 
        = (0x00000fffffffffffULL & ((0x04000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_42_w 
        = (0x00000fffffffffffULL & ((0x00000400U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_58_w 
        = (0x00000fffffffffffULL & ((0x04000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_10[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_9_w 
        = (0x00000fffffffffffULL & ((0x00000200U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_25_w 
        = (0x00000fffffffffffULL & ((0x02000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_41_w 
        = (0x00000fffffffffffULL & ((0x00000200U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_57_w 
        = (0x00000fffffffffffULL & ((0x02000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_9[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_8_w 
        = (0x00000fffffffffffULL & ((0x00000100U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_24_w 
        = (0x00000fffffffffffULL & ((0x01000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_40_w 
        = (0x00000fffffffffffULL & ((0x00000100U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_56_w 
        = (0x00000fffffffffffULL & ((0x01000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_8[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_7_w 
        = (0x00000fffffffffffULL & ((0x00000080U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_23_w 
        = (0x00000fffffffffffULL & ((0x00800000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_39_w 
        = (0x00000fffffffffffULL & ((0x00000080U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_55_w 
        = (0x00000fffffffffffULL & ((0x00800000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_7[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_6_w 
        = (0x00000fffffffffffULL & ((0x00000040U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_22_w 
        = (0x00000fffffffffffULL & ((0x00400000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_38_w 
        = (0x00000fffffffffffULL & ((0x00000040U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_54_w 
        = (0x00000fffffffffffULL & ((0x00400000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_6[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_5_w 
        = (0x00000fffffffffffULL & ((0x00000020U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_21_w 
        = (0x00000fffffffffffULL & ((0x00200000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_37_w 
        = (0x00000fffffffffffULL & ((0x00000020U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_53_w 
        = (0x00000fffffffffffULL & ((0x00200000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_5[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_4_w 
        = (0x00000fffffffffffULL & ((0x00000010U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_20_w 
        = (0x00000fffffffffffULL & ((0x00100000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_36_w 
        = (0x00000fffffffffffULL & ((0x00000010U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_52_w 
        = (0x00000fffffffffffULL & ((0x00100000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_4[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_3_w 
        = (0x00000fffffffffffULL & ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_19_w 
        = (0x00000fffffffffffULL & ((0x00080000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_35_w 
        = (0x00000fffffffffffULL & ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_51_w 
        = (0x00000fffffffffffULL & ((0x00080000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_3[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_2_w 
        = (0x00000fffffffffffULL & ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_18_w 
        = (0x00000fffffffffffULL & ((0x00040000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_34_w 
        = (0x00000fffffffffffULL & ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_50_w 
        = (0x00000fffffffffffULL & ((0x00040000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_2[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_1_w 
        = (0x00000fffffffffffULL & ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_17_w 
        = (0x00000fffffffffffULL & ((0x00020000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_33_w 
        = (0x00000fffffffffffULL & ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_49_w 
        = (0x00000fffffffffffULL & ((0x00020000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_1[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_0_w 
        = (0x00000fffffffffffULL & ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[0U] 
                                                                           >> 0x00000015U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[0U]))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[0U])))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_16_w 
        = (0x00000fffffffffffULL & ((0x00010000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[2U] 
                                                                           >> 1U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[2U] 
                                                               << 0x00000014U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[1U] 
                                                                 >> 0x0000000cU))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[2U])) 
                                         << 0x00000034U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[2U])) 
                                            << 0x00000014U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[1U])) 
                                              >> 0x0000000cU)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_32_w 
        = (0x00000fffffffffffULL & ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[3U] 
                                                                           >> 0x0000000dU))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[3U] 
                                                               << 8U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[2U] 
                                                                 >> 0x00000018U))))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[4U])) 
                                         << 0x00000028U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[2U])) 
                                              >> 0x00000018U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_48_w 
        = (0x00000fffffffffffULL & ((0x00010000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U])
                                     ? (((QData)((IData)(
                                                         (0x003fffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[4U] 
                                                                           >> 0x00000019U))))))) 
                                         << 0x00000016U) 
                                        | (QData)((IData)(
                                                          (0x003fffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[4U] 
                                                              >> 4U)))))
                                     : (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[5U])) 
                                         << 0x0000003cU) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_data_0[4U])) 
                                              >> 4U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_out 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d3) 
            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int 
               >> 1U)) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d4) 
                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_fp 
                             >> 1U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_out 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d3) 
            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int 
               >> 0x0000000fU)) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d5) 
                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_fp 
                                      >> 0x0000000fU)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_out 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d3) 
            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int 
               >> 0x00000017U)) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d5) 
                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_fp 
                                      >> 0x00000017U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_out 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d3) 
            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int 
               >> 0x00000018U)) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d5) 
                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_fp 
                                      >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_out 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d3) 
            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int 
               >> 0x0000000eU)) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d5) 
                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_fp 
                                      >> 0x0000000eU)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_op1_vld[0U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[0U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[0U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_op1_vld[1U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[1U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[1U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_op1_vld[2U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[2U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[2U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_op1_vld[3U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[3U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[3U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_op1_vld[4U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[4U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_op1_vld[5U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[5U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[5U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_elem_en[0U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[0U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_dlv_elem_mask[0U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_elem_en[1U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[1U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_dlv_elem_mask[1U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_elem_en[2U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[2U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_dlv_elem_mask[2U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_elem_en[3U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[3U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_dlv_elem_mask[3U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_elem_en[4U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[4U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_dlv_elem_mask[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_elem_en[5U] 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_en[5U] 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_dlv_elem_mask[5U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_out) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_out));
}

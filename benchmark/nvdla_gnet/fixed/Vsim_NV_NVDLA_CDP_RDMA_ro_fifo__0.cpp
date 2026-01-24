// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__0(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_slcg__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSelfRef.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__0(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_wr_adr = vlSelfRef.__PVT__ro_wr_adr;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__ro_wr_adr = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__ro_wr_adr)));
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__ro_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__ro_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__ro_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__ro_rd_count_p = vlSelfRef.__PVT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__ro_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__ro_wr_adr = 0U;
        vlSelfRef.__PVT__ro_rd_adr = 0U;
        vlSelfRef.__PVT__ro_wr_count = 0U;
        vlSelfRef.__PVT__ro_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__2(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                               ? ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? 0ULL : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3275[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3275[0U])))))
                               : ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                   : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3275[1U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3275[0U])));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3275[1U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3275[0U])));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3275[1U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3275[0U])));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3275[1U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3275[0U])));
    }
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__0(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_slcg__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__3(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__PVT__ro_wr_adr = vlSelfRef.__Vdly__ro_wr_adr;
    vlSelfRef.__PVT__ro_rd_pvld_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h7f565218_0_2)));
    vlSelfRef.__PVT__ro_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSelfRef.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__2(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h7f565218_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__3(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__4(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h7f565218_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__0(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__2(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                               ? ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? 0ULL : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[3U])) 
                                                  << 0x00000022U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[2U])) 
                                                     << 2U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[1U])) 
                                                       >> 0x0000001eU)))))
                               : ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                   : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[3U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[2U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[1U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[3U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[2U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[1U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[3U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[2U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[1U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[3U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[2U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3279[1U])) 
                                                    >> 0x0000001eU)));
    }
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h7f565218_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro2_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__2(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                               ? ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? 0ULL : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[5U])) 
                                                  << 0x00000022U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[4U])) 
                                                     << 2U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[3U])) 
                                                       >> 0x0000001eU)))))
                               : ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                   : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[5U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[4U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[3U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[5U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[4U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[3U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[5U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[4U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[3U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[5U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[4U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3280[3U])) 
                                                    >> 0x0000001eU)));
    }
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h7f565218_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro2_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro3_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__2(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                               ? ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? 0ULL : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[7U])) 
                                                  << 0x00000022U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[6U])) 
                                                     << 2U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[5U])) 
                                                       >> 0x0000001eU)))))
                               : ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                   : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[7U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[6U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[5U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[7U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[6U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[5U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[7U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[6U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[5U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[7U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[6U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3281[5U])) 
                                                    >> 0x0000001eU)));
    }
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h7f565218_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro3_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro4_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__2(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                               ? ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? 0ULL : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[9U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[8U])))))
                               : ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                   : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (((QData)((IData)(
                                                               vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[9U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[8U])));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (((QData)((IData)(
                                                               vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[9U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[8U])));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (((QData)((IData)(
                                                               vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[9U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[8U])));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (((QData)((IData)(
                                                               vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[9U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[8U])));
    }
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h7f565218_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro4_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__2(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_wr_pvld));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro5_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__2(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                               ? ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? 0ULL : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[3U])) 
                                                  << 0x00000022U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[2U])) 
                                                     << 2U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[1U])) 
                                                       >> 0x0000001eU)))))
                               : ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                   : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[3U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[2U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[1U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[3U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[2U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[1U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[3U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[2U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[1U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[3U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[2U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3276[1U])) 
                                                    >> 0x0000001eU)));
    }
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h7f565218_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro5_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro6_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__2(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                               ? ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? 0ULL : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[5U])) 
                                                  << 0x00000022U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[4U])) 
                                                     << 2U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[3U])) 
                                                       >> 0x0000001eU)))))
                               : ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                   : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[5U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[4U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[3U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[5U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[4U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[3U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[5U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[4U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[3U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[5U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[4U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3277[3U])) 
                                                    >> 0x0000001eU)));
    }
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h7f565218_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro6_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro7_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__2(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                               ? ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? 0ULL : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[7U])) 
                                                  << 0x00000022U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[6U])) 
                                                     << 2U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[5U])) 
                                                       >> 0x0000001eU)))))
                               : ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                   ? ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                   : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                       ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                       : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[7U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[6U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[5U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[7U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[6U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[5U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[7U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[6U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[5U])) 
                                                    >> 0x0000001eU)));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (((QData)((IData)(
                                                               vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[7U])) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[6U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_513_258.__VdfgRegularize_h6e95ff9d_0_3278[5U])) 
                                                    >> 0x0000001eU)));
    }
}

void Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__1(Vsim_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h7f565218_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro7_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

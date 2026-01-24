// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__0(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__0(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dat_fifo_wr_adr = vlSelfRef.__PVT__dat_fifo_wr_adr;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__dat_fifo_wr_adr = ((2U 
                                                  == (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr))
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr))));
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__dat_fifo_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__dat_fifo_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__dat_fifo_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__dat_fifo_rd_count_p = vlSelfRef.__PVT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__dat_fifo_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__dat_fifo_wr_adr = 0U;
        vlSelfRef.__PVT__dat_fifo_rd_adr = 0U;
        vlSelfRef.__PVT__dat_fifo_wr_count = 0U;
        vlSelfRef.__PVT__dat_fifo_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__1(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.dat_fifo_rd_pd = ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                     ? ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                         ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_data
                                         : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                     : ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))
                                         ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                         : vlSelfRef.__PVT__ram__DOT__ram_ff0));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_data;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_data;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_data;
    }
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__2(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_3)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo0_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int)))));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__3(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__dat_fifo_wr_adr = vlSelfRef.__Vdly__dat_fifo_wr_adr;
    vlSelfRef.__PVT__dat_fifo_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                             && (IData)(vlSelfRef.__PVT__wr_count_next_is_3));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                             && ((IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h5a884937_0_2)));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__1(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT____VdfgRegularize_h92bc34c8_0_1) 
                                        & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__2(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h5a884937_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h5a884937_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_3 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (3U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__dat_fifo_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (3U & 
                                              ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1__1(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT____VdfgRegularize_h92bc34c8_0_1) 
                                        & (1U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2__1(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT____VdfgRegularize_h92bc34c8_0_1) 
                                        & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3__1(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT____VdfgRegularize_h92bc34c8_0_1) 
                                        & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo0__2(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_3)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat1_fifo0_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int)))));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo0__1(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT____VdfgRegularize_h92bc34c8_0_6) 
                                        & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo0__2(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h5a884937_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat1_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h5a884937_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_3 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (3U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__dat_fifo_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (3U & 
                                              ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo1__1(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT____VdfgRegularize_h92bc34c8_0_6) 
                                        & (1U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo2__1(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT____VdfgRegularize_h92bc34c8_0_6) 
                                        & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

void Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo3__1(Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_WDMA_DAT_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT____VdfgRegularize_h92bc34c8_0_6) 
                                        & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

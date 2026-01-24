// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__0(Vsim_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((~ vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U]) 
                                        & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_7)));
    vlSelfRef.__VdfgRegularize_hd468d6ca_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd468d6ca_0_2)) 
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__0(Vsim_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((~ vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U]) 
                                        & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_10)));
    vlSelfRef.__VdfgRegularize_hd468d6ca_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo1_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd468d6ca_0_2)) 
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__0(Vsim_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((~ vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U]) 
                                        & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_12)));
    vlSelfRef.__VdfgRegularize_hd468d6ca_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo2_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd468d6ca_0_2)) 
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__0(Vsim_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((~ vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U]) 
                                        & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_14)));
    vlSelfRef.__VdfgRegularize_hd468d6ca_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo3_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd468d6ca_0_2)) 
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat1_fifo0__0(Vsim_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat1_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_7) 
                                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U]));
    vlSelfRef.__VdfgRegularize_hd468d6ca_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat1_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd468d6ca_0_2)) 
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat1_fifo1__0(Vsim_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat1_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_10) 
                                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U]));
    vlSelfRef.__VdfgRegularize_hd468d6ca_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat1_fifo1_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd468d6ca_0_2)) 
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat1_fifo2__0(Vsim_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat1_fifo2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_12) 
                                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U]));
    vlSelfRef.__VdfgRegularize_hd468d6ca_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat1_fifo2_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd468d6ca_0_2)) 
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat1_fifo3__0(Vsim_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat1_fifo3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_14) 
                                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U]));
    vlSelfRef.__VdfgRegularize_hd468d6ca_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat1_fifo3_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd468d6ca_0_2)) 
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___ctor_var_reset(Vsim_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDP_WDMA_dat_fifo___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->dat_fifo_wr_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12483456336411502490ull);
    vlSelf->dat_fifo_wr_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14497644217513321156ull);
    vlSelf->dat_fifo_wr_pd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7404521481039868548ull);
    vlSelf->dat_fifo_rd_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1065220253420119439ull);
    vlSelf->dat_fifo_rd_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11278328076444501900ull);
    vlSelf->dat_fifo_rd_pd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 807295669886843358ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13372107809610179032ull);
    vlSelf->__PVT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15396406962418085527ull);
    vlSelf->__PVT__dat_fifo_wr_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3620321220712605368ull);
    vlSelf->__PVT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10594169566903493383ull);
    vlSelf->__PVT__dat_fifo_wr_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17458316576100796529ull);
    vlSelf->__PVT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1092260555415418571ull);
    vlSelf->__PVT__wr_count_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16232479525645034119ull);
    vlSelf->__PVT__wr_count_next_is_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9539183536632728003ull);
    vlSelf->__PVT__dat_fifo_wr_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3561074791158580972ull);
    vlSelf->__PVT__dat_fifo_rd_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17242149663975253186ull);
    vlSelf->__PVT__ram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2261664746123919997ull);
    vlSelf->__PVT__rd_adr_next_popping = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7662985730422787274ull);
    vlSelf->__PVT__dat_fifo_rd_pvld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10097112123382349744ull);
    vlSelf->__PVT__dat_fifo_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5857442722675616272ull);
    vlSelf->__PVT__dat_fifo_rd_count_p = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4907115143383369836ull);
    vlSelf->__PVT__rd_count_p_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15498433554150867821ull);
    vlSelf->__PVT__prand_inst2__Vstatic__diff = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7725021603313232302ull);
    vlSelf->__PVT__prand_inst3__Vstatic__diff = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10299478299604090411ull);
    vlSelf->__VdfgRegularize_hd468d6ca_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15931060165674217431ull);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1252783748678362569ull);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6936104093281249428ull);
    vlSelf->__PVT__ram__DOT__ra = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8628701510884171806ull);
    vlSelf->__PVT__ram__DOT__ram_ff0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13817646663075227817ull);
    vlSelf->__PVT__ram__DOT__ram_ff1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17286021883830260450ull);
    vlSelf->__PVT__ram__DOT__ram_ff2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17625787806896053489ull);
    vlSelf->__Vdly__dat_fifo_wr_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14564971479194501900ull);
}

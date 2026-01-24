// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__0(Vsim_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__ro_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__ro_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_slcg__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__VdfgRegularize_he580a38b_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSelfRef.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_he580a38b_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_3 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (3U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (3U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (3U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__0(Vsim_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__ro_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__ro_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_he580a38b_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_he580a38b_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_3 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (3U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (3U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (3U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__0(Vsim_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__ro_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__ro_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_he580a38b_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro2_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_he580a38b_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_3 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (3U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (3U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (3U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__0(Vsim_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__ro_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__ro_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_he580a38b_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro3_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_he580a38b_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_3 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (3U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (3U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (3U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__0(Vsim_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__ro_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__ro_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_he580a38b_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro4_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_wr_pvld));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_he580a38b_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_3 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (3U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (3U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (3U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__0(Vsim_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__ro_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__ro_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_he580a38b_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro5_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_wr_pvld));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_he580a38b_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_3 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (3U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (3U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (3U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__0(Vsim_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__ro_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__ro_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_he580a38b_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro6_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_wr_pvld));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_he580a38b_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_3 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (3U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (3U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (3U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__0(Vsim_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = ((2U == (IData)(vlSelfRef.__PVT__ro_rd_adr))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__ro_rd_adr))));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 3U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_he580a38b_0_2 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro7_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_wr_pvld));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (3U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_he580a38b_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_3 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (3U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (3U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (3U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (3U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (3U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___ctor_var_reset(Vsim_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_RDMA_ro_fifo___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->ro_wr_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 113956936966481529ull);
    vlSelf->ro_wr_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1511550089545366251ull);
    vlSelf->ro_wr_pd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11964846147573291178ull);
    vlSelf->ro_rd_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6534146891860353326ull);
    vlSelf->ro_rd_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10109807518041460616ull);
    vlSelf->ro_rd_pd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 140657786782917395ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13372107809610179032ull);
    vlSelf->__PVT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15396406962418085527ull);
    vlSelf->__PVT__ro_wr_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6011878278370908660ull);
    vlSelf->__PVT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10594169566903493383ull);
    vlSelf->__PVT__ro_wr_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15623279218856520134ull);
    vlSelf->__PVT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1092260555415418571ull);
    vlSelf->__PVT__wr_count_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16232479525645034119ull);
    vlSelf->__PVT__wr_count_next_is_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9539183536632728003ull);
    vlSelf->__PVT__ro_wr_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4947779675746378556ull);
    vlSelf->__PVT__ro_rd_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9534989170140012339ull);
    vlSelf->__PVT__ram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2261664746123919997ull);
    vlSelf->__PVT__rd_adr_next_popping = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7662985730422787274ull);
    vlSelf->__PVT__ro_rd_pvld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14418389717454047008ull);
    vlSelf->__PVT__ro_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15074309994693941570ull);
    vlSelf->__PVT__ro_rd_count_p = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6774017885722551731ull);
    vlSelf->__PVT__rd_count_p_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15498433554150867821ull);
    vlSelf->__VdfgRegularize_he580a38b_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6150668498477429406ull);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1252783748678362569ull);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6936104093281249428ull);
    vlSelf->__PVT__ram__DOT__ra = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8628701510884171806ull);
    vlSelf->__PVT__ram__DOT__ram_ff0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13817646663075227817ull);
    vlSelf->__PVT__ram__DOT__ram_ff1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17286021883830260450ull);
    vlSelf->__PVT__ram__DOT__ram_ff2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17625787806896053489ull);
    vlSelf->__Vdly__ro_wr_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17074543009585827167ull);
}

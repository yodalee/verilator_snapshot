// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (0U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
    vlSelfRef.__PVT__wr_popping = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                   & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (1U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 1U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__0(Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (2U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 2U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__0(Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (3U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 3U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__0(Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (4U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 4U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__0(Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (5U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 5U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__0(Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (6U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 6U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo7__0(Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (7U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 7U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo8__0(Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (8U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 8U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo9__0(Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (9U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 9U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___ctor_var_reset(Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_lat_fifo___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->rq_wr_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5829777148916824366ull);
    vlSelf->rq_wr_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3318979796838836301ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->rq_wr_pd, __VscopeHash, 14254441359756758396ull);
    vlSelf->rq_rd_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2350095683411811968ull);
    vlSelf->rq_rd_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6683734982701834289ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->rq_rd_pd, __VscopeHash, 17368158592733802462ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13372107809610179032ull);
    vlSelf->__PVT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15396406962418085527ull);
    vlSelf->__PVT__rq_wr_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17899576943266694143ull);
    vlSelf->__PVT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10594169566903493383ull);
    vlSelf->__PVT__rq_wr_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5194946119177954960ull);
    vlSelf->__PVT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1092260555415418571ull);
    vlSelf->__PVT__wr_count_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16232479525645034119ull);
    vlSelf->__PVT__wr_count_next_is_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17913943959397019591ull);
    vlSelf->__PVT__rq_wr_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1081443024347190583ull);
    vlSelf->__PVT__rq_rd_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 397292122422777999ull);
    vlSelf->__PVT__rd_adr_next_popping = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7662985730422787274ull);
    vlSelf->__PVT__rq_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12828941979563822611ull);
    vlSelf->__PVT__rq_rd_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6355262481435058784ull);
    vlSelf->__PVT__rd_count_next_rd_popping = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5666629592975189512ull);
    vlSelf->__PVT__rd_count_next_no_rd_popping = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12315316085788293718ull);
    vlSelf->__PVT__prand_inst0__Vstatic__diff = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3762344920521732210ull);
    vlSelf->__PVT__prand_inst1__Vstatic__diff = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11730740729858420399ull);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1252783748678362569ull);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6936104093281249428ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__ram__DOT__ram_ff0, __VscopeHash, 13817646663075227817ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__ram__DOT__ram_ff1, __VscopeHash, 17286021883830260450ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__ram__DOT__ram_ff2, __VscopeHash, 17625787806896053489ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__ram__DOT__ram_ff3, __VscopeHash, 11257720828612717871ull);
    vlSelf->__Vdly__rq_wr_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14231949577202375503ull);
}

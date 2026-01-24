// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dfifo_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_popping = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                                   & (IData)(vlSelfRef.__PVT__dfifo_rd_pvld_int));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dfifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0.__PVT__dat_en) 
                                        & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0.__PVT__in_dat1_dis)
                                            ? ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0.__PVT__in_dat0_dis)) 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0.__PVT__in_dat0_pvld))
                                            : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0.__PVT__in_dat0_dis)
                                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0.__PVT__in_dat1_pvld)
                                                : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0.__PVT__in_dat0_pvld) 
                                                   & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt0.__PVT__in_dat1_pvld))))));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__dfifo_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__dfifo_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dfifo_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.dfifo_wr_count) + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.dfifo_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.dfifo_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dfifo_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                                    >> 1U) & (IData)(vlSelfRef.__PVT__dfifo_rd_pvld_int));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dfifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1.__PVT__dat_en) 
                                        & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1.__PVT__in_dat1_dis)
                                            ? ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1.__PVT__in_dat0_dis)) 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1.__PVT__in_dat0_pvld))
                                            : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1.__PVT__in_dat0_dis)
                                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1.__PVT__in_dat1_pvld)
                                                : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1.__PVT__in_dat0_pvld) 
                                                   & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt1.__PVT__in_dat1_pvld))))));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__dfifo_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__dfifo_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dfifo_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.dfifo_wr_count) + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.dfifo_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.dfifo_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dfifo_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                                    >> 2U) & (IData)(vlSelfRef.__PVT__dfifo_rd_pvld_int));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dfifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2.__PVT__dat_en) 
                                        & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2.__PVT__in_dat1_dis)
                                            ? ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2.__PVT__in_dat0_dis)) 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2.__PVT__in_dat0_pvld))
                                            : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2.__PVT__in_dat0_dis)
                                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2.__PVT__in_dat1_pvld)
                                                : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2.__PVT__in_dat0_pvld) 
                                                   & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt2.__PVT__in_dat1_pvld))))));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__dfifo_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__dfifo_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dfifo_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.dfifo_wr_count) + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.dfifo_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.dfifo_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dfifo_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                                    >> 3U) & (IData)(vlSelfRef.__PVT__dfifo_rd_pvld_int));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dfifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3.__PVT__dat_en) 
                                        & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3.__PVT__in_dat1_dis)
                                            ? ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3.__PVT__in_dat0_dis)) 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3.__PVT__in_dat0_pvld))
                                            : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3.__PVT__in_dat0_dis)
                                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3.__PVT__in_dat1_pvld)
                                                : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3.__PVT__in_dat0_pvld) 
                                                   & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt3.__PVT__in_dat1_pvld))))));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__dfifo_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__dfifo_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dfifo_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.dfifo_wr_count) + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.dfifo_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.dfifo_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dfifo_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                                    >> 4U) & (IData)(vlSelfRef.__PVT__dfifo_rd_pvld_int));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dfifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4.__PVT__dat_en) 
                                        & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4.__PVT__in_dat1_dis)
                                            ? ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4.__PVT__in_dat0_dis)) 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4.__PVT__in_dat0_pvld))
                                            : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4.__PVT__in_dat0_dis)
                                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4.__PVT__in_dat1_pvld)
                                                : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4.__PVT__in_dat0_pvld) 
                                                   & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_bpt4.__PVT__in_dat1_pvld))))));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__dfifo_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__dfifo_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dfifo_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.dfifo_wr_count) + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.dfifo_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.dfifo_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___ctor_var_reset(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->dfifo_wr_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10441729650065339532ull);
    vlSelf->dfifo_wr_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3195387361213566775ull);
    vlSelf->dfifo_wr_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5126550593224084861ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->dfifo_wr_pd, __VscopeHash, 15513506872705444878ull);
    vlSelf->dfifo_rd_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3868724489418777301ull);
    vlSelf->dfifo_rd_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5496311104694248857ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->dfifo_rd_pd, __VscopeHash, 22570618663806170ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13372107809610179032ull);
    vlSelf->__PVT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15396406962418085527ull);
    vlSelf->__PVT__dfifo_wr_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11164670860034499187ull);
    vlSelf->__PVT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10594169566903493383ull);
    vlSelf->__PVT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1092260555415418571ull);
    vlSelf->__PVT__wr_count_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16232479525645034119ull);
    vlSelf->__PVT__wr_count_next_is_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17913943959397019591ull);
    vlSelf->__PVT__dfifo_wr_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13280501453600040547ull);
    vlSelf->__PVT__dfifo_rd_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 473542243522434660ull);
    vlSelf->__PVT__rd_adr_next_popping = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7662985730422787274ull);
    vlSelf->__PVT__dfifo_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17620717830143825176ull);
    vlSelf->__PVT__dfifo_rd_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8389248030979421474ull);
    vlSelf->__PVT__rd_count_next_rd_popping = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5666629592975189512ull);
    vlSelf->__PVT__rd_count_next_no_rd_popping = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12315316085788293718ull);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1252783748678362569ull);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6936104093281249428ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->__PVT__ram__DOT__ram_ff0, __VscopeHash, 13817646663075227817ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->__PVT__ram__DOT__ram_ff1, __VscopeHash, 17286021883830260450ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->__PVT__ram__DOT__ram_ff2, __VscopeHash, 17625787806896053489ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->__PVT__ram__DOT__ram_ff3, __VscopeHash, 11257720828612717871ull);
    vlSelf->__Vdly__dfifo_wr_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8856887633511883708ull);
}

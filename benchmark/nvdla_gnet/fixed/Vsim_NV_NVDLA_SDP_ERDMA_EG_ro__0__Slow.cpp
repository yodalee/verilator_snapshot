// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_SDP_ERDMA_EG_ro___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu__0(Vsim_NV_NVDLA_SDP_ERDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_ERDMA_EG_ro___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr)));
    vlSelfRef.u_rod0__DOT____VdfgRegularize_h89dfae84_0_1 
        = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_d)));
    vlSelfRef.u_rod1__DOT____VdfgRegularize_h89dfae84_0_1 
        = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_d)));
    vlSelfRef.u_rod2__DOT____VdfgRegularize_h89dfae84_0_1 
        = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_d)));
    vlSelfRef.u_rod3__DOT____VdfgRegularize_h89dfae84_0_1 
        = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_d)));
    vlSelfRef.__PVT__rod_sel = (3U & ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                      + (IData)(vlSelfRef.__PVT__count_e)));
    vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count))
                                                  ? 4U
                                                  : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr));
    vlSelfRef.u_roc__DOT____VdfgRegularize_hb7820871_0_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_prdy_d)) 
           & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_d));
    vlSelfRef.cfg_mode_per_element = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_reg__DOT__dp2reg_consumer)
                                       ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_erdma_data_mode)
                                       : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_erdma_data_mode));
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_gate__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__VdfgRegularize_h7a53951e_0_1 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int))));
    vlSelfRef.__VdfgRegularize_h7a53951e_0_0 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int))));
    vlSelfRef.__PVT__is_elem_end = ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_proc_precision)) 
                                    == (IData)(vlSelfRef.__PVT__count_e));
    vlSelfRef.__PVT__is_batch_end = ((IData)(vlSelfRef.__PVT__count_b) 
                                     == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number));
    vlSelfRef.__PVT__is_last_h = ((IData)(vlSelfRef.__PVT__count_h) 
                                  == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_height));
    vlSelfRef.__PVT__is_last_w = ((IData)(vlSelfRef.__PVT__count_w) 
                                  == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_width));
    vlSelfRef.__PVT__is_half_step = ((IData)(vlSelfRef.__PVT__count_step) 
                                     == (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step), 1U)));
    vlSelfRef.u_rod0__DOT____VdfgRegularize_h89dfae84_0_2 
        = ((IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h89dfae84_0_1) 
           & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_o));
    vlSelfRef.u_rod1__DOT____VdfgRegularize_h89dfae84_0_2 
        = ((IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h89dfae84_0_1) 
           & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_o));
    vlSelfRef.u_rod2__DOT____VdfgRegularize_h89dfae84_0_2 
        = ((IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h89dfae84_0_1) 
           & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_o));
    vlSelfRef.u_rod3__DOT____VdfgRegularize_h89dfae84_0_2 
        = ((IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h89dfae84_0_1) 
           & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_o));
    vlSelfRef.__PVT__out_vld = ((2U & (IData)(vlSelfRef.__PVT__rod_sel))
                                 ? ((1U & (IData)(vlSelfRef.__PVT__rod_sel))
                                     ? (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int)
                                     : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int))
                                 : ((1U & (IData)(vlSelfRef.__PVT__rod_sel))
                                     ? (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int)
                                     : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int)));
    vlSelfRef.u_roc__DOT____VdfgRegularize_hb7820871_0_3 
        = ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_hb7820871_0_1) 
           & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o));
    vlSelfRef.__PVT__u_rod0__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_rod0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod1__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_rod1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod2__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_rod2__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod3__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_rod3__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.rod_wr_rdy = ((IData)(vlSelfRef.__VdfgRegularize_h7a53951e_0_1) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h7a53951e_0_0));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3492 = ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                   & ((IData)(vlSelfRef.__PVT__is_last_h) 
                                                      & (IData)(vlSelfRef.__PVT__is_last_w)));
    vlSelfRef.__PVT__is_line_end = ((IData)(vlSelfRef.__PVT__is_elem_end) 
                                    & ((IData)(vlSelfRef.__PVT__is_last_w) 
                                       & (IData)(vlSelfRef.__PVT__is_batch_end)));
    vlSelfRef.__PVT__is_last_step = (((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_width)) 
                                      & (IData)(vlSelfRef.__PVT__is_last_w))
                                      ? (IData)(vlSelfRef.__PVT__is_half_step)
                                      : ((IData)(vlSelfRef.__PVT__count_step) 
                                         == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step)));
    vlSelfRef.__PVT__is_surf_end = ((IData)(vlSelfRef.__PVT__is_line_end) 
                                    & (IData)(vlSelfRef.__PVT__is_last_h));
    vlSelfRef.__PVT__is_cube_end = ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                    & ((IData)(vlSelfRef.__PVT__count_c) 
                                       == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_surf)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_SDP_ERDMA_EG_ro___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu__1(Vsim_NV_NVDLA_SDP_ERDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_ERDMA_EG_ro___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rod_wr_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT____VdfgRegularize_h224c15bf_0_1) 
                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_mul.rod_wr_rdy));
    vlSelfRef.rod_wr_mask = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_1bytex1)
                              ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__need_extra_rod)
                                  ? ((0x0000000cU & 
                                      ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q))) 
                                       << 2U)) | (3U 
                                                  & (- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q)))))
                                  : 3U) : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_2bytex1)
                                            ? ((0U 
                                                != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_out_precision))
                                                    ? 
                                                   ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex1_cnt)
                                                       ? 
                                                      (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                       >> 0x0000001eU)
                                                       : 0U) 
                                                     << 2U) 
                                                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex1_cnt)
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                        >> 0x0000001eU)))
                                                    : 
                                                   (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                    >> 0x0000001eU))
                                                : (
                                                   vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                   >> 0x0000001eU))
                                            : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_1bytex2)
                                                ? (
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_out_precision))
                                                     ? 
                                                    ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_cnt)
                                                        ? 
                                                       (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                        >> 0x0000001eU)
                                                        : 0U) 
                                                      << 2U) 
                                                     | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_cnt)
                                                         ? 0U
                                                         : 
                                                        (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                         >> 0x0000001eU)))
                                                     : 
                                                    (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                     >> 0x0000001eU))
                                                    : 
                                                   (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                    >> 0x0000001eU))
                                                : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_2bytex2)
                                                    ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mask)
                                                    : 0U))));
    vlSelfRef.__PVT__u_roc__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_int)) 
                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT____VdfgRegularize_h224c15bf_0_1) 
                                                    & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2625)));
    vlSelfRef.__PVT__out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                      | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__sdp_erdma2dp_alu_ready)));
    if (vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[0U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[1U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[2U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[3U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[4U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[5U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[6U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod1_pd[7U];
    }
    if (vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[0U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[1U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[2U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[3U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[4U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[5U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[6U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod3_pd[7U];
    }
    if (vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[0U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[1U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[2U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[3U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[4U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[5U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[6U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod2_pd[7U];
    }
    if (vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[0U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[1U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[2U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[3U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[4U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[5U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[6U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[7U];
    }
    vlSelfRef.roc_wr_pd = ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__is_last_beat)) 
                            << 3U) | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_1bytex1)
                                       ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__need_extra_rod)
                                           ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q)
                                               ? 3U
                                               : 1U)
                                           : ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_proc_precision))
                                               ? 0U
                                               : 1U))
                                       : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_2bytex1)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__VdfgRegularize_h6e95ff9d_0_580)
                                           : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_1bytex2)
                                               ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__VdfgRegularize_h6e95ff9d_0_580)
                                               : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_2bytex2)
                                                   ? 
                                                  ((0U 
                                                    != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_out_precision))
                                                     ? 
                                                    (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__beat_count) 
                                                      == 
                                                      ((0x00003fffU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__ig2eg_size) 
                                                           >> 1U)) 
                                                       - (IData)(1U)))
                                                      ? 1U
                                                      : 3U)
                                                     : 
                                                    ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__is_last_beat)
                                                      ? 0U
                                                      : 1U))
                                                    : 0U)
                                                   : 0U)))));
    vlSelfRef.__PVT__u_rod0__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & ((IData)(vlSelfRef.rod_wr_mask) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h7a53951e_0_1)))));
    vlSelfRef.__PVT__u_rod1__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & (((IData)(vlSelfRef.rod_wr_mask) 
                                                         >> 1U) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h7a53951e_0_1)))));
    vlSelfRef.__PVT__u_rod2__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & (((IData)(vlSelfRef.rod_wr_mask) 
                                                         >> 2U) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h7a53951e_0_0)))));
    vlSelfRef.__PVT__u_rod3__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & (((IData)(vlSelfRef.rod_wr_mask) 
                                                         >> 3U) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h7a53951e_0_0)))));
    vlSelfRef.__PVT__u_roc__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                 + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p = ((0U 
                                                   != (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p)) 
                                                  | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving));
    vlSelfRef.__PVT__out_accept = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                   & (IData)(vlSelfRef.__PVT__out_vld));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p = ((4U 
                                                 & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.roc_wr_pd)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                   ? (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff3)
                                                   : (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                   ? (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff1)
                                                   : (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff0))));
    vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving));
    vlSelfRef.__PVT__u_roc__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_hb7820871_0_3)) 
                                               & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__roc_rd_pvld = ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_hb7820871_0_1)
                                     ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__u_rod0__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h89dfae84_0_2));
    vlSelfRef.__PVT__u_rod0__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h89dfae84_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod0__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h89dfae84_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod1__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h89dfae84_0_2));
    vlSelfRef.__PVT__u_rod1__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h89dfae84_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod1__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h89dfae84_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod2__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h89dfae84_0_2));
    vlSelfRef.__PVT__u_rod2__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h89dfae84_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod2__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h89dfae84_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod3__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h89dfae84_0_2));
    vlSelfRef.__PVT__u_rod3__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h89dfae84_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod3__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h89dfae84_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_roc__DOT__wr_count_next_is_4 
        = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
           & (4U == (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_roc__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count));
        } else {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                         - (IData)(1U)));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
            = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                     + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
        vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
            = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__size_of_beat = (3U & ((- (IData)((IData)(vlSelfRef.__PVT__roc_rd_pvld))) 
                                           & ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_hb7820871_0_1)
                                               ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o)
                                               : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p))));
    vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod0__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod0__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod0__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod0__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod0__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod1__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod1__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod1__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod1__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod1__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod2__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod2__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod2__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod2__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod2__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod3__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod3__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod3__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod3__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod3__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__is_last_beat = ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                      ? ((7U & ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                                + VL_SHIFTR_III(3,3,32, (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step), 1U))) 
                                         == (IData)(vlSelfRef.__PVT__size_of_beat))
                                      : ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                         == (IData)(vlSelfRef.__PVT__size_of_beat)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3088 = ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                                   & (IData)(vlSelfRef.__PVT__is_last_beat));
    vlSelfRef.__PVT__rod0_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3492) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? (0U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3088))));
    vlSelfRef.__PVT__rod1_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3492) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? (1U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3088))));
    vlSelfRef.__PVT__rod2_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3492) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? (2U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3088))));
    vlSelfRef.__PVT__rod3_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3492) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? (3U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3088))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_SDP_ERDMA_EG_ro___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_mul__0(Vsim_NV_NVDLA_SDP_ERDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_ERDMA_EG_ro___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr)));
    vlSelfRef.u_rod0__DOT____VdfgRegularize_h89dfae84_0_1 
        = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_d)));
    vlSelfRef.u_rod1__DOT____VdfgRegularize_h89dfae84_0_1 
        = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_d)));
    vlSelfRef.u_rod2__DOT____VdfgRegularize_h89dfae84_0_1 
        = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_d)));
    vlSelfRef.u_rod3__DOT____VdfgRegularize_h89dfae84_0_1 
        = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_d)));
    vlSelfRef.__PVT__rod_sel = (3U & ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                      + (IData)(vlSelfRef.__PVT__count_e)));
    vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count))
                                                  ? 4U
                                                  : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr));
    vlSelfRef.u_roc__DOT____VdfgRegularize_hb7820871_0_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_prdy_d)) 
           & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_d));
    vlSelfRef.__VdfgRegularize_h7a53951e_0_1 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int))));
    vlSelfRef.__VdfgRegularize_h7a53951e_0_0 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int))));
    vlSelfRef.__PVT__is_elem_end = ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_proc_precision)) 
                                    == (IData)(vlSelfRef.__PVT__count_e));
    vlSelfRef.__PVT__is_batch_end = ((IData)(vlSelfRef.__PVT__count_b) 
                                     == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number));
    vlSelfRef.__PVT__is_last_h = ((IData)(vlSelfRef.__PVT__count_h) 
                                  == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_height));
    vlSelfRef.__PVT__is_last_w = ((IData)(vlSelfRef.__PVT__count_w) 
                                  == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_width));
    vlSelfRef.__PVT__is_half_step = ((IData)(vlSelfRef.__PVT__count_step) 
                                     == (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step), 1U)));
    vlSelfRef.__PVT__u_rod0__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__u_rod0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod1__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__u_rod1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod2__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__u_rod2__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod3__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__u_rod3__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.rod_wr_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT____VdfgRegularize_h224c15bf_0_2) 
                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.rod_wr_rdy));
    vlSelfRef.u_rod0__DOT____VdfgRegularize_h89dfae84_0_2 
        = ((IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h89dfae84_0_1) 
           & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_o));
    vlSelfRef.u_rod1__DOT____VdfgRegularize_h89dfae84_0_2 
        = ((IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h89dfae84_0_1) 
           & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_o));
    vlSelfRef.u_rod2__DOT____VdfgRegularize_h89dfae84_0_2 
        = ((IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h89dfae84_0_1) 
           & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_o));
    vlSelfRef.u_rod3__DOT____VdfgRegularize_h89dfae84_0_2 
        = ((IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h89dfae84_0_1) 
           & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_o));
    vlSelfRef.__PVT__out_vld = ((2U & (IData)(vlSelfRef.__PVT__rod_sel))
                                 ? ((1U & (IData)(vlSelfRef.__PVT__rod_sel))
                                     ? (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int)
                                     : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int))
                                 : ((1U & (IData)(vlSelfRef.__PVT__rod_sel))
                                     ? (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int)
                                     : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int)));
    vlSelfRef.u_roc__DOT____VdfgRegularize_hb7820871_0_3 
        = ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_hb7820871_0_1) 
           & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o));
    vlSelfRef.rod_wr_rdy = ((IData)(vlSelfRef.__VdfgRegularize_h7a53951e_0_1) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h7a53951e_0_0));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3489 = ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                   & ((IData)(vlSelfRef.__PVT__is_last_h) 
                                                      & (IData)(vlSelfRef.__PVT__is_last_w)));
    vlSelfRef.__PVT__is_line_end = ((IData)(vlSelfRef.__PVT__is_elem_end) 
                                    & ((IData)(vlSelfRef.__PVT__is_last_w) 
                                       & (IData)(vlSelfRef.__PVT__is_batch_end)));
    vlSelfRef.__PVT__is_last_step = (((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_width)) 
                                      & (IData)(vlSelfRef.__PVT__is_last_w))
                                      ? (IData)(vlSelfRef.__PVT__is_half_step)
                                      : ((IData)(vlSelfRef.__PVT__count_step) 
                                         == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step)));
    vlSelfRef.__PVT__is_surf_end = ((IData)(vlSelfRef.__PVT__is_line_end) 
                                    & (IData)(vlSelfRef.__PVT__is_last_h));
    vlSelfRef.__PVT__is_cube_end = ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                    & ((IData)(vlSelfRef.__PVT__count_c) 
                                       == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_surf)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_SDP_ERDMA_EG_ro___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_mul__1(Vsim_NV_NVDLA_SDP_ERDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_ERDMA_EG_ro___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_mul__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_int)) 
                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT____VdfgRegularize_h224c15bf_0_2) 
                                                    & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2625)));
    vlSelfRef.__PVT__out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                      | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__sdp_erdma2dp_mul_ready)));
    if (vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[0U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[1U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[2U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[3U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[4U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[5U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[6U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod3_pd[7U];
    }
    if (vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[0U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[1U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[2U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[3U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[4U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[5U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[6U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod1_pd[7U];
    }
    if (vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[0U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[1U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[2U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[3U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[4U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[5U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[6U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod2_pd[7U];
    }
    if (vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[0U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[1U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[2U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[3U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[4U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[5U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[6U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[7U];
    }
    vlSelfRef.__PVT__u_rod0__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.rod_wr_mask) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h7a53951e_0_1)))));
    vlSelfRef.__PVT__u_rod1__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.rod_wr_mask) 
                                                         >> 1U) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h7a53951e_0_1)))));
    vlSelfRef.__PVT__u_rod2__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.rod_wr_mask) 
                                                         >> 2U) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h7a53951e_0_0)))));
    vlSelfRef.__PVT__u_rod3__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.rod_wr_mask) 
                                                         >> 3U) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h7a53951e_0_0)))));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p = ((4U 
                                                 & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                   ? 0U
                                                   : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.roc_wr_pd)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                   ? (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff3)
                                                   : (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                   ? (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff1)
                                                   : (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff0))));
    vlSelfRef.__PVT__u_roc__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                 + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p = ((0U 
                                                   != (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p)) 
                                                  | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving));
    vlSelfRef.__PVT__out_accept = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                   & (IData)(vlSelfRef.__PVT__out_vld));
    vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving));
    vlSelfRef.__PVT__u_roc__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_hb7820871_0_3)) 
                                               & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__roc_rd_pvld = ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_hb7820871_0_1)
                                     ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__u_rod0__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h89dfae84_0_2));
    vlSelfRef.__PVT__u_rod0__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h89dfae84_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod0__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h89dfae84_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod1__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h89dfae84_0_2));
    vlSelfRef.__PVT__u_rod1__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h89dfae84_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod1__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h89dfae84_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod2__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h89dfae84_0_2));
    vlSelfRef.__PVT__u_rod2__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h89dfae84_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod2__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h89dfae84_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod3__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h89dfae84_0_2));
    vlSelfRef.__PVT__u_rod3__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h89dfae84_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod3__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h89dfae84_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_roc__DOT__wr_count_next_is_4 
        = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
           & (4U == (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_roc__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count));
        } else {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                         - (IData)(1U)));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
            = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                     + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
        vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
            = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__size_of_beat = (3U & ((- (IData)((IData)(vlSelfRef.__PVT__roc_rd_pvld))) 
                                           & ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_hb7820871_0_1)
                                               ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o)
                                               : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p))));
    vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod0__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod0__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod0__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod0__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod0__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod1__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod1__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod1__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod1__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod1__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod2__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod2__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod2__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod2__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod2__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod3__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod3__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod3__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod3__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod3__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__is_last_beat = ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                      ? ((7U & ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                                + VL_SHIFTR_III(3,3,32, (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step), 1U))) 
                                         == (IData)(vlSelfRef.__PVT__size_of_beat))
                                      : ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                         == (IData)(vlSelfRef.__PVT__size_of_beat)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3093 = ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                                   & (IData)(vlSelfRef.__PVT__is_last_beat));
    vlSelfRef.__PVT__rod0_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3489) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? (0U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3093))));
    vlSelfRef.__PVT__rod1_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3489) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? (1U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3093))));
    vlSelfRef.__PVT__rod2_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3489) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? (2U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3093))));
    vlSelfRef.__PVT__rod3_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3489) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? (3U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3093))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_SDP_ERDMA_EG_ro___ctor_var_reset(Vsim_NV_NVDLA_SDP_ERDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_ERDMA_EG_ro___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->cfg_do_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13588142820066302193ull);
    vlSelf->cfg_dp_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11582536035186648322ull);
    vlSelf->cfg_mode_multi_batch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11653727165517981317ull);
    vlSelf->cfg_mode_per_element = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 508709817177503142ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->reg2dp_batch_number = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16799400313628135573ull);
    vlSelf->reg2dp_channel = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2620225442041265614ull);
    vlSelf->reg2dp_height = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4685081198682753699ull);
    vlSelf->reg2dp_width = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7426085919830476230ull);
    vlSelf->roc_wr_pd = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2101742079843482786ull);
    vlSelf->roc_wr_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9290956523633555638ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->rod0_wr_pd, __VscopeHash, 865766583413950185ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->rod1_wr_pd, __VscopeHash, 15616214578144710851ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->rod2_wr_pd, __VscopeHash, 5972625478850153072ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->rod3_wr_pd, __VscopeHash, 7291625829642670846ull);
    vlSelf->rod_wr_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6274012788314728154ull);
    vlSelf->rod_wr_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10248882570556751608ull);
    vlSelf->sdp_erdma2dp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3049957939385800169ull);
    vlSelf->layer_end = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11826010839899288414ull);
    vlSelf->roc_wr_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13294701383043139202ull);
    vlSelf->rod_wr_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1758328370051098636ull);
    VL_SCOPED_RAND_RESET_W(257, vlSelf->sdp_erdma2dp_pd, __VscopeHash, 13814361742810484660ull);
    vlSelf->sdp_erdma2dp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2185760179399071254ull);
    vlSelf->__PVT__beat_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13306426588901892732ull);
    vlSelf->__PVT__count_b = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12969805297105310285ull);
    vlSelf->__PVT__count_c = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3608454384498716644ull);
    vlSelf->__PVT__count_e = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3575138203679533373ull);
    vlSelf->__PVT__count_h = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4827849947800012194ull);
    vlSelf->__PVT__count_step = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4959347555088390796ull);
    vlSelf->__PVT__count_w = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13750143322343511311ull);
    vlSelf->__PVT__is_last_beat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9073342863928015582ull);
    vlSelf->__PVT__out_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3952214960672518684ull);
    vlSelf->__PVT__is_batch_end = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16039320665354971109ull);
    vlSelf->__PVT__is_cube_end = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7147805821049875309ull);
    vlSelf->__PVT__is_elem_end = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14883675701020249545ull);
    vlSelf->__PVT__is_half_step = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8867160838229033815ull);
    vlSelf->__PVT__is_last_h = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 340115302651193137ull);
    vlSelf->__PVT__is_last_step = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7418157724580415197ull);
    vlSelf->__PVT__is_last_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14813642717705662716ull);
    vlSelf->__PVT__is_line_end = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7457253354237221433ull);
    vlSelf->__PVT__is_surf_end = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5804469985654170797ull);
    vlSelf->__PVT__out_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1573849806940616413ull);
    vlSelf->__PVT__out_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1282783663291148316ull);
    vlSelf->__PVT__roc_rd_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8690718624722011122ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__rod0_rd_pd, __VscopeHash, 7043370279125065861ull);
    vlSelf->__PVT__rod0_rd_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16269207442562936113ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__rod1_rd_pd, __VscopeHash, 763799991596736889ull);
    vlSelf->__PVT__rod1_rd_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15816261026084246357ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__rod2_rd_pd, __VscopeHash, 16409397398964228155ull);
    vlSelf->__PVT__rod2_rd_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9619417410420539600ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__rod3_rd_pd, __VscopeHash, 13248533846081988414ull);
    vlSelf->__PVT__rod3_rd_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15217044456146871453ull);
    vlSelf->__PVT__rod_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17220904566306650941ull);
    vlSelf->__PVT__size_of_beat = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7034080890943601719ull);
    vlSelf->__VdfgRegularize_h7a53951e_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10689729703609192495ull);
    vlSelf->__VdfgRegularize_h7a53951e_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9860329335066998560ull);
    vlSelf->__PVT__u_rod0__DOT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11729728630585794148ull);
    vlSelf->__PVT__u_rod0__DOT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4910799672099700712ull);
    vlSelf->__PVT__u_rod0__DOT__rod_wr_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16685621182767521265ull);
    vlSelf->__PVT__u_rod0__DOT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8107522240356144235ull);
    vlSelf->__PVT__u_rod0__DOT__rod_wr_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2152316112605673961ull);
    vlSelf->__PVT__u_rod0__DOT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16714583202676456280ull);
    vlSelf->__PVT__u_rod0__DOT__wr_count_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7202892079678704020ull);
    vlSelf->__PVT__u_rod0__DOT__wr_count_next_is_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9973760185617454194ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_rod0__DOT__rod_rd_pd_p, __VscopeHash, 15692443609260062488ull);
    vlSelf->__PVT__u_rod0__DOT__rod_rd_prdy_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14858791038111666943ull);
    vlSelf->__PVT__u_rod0__DOT__rod_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15346967039739455687ull);
    vlSelf->__PVT__u_rod0__DOT__rod_rd_pvld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3710137815531864742ull);
    vlSelf->__PVT__u_rod0__DOT__rod_rd_pvld_int_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5751893582086437803ull);
    vlSelf->__PVT__u_rod0__DOT__rod_rd_count_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 98412005467345609ull);
    vlSelf->__PVT__u_rod0__DOT__rd_count_p_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16573870613052756972ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_rod0__DOT__rod_rd_pd_o, __VscopeHash, 1515992678192691321ull);
    vlSelf->__PVT__u_rod0__DOT__rd_req_next_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17446245938687770689ull);
    vlSelf->__PVT__u_rod0__DOT__rod_rd_pvld_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 192782651989078395ull);
    vlSelf->__PVT__u_rod0__DOT__rd_req_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18210319240274100628ull);
    vlSelf->u_rod0__DOT____VdfgRegularize_h89dfae84_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5101693623546775894ull);
    vlSelf->u_rod0__DOT____VdfgRegularize_h89dfae84_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2850555358266149382ull);
    vlSelf->__PVT__u_rod0__DOT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12841296448569095416ull);
    vlSelf->__PVT__u_rod0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3615065998406492244ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_rod0__DOT__ram__DOT__ram_ff0, __VscopeHash, 10243929719013084258ull);
    vlSelf->__PVT__u_rod1__DOT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11491126650707699912ull);
    vlSelf->__PVT__u_rod1__DOT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16294989022304380162ull);
    vlSelf->__PVT__u_rod1__DOT__rod_wr_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7954808018329413691ull);
    vlSelf->__PVT__u_rod1__DOT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5152116942360028749ull);
    vlSelf->__PVT__u_rod1__DOT__rod_wr_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11547107150215705663ull);
    vlSelf->__PVT__u_rod1__DOT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13201830025617361921ull);
    vlSelf->__PVT__u_rod1__DOT__wr_count_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11561066591336985395ull);
    vlSelf->__PVT__u_rod1__DOT__wr_count_next_is_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7985719526994286588ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_rod1__DOT__rod_rd_pd_p, __VscopeHash, 16579930663963629379ull);
    vlSelf->__PVT__u_rod1__DOT__rod_rd_prdy_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9553264033750438882ull);
    vlSelf->__PVT__u_rod1__DOT__rod_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6100399242857188069ull);
    vlSelf->__PVT__u_rod1__DOT__rod_rd_pvld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10226180406865413400ull);
    vlSelf->__PVT__u_rod1__DOT__rod_rd_pvld_int_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9918552082616232938ull);
    vlSelf->__PVT__u_rod1__DOT__rod_rd_count_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1493869591211216659ull);
    vlSelf->__PVT__u_rod1__DOT__rd_count_p_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17857676031441770625ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_rod1__DOT__rod_rd_pd_o, __VscopeHash, 11244941082231278643ull);
    vlSelf->__PVT__u_rod1__DOT__rd_req_next_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 535475963719337091ull);
    vlSelf->__PVT__u_rod1__DOT__rod_rd_pvld_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 706750910248356685ull);
    vlSelf->__PVT__u_rod1__DOT__rd_req_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5162232379939495313ull);
    vlSelf->u_rod1__DOT____VdfgRegularize_h89dfae84_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9130020550840812400ull);
    vlSelf->u_rod1__DOT____VdfgRegularize_h89dfae84_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5288799224096603351ull);
    vlSelf->__PVT__u_rod1__DOT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9713472109067920608ull);
    vlSelf->__PVT__u_rod1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5558497925659287890ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_rod1__DOT__ram__DOT__ram_ff0, __VscopeHash, 3638903785648950705ull);
    vlSelf->__PVT__u_rod2__DOT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15326275546898377775ull);
    vlSelf->__PVT__u_rod2__DOT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6654539201432973014ull);
    vlSelf->__PVT__u_rod2__DOT__rod_wr_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6537311763487732297ull);
    vlSelf->__PVT__u_rod2__DOT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16797477365977151868ull);
    vlSelf->__PVT__u_rod2__DOT__rod_wr_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11361827253562512016ull);
    vlSelf->__PVT__u_rod2__DOT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1973370309591973734ull);
    vlSelf->__PVT__u_rod2__DOT__wr_count_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17300415176765068687ull);
    vlSelf->__PVT__u_rod2__DOT__wr_count_next_is_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15255232365045995668ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_rod2__DOT__rod_rd_pd_p, __VscopeHash, 5517138040247164208ull);
    vlSelf->__PVT__u_rod2__DOT__rod_rd_prdy_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9419581241832754155ull);
    vlSelf->__PVT__u_rod2__DOT__rod_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1186256229154434481ull);
    vlSelf->__PVT__u_rod2__DOT__rod_rd_pvld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16826703085071892649ull);
    vlSelf->__PVT__u_rod2__DOT__rod_rd_pvld_int_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7729710692500331672ull);
    vlSelf->__PVT__u_rod2__DOT__rod_rd_count_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 479927671800579756ull);
    vlSelf->__PVT__u_rod2__DOT__rd_count_p_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9887411467540520038ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_rod2__DOT__rod_rd_pd_o, __VscopeHash, 8588244457080751921ull);
    vlSelf->__PVT__u_rod2__DOT__rd_req_next_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12838843942952096917ull);
    vlSelf->__PVT__u_rod2__DOT__rod_rd_pvld_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5214237967113399372ull);
    vlSelf->__PVT__u_rod2__DOT__rd_req_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8602024217318143058ull);
    vlSelf->u_rod2__DOT____VdfgRegularize_h89dfae84_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16641090288387284168ull);
    vlSelf->u_rod2__DOT____VdfgRegularize_h89dfae84_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5672719245928550437ull);
    vlSelf->__PVT__u_rod2__DOT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8552303400961955919ull);
    vlSelf->__PVT__u_rod2__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4338437726143114120ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_rod2__DOT__ram__DOT__ram_ff0, __VscopeHash, 7777926444449190957ull);
    vlSelf->__PVT__u_rod3__DOT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12420266841259616208ull);
    vlSelf->__PVT__u_rod3__DOT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16865607085760314330ull);
    vlSelf->__PVT__u_rod3__DOT__rod_wr_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14958533904078545099ull);
    vlSelf->__PVT__u_rod3__DOT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2034200708334295998ull);
    vlSelf->__PVT__u_rod3__DOT__rod_wr_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7421101801943943633ull);
    vlSelf->__PVT__u_rod3__DOT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15440858574272416212ull);
    vlSelf->__PVT__u_rod3__DOT__wr_count_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7866452865618710573ull);
    vlSelf->__PVT__u_rod3__DOT__wr_count_next_is_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2254424287612005942ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_rod3__DOT__rod_rd_pd_p, __VscopeHash, 4071063246716127039ull);
    vlSelf->__PVT__u_rod3__DOT__rod_rd_prdy_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17056592347716217273ull);
    vlSelf->__PVT__u_rod3__DOT__rod_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4269565860803464625ull);
    vlSelf->__PVT__u_rod3__DOT__rod_rd_pvld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9513490976148280020ull);
    vlSelf->__PVT__u_rod3__DOT__rod_rd_pvld_int_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11727788006022326678ull);
    vlSelf->__PVT__u_rod3__DOT__rod_rd_count_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11307731225203837762ull);
    vlSelf->__PVT__u_rod3__DOT__rd_count_p_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 139677516225727480ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_rod3__DOT__rod_rd_pd_o, __VscopeHash, 1960647600388711306ull);
    vlSelf->__PVT__u_rod3__DOT__rd_req_next_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1123675866642963987ull);
    vlSelf->__PVT__u_rod3__DOT__rod_rd_pvld_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15830124658870308377ull);
    vlSelf->__PVT__u_rod3__DOT__rd_req_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3620126699766873145ull);
    vlSelf->u_rod3__DOT____VdfgRegularize_h89dfae84_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4652383027563429093ull);
    vlSelf->u_rod3__DOT____VdfgRegularize_h89dfae84_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1851621779931808116ull);
    vlSelf->__PVT__u_rod3__DOT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16403533501790720782ull);
    vlSelf->__PVT__u_rod3__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10740944800178580975ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__u_rod3__DOT__ram__DOT__ram_ff0, __VscopeHash, 13486411807569087668ull);
    vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12970463005861561277ull);
    vlSelf->__PVT__u_roc__DOT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10340634921486497386ull);
    vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6823302171109920886ull);
    vlSelf->__PVT__u_roc__DOT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14410164060310116634ull);
    vlSelf->__PVT__u_roc__DOT__roc_wr_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5865085891204396325ull);
    vlSelf->__PVT__u_roc__DOT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3434069739277693580ull);
    vlSelf->__PVT__u_roc__DOT__wr_count_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15811793096593486963ull);
    vlSelf->__PVT__u_roc__DOT__wr_count_next_is_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17419222860901326899ull);
    vlSelf->__PVT__u_roc__DOT__roc_wr_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 813187396965610272ull);
    vlSelf->__PVT__u_roc__DOT__roc_rd_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5764057439113346798ull);
    vlSelf->__PVT__u_roc__DOT__roc_rd_pd_p = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9607839472077509261ull);
    vlSelf->__PVT__u_roc__DOT__rd_adr_next_popping = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12496860941852724780ull);
    vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8112209110435342136ull);
    vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6289522527421382751ull);
    vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16089524950310200475ull);
    vlSelf->__PVT__u_roc__DOT__roc_rd_count_p = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8340474416701372694ull);
    vlSelf->__PVT__u_roc__DOT__rd_count_p_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6122911529202151967ull);
    vlSelf->__PVT__u_roc__DOT__roc_rd_pd_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1359384827613272368ull);
    vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10493162011672259872ull);
    vlSelf->u_roc__DOT____VdfgRegularize_hb7820871_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11626689031674936431ull);
    vlSelf->u_roc__DOT____VdfgRegularize_hb7820871_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7938936687674620097ull);
    vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18433275870227706711ull);
    vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13897148857220370958ull);
    vlSelf->__PVT__u_roc__DOT__ram__DOT__ra = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2580693241757719179ull);
    vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11633767184083224833ull);
    vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14980882978030670824ull);
    vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 150223984297987295ull);
    vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12498602903444244127ull);
    VL_SCOPED_RAND_RESET_W(257, vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data, __VscopeHash, 17633712268433854607ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7275116386423144664ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3088 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133243784131984488ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3093 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15479432854894952522ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3489 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10838504474087669138ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3492 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10043673281650170189ull);
    vlSelf->__Vdly__u_rod0__DOT__rod_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15104931770384813833ull);
    vlSelf->__Vdly__u_rod1__DOT__rod_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2128137990885521751ull);
    vlSelf->__Vdly__u_rod2__DOT__rod_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6611580065885527492ull);
    vlSelf->__Vdly__u_rod3__DOT__rod_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4439494441101579096ull);
    VL_SCOPED_RAND_RESET_W(257, vlSelf->__Vdly__pipe_p1__DOT__p1_pipe_data, __VscopeHash, 4293801807529253911ull);
    vlSelf->__Vdly__u_roc__DOT__roc_wr_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6182412009527568309ull);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__rq_wr_adr = vlSelfRef.__PVT__rq_wr_adr;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = 0U;
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        }
    } else {
        vlSelfRef.__Vdly__rq_wr_adr = 0U;
        vlSelfRef.__PVT__rq_wr_count = 0U;
        vlSelfRef.__PVT__rq_rd_adr = 0U;
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                       & (IData)(vlSelfRef.rq_rd_pvld)))));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__2(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (0U 
                                                   == (IData)(vlSelfRef.__PVT__rq_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (3U 
                                                   == (IData)(vlSelfRef.__PVT__rq_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (1U 
                                                   == (IData)(vlSelfRef.__PVT__rq_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (2U 
                                                   == (IData)(vlSelfRef.__PVT__rq_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x0000000fU];
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vsim__ConstPool__TABLE_hbddb2eae_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vsim__ConstPool__TABLE_h6ee694b7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hfad8ee96_0;

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__3(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__rq_wr_adr = vlSelfRef.__Vdly__rq_wr_adr;
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx1 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx1])) {
        vlSelfRef.__PVT__rq_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx1];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx1])) {
        vlSelfRef.rq_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx1];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx1])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx1];
    }
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (0U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
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
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__2(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                   & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
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

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                        >> 1U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__3(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__rq_wr_adr = vlSelfRef.__Vdly__rq_wr_adr;
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx2 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx2])) {
        vlSelfRef.__PVT__rq_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx2];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx2])) {
        vlSelfRef.rq_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx2];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx2])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx2];
    }
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (1U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
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
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__2(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 1U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
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

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                        >> 2U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__3(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.__PVT__rq_wr_adr = vlSelfRef.__Vdly__rq_wr_adr;
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx3 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx3])) {
        vlSelfRef.__PVT__rq_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx3];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx3])) {
        vlSelfRef.rq_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx3];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx3])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx3];
    }
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (2U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
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
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__2(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 2U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
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

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                        >> 3U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__3(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__PVT__rq_wr_adr = vlSelfRef.__Vdly__rq_wr_adr;
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx4 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx4])) {
        vlSelfRef.__PVT__rq_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx4];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx4])) {
        vlSelfRef.rq_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx4];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx4])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx4];
    }
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (3U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
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
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__2(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 3U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
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

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                        >> 4U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__3(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__PVT__rq_wr_adr = vlSelfRef.__Vdly__rq_wr_adr;
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx5 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx5])) {
        vlSelfRef.__PVT__rq_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx5];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx5])) {
        vlSelfRef.rq_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx5];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx5])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx5];
    }
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (4U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
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
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__2(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 4U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
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

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                        >> 5U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__3(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.__PVT__rq_wr_adr = vlSelfRef.__Vdly__rq_wr_adr;
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx6 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx6])) {
        vlSelfRef.__PVT__rq_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx6];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx6])) {
        vlSelfRef.rq_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx6];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx6])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx6];
    }
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (5U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
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
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__2(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 5U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
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

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                        >> 6U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__3(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.__PVT__rq_wr_adr = vlSelfRef.__Vdly__rq_wr_adr;
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx7 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx7])) {
        vlSelfRef.__PVT__rq_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx7];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx7])) {
        vlSelfRef.rq_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx7];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx7])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx7];
    }
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (6U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
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
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__2(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 6U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
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

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo7__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                        >> 7U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo7__3(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo7__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.__PVT__rq_wr_adr = vlSelfRef.__Vdly__rq_wr_adr;
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx8 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx8])) {
        vlSelfRef.__PVT__rq_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx8];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx8])) {
        vlSelfRef.rq_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx8];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx8])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx8];
    }
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo7__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (7U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
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
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo7__2(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo7__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 7U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
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

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo8__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo8__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                        >> 8U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo8__3(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo8__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelfRef.__PVT__rq_wr_adr = vlSelfRef.__Vdly__rq_wr_adr;
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx9 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx9])) {
        vlSelfRef.__PVT__rq_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx9];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx9])) {
        vlSelfRef.rq_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx9];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx9])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx9];
    }
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo8__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo8__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (8U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
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
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo8__2(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo8__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 8U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
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

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo9__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                        >> 9U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo9__3(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo9__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    vlSelfRef.__PVT__rq_wr_adr = vlSelfRef.__Vdly__rq_wr_adr;
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx10 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                         ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                         : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                       << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                   ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                   : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                 << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                             << 2U) 
                                            | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx10])) {
        vlSelfRef.__PVT__rq_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx10];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx10])) {
        vlSelfRef.rq_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx10];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx10])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx10];
    }
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo9__1(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_vld) 
                                        & (9U == vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_pd[0x00000010U])));
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
}

void Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo9__2(Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_MCIF_READ_EG_lat_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo9__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 9U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
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

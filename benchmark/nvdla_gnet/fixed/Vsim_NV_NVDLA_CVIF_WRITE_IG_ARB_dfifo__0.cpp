// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__0(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dfifo_wr_adr = vlSelfRef.__PVT__dfifo_wr_adr;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__dfifo_wr_adr = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__dfifo_wr_adr)));
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__dfifo_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.dfifo_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.dfifo_wr_count = 0U;
        }
    } else {
        vlSelfRef.__Vdly__dfifo_wr_adr = 0U;
        vlSelfRef.__PVT__dfifo_rd_adr = 0U;
        vlSelfRef.dfifo_wr_count = 0U;
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dfifo_rd_adr)));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dfifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                       & (IData)(vlSelfRef.dfifo_rd_pvld)))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (0U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (3U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (1U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (2U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat0_pd[0x00000010U];
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vsim__ConstPool__TABLE_hbddb2eae_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vsim__ConstPool__TABLE_h6ee694b7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hfad8ee96_0;

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__3(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__dfifo_wr_adr = vlSelfRef.__Vdly__dfifo_wr_adr;
    vlSelfRef.__PVT__dfifo_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
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
        vlSelfRef.__PVT__dfifo_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx1];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx1])) {
        vlSelfRef.dfifo_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx1];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx1])) {
        vlSelfRef.__PVT__dfifo_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx1];
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__1\n"); );
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
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                                   & (IData)(vlSelfRef.__PVT__dfifo_rd_pvld_int));
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

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dfifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                        >> 1U) & (IData)(vlSelfRef.dfifo_rd_pvld)))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (0U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (3U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (1U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (2U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat1_pd[0x00000010U];
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__3(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__dfifo_wr_adr = vlSelfRef.__Vdly__dfifo_wr_adr;
    vlSelfRef.__PVT__dfifo_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
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
        vlSelfRef.__PVT__dfifo_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx2];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx2])) {
        vlSelfRef.dfifo_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx2];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx2])) {
        vlSelfRef.__PVT__dfifo_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx2];
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__1\n"); );
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
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                                    >> 1U) & (IData)(vlSelfRef.__PVT__dfifo_rd_pvld_int));
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

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dfifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                        >> 2U) & (IData)(vlSelfRef.dfifo_rd_pvld)))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (0U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (3U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (1U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (2U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat2_pd[0x00000010U];
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__3(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.__PVT__dfifo_wr_adr = vlSelfRef.__Vdly__dfifo_wr_adr;
    vlSelfRef.__PVT__dfifo_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
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
        vlSelfRef.__PVT__dfifo_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx3];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx3])) {
        vlSelfRef.dfifo_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx3];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx3])) {
        vlSelfRef.__PVT__dfifo_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx3];
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__1\n"); );
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
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                                    >> 2U) & (IData)(vlSelfRef.__PVT__dfifo_rd_pvld_int));
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

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dfifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                        >> 3U) & (IData)(vlSelfRef.dfifo_rd_pvld)))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (0U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (3U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (1U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (2U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat3_pd[0x00000010U];
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__3(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__PVT__dfifo_wr_adr = vlSelfRef.__Vdly__dfifo_wr_adr;
    vlSelfRef.__PVT__dfifo_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
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
        vlSelfRef.__PVT__dfifo_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx4];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx4])) {
        vlSelfRef.dfifo_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx4];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx4])) {
        vlSelfRef.__PVT__dfifo_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx4];
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__1\n"); );
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
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                                    >> 3U) & (IData)(vlSelfRef.__PVT__dfifo_rd_pvld_int));
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

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dfifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                    | (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                        >> 4U) & (IData)(vlSelfRef.dfifo_rd_pvld)))));
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (0U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (3U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (1U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x00000010U];
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (2U 
                                                   == (IData)(vlSelfRef.__PVT__dfifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[8U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[9U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[9U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000aU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000bU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000cU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000dU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000eU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x0000000fU];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_dat4_pd[0x00000010U];
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__3(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__PVT__dfifo_wr_adr = vlSelfRef.__Vdly__dfifo_wr_adr;
    vlSelfRef.__PVT__dfifo_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
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
        vlSelfRef.__PVT__dfifo_rd_count = Vsim__ConstPool__TABLE_h6ee694b7_0
            [__Vtableidx5];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx5])) {
        vlSelfRef.dfifo_rd_pvld = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx5];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx5])) {
        vlSelfRef.__PVT__dfifo_rd_pvld_int = Vsim__ConstPool__TABLE_hfad8ee96_0
            [__Vtableidx5];
    }
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__1(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__1\n"); );
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
}

void Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__2(Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_CVIF_WRITE_IG_ARB_dfifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo4__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__all_gnts) 
                                    >> 4U) & (IData)(vlSelfRef.__PVT__dfifo_rd_pvld_int));
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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_sequent__TOP__271(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__271\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__odata_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__odata_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__odata_count_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__odata_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__odata_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__odata_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__odata_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT____VdfgRegularize_ha389fa0c_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_busy_next));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__odata_adr)));
}

void Vsim___024root___nba_sequent__TOP__272(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__272\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__odata_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__odata_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__odata_count_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__odata_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__odata_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__odata_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__odata_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT____VdfgRegularize_h88d17ce0_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_busy_next));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__odata_adr)));
}

void Vsim___024root___nba_sequent__TOP__273(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__273\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__odata_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__odata_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__odata_count_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__odata_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__odata_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__odata_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__odata_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT____VdfgRegularize_h88d17ce0_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_busy_next));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__odata_adr)));
}

void Vsim___024root___nba_sequent__TOP__274(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__274\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_count_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT____VdfgRegularize_h038b20ae_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_busy_next));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_adr)));
}

void Vsim___024root___nba_sequent__TOP__275(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__275\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_busy_next));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT____VdfgRegularize_ha1be1e7f_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_adr_next 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_adr_next 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__276(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__276\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_count_next_is_61));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT____VdfgRegularize_h300e9d69_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_adr_next 
        = ((0x3cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr))
            ? 0U : (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next 
        = ((0x3cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr))
            ? 0U : (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__277(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__277\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_count_next_is_61));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT____VdfgRegularize_h22015e6a_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_adr_next 
        = ((0x3cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr))
            ? 0U : (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next 
        = ((0x3cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr))
            ? 0U : (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__278(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__278\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_count_next_is_245));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT____VdfgRegularize_h52d9920a_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_adr_next 
        = ((0xf4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_wr_adr))
            ? 0U : (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_wr_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__rd_adr_next 
        = ((0xf4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_adr))
            ? 0U : (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__279(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__279\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_count_p = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_count = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_count = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT____VdfgRegularize_h7ce8b973_0_4)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_busy_next));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__rd_adr_next_popping 
        = ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_adr))
            ? 0U : (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_count))
            ? 0x14U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_adr));
}

void Vsim___024root___nba_sequent__TOP__280(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__280\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_count_next_is_20));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT____VdfgRegularize_h733db5e8_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_adr_next 
        = ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_adr))
            ? 0U : (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_adr_next 
        = ((0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_wr_adr))
            ? 0U : (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_wr_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__281(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__281\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__rd_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__rd_count_p_next_no_rd_popping));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT____VdfgRegularize_h9c8fc933_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_count_next_is_80));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__rd_adr_next 
        = ((0x4fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_adr))
            ? 0U : (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__wr_adr_next 
        = ((0x4fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_adr))
            ? 0U : (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_adr))));
}

void Vsim___024root___nba_sequent__TOP__282(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__282\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__rd_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_popping)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__rd_count_p_next_no_rd_popping));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_rd_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT____VdfgRegularize_h10f8229f_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_count_next_is_80));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__rd_adr_next 
        = ((0x4fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_rd_adr))
            ? 0U : (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_rd_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__wr_adr_next 
        = ((0x4fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_wr_adr))
            ? 0U : (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__info_wr_adr))));
}

void Vsim___024root___nba_sequent__TOP__283(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__283\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__rd_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__rd_count_p_next_no_rd_popping));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_count_next_is_19));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT____VdfgRegularize_h8cc3e894_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__rd_adr_next 
        = ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_adr))
            ? 0U : (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_adr_next 
        = ((0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_adr))
            ? 0U : (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_adr))));
}

void Vsim___024root___nba_sequent__TOP__284(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__284\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_rd_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__rd_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_rd_count = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_rd_count = 0U;
    }
}

void Vsim___024root___nba_sequent__TOP__285(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__285\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_popping)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__rd_count_p_next_no_rd_popping));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_rd_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT____VdfgRegularize_h4f8683c2_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_count_next_is_60));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__wr_adr_next 
        = ((0x3bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_wr_adr))
            ? 0U : (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_wr_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__rd_adr_next 
        = ((0x3bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_rd_adr))
            ? 0U : (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_rd_adr))));
}

void Vsim___024root___nba_sequent__TOP__286(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__286\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_reserving) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT____VdfgRegularize_h89196029_0_1)) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_busy_int) 
              != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_busy_next)));
}

void Vsim___024root___nba_sequent__TOP__287(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__287\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_reserving) 
         & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_popping)) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_count)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__ram__DOT__ram_ff0[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__ram__DOT__di_d[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__ram__DOT__ram_ff0[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__ram__DOT__di_d[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__ram__DOT__ram_ff0[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__ram__DOT__di_d[2U];
    }
}

void Vsim___024root___nba_sequent__TOP__288(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__288\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__SO_int_net 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim___024root___nba_sequent__TOP__289(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__289\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_popping)) 
                 | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_busy_int) 
                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_count_next_is_3)) 
                    | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_prdy) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_pvld_int)))));
}

void Vsim___024root___nba_sequent__TOP__290(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__290\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*31:0*/ __Vdeeptemp_h5fb4d464__0;
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_out) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dlv_mask 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_out;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_stripe_end 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_out;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_layer_end 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_out;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_fout_int_sat[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_fout_int_sat[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_fout_int_sat[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_fout_int_sat[3U];
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_vld_d1) 
             & ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_sum)) 
                | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_clr_d1)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_count_w;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dlv_mask = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_stripe_end = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_layer_end = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_count = 0U;
    }
    __Vdeeptemp_h5fb4d464__0 = ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                       >> 0x00000015U)) 
                                + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                          >> 0x00000014U)) 
                                   + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                             >> 0x00000013U)) 
                                      + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                >> 0x00000012U)) 
                                         + ((1U & (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                   >> 0x00000011U)) 
                                            + ((1U 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                   >> 0x00000010U)) 
                                               + ((1U 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                      >> 0x0000000fU)) 
                                                  + 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                       >> 0x0000000eU)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                        >> 0x0000000dU)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                         >> 0x0000000cU)) 
                                                     + 
                                                     ((1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                          >> 0x0000000bU)) 
                                                      + 
                                                      ((1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                           >> 0x0000000aU)) 
                                                       + 
                                                       ((1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                            >> 9U)) 
                                                        + 
                                                        ((1U 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                             >> 8U)) 
                                                         + 
                                                         ((1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                              >> 7U)) 
                                                          + 
                                                          ((1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                               >> 6U)) 
                                                           + 
                                                           ((1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                                >> 5U)) 
                                                            + 
                                                            ((1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                                 >> 4U)) 
                                                             + 
                                                             ((1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                                  >> 3U)) 
                                                              + 
                                                              ((1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                                   >> 2U)) 
                                                               + 
                                                               ((1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                                    >> 1U)) 
                                                                + 
                                                                ((1U 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U]) 
                                                                 + 
                                                                 ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                   >> 0x0000001fU) 
                                                                  + 
                                                                  ((1U 
                                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                       >> 0x0000001eU)) 
                                                                   + 
                                                                   ((1U 
                                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                        >> 0x0000001dU)) 
                                                                    + 
                                                                    ((1U 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                         >> 0x0000001cU)) 
                                                                     + 
                                                                     ((1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                          >> 0x0000001bU)) 
                                                                      + 
                                                                      ((1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                           >> 0x0000001aU)) 
                                                                       + 
                                                                       ((1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                            >> 0x00000019U)) 
                                                                        + 
                                                                        ((1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                             >> 0x00000018U)) 
                                                                         + 
                                                                         ((1U 
                                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                              >> 0x00000017U)) 
                                                                          + 
                                                                          ((1U 
                                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                               >> 0x00000016U)) 
                                                                           + 
                                                                           ((1U 
                                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 0x00000015U)) 
                                                                            + 
                                                                            ((1U 
                                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 0x00000014U)) 
                                                                             + 
                                                                             ((1U 
                                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 0x00000013U)) 
                                                                              + 
                                                                              ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 0x00000012U)) 
                                                                               + 
                                                                               ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 0x00000011U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 0x00000010U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 0x0000000fU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 0x0000000eU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 0x0000000dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 0x0000000cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 0x0000000bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 0x0000000aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 9U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 8U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 7U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 5U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 4U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 3U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 2U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U] 
                                                                                >> 1U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[2U]) 
                                                                                + 
                                                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x0000001fU) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x0000001eU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x0000001dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x0000001cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x0000001bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x0000001aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x00000019U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x00000018U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x00000017U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x00000016U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x00000015U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x00000014U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x00000013U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x00000012U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x00000011U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x00000010U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x0000000fU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x0000000eU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x0000000dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x0000000cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x0000000bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 0x0000000aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 9U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 8U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 7U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 5U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 4U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 3U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 2U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U] 
                                                                                >> 1U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[1U]) 
                                                                                + 
                                                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x0000001fU) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x0000001eU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x0000001dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x0000001cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x0000001bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x0000001aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x00000019U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x00000018U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x00000017U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x00000016U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x00000015U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x00000014U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x00000013U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x00000012U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x00000011U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x00000010U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x0000000fU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x0000000eU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x0000000dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x0000000cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x0000000bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 0x0000000aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 9U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 8U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 7U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 5U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 4U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 3U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 2U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U] 
                                                                                >> 1U)) 
                                                                                + 
                                                                                (1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_sum 
        = (0x000000ffU & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                            >> 0x0000001fU) + (1U & 
                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                >> 0x0000001eU))) 
                          + (((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                     >> 0x0000001dU)) 
                              + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                       >> 0x0000001cU))) 
                             + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                       >> 0x0000001bU)) 
                                + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                          >> 0x0000001aU)) 
                                   + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                             >> 0x00000019U)) 
                                      + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                >> 0x00000018U)) 
                                         + ((1U & (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                   >> 0x00000017U)) 
                                            + ((1U 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_bit_d1[3U] 
                                                   >> 0x00000016U)) 
                                               + __Vdeeptemp_h5fb4d464__0)))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_vld_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_out));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_clr_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_out) 
               & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_end)) 
                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_end_d1))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_fw_3) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[0U] 
                = ((0xffff0000U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                                    << 0x00000018U) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2) 
                                      << 0x00000010U))) 
                   | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                       << 8U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[1U] 
                = ((0xffff0000U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                                    << 0x00000018U) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2) 
                                      << 0x00000010U))) 
                   | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                        << 8U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2)) 
                      | (0x0000ffffU & ((0x0000ffffU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                                            >> 8U)) 
                                        | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2) 
                                           >> 0x00000010U)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[2U] 
                = ((0xffff0000U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                                    << 0x00000018U) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2) 
                                      << 0x00000010U))) 
                   | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                        << 8U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2)) 
                      | (0x0000ffffU & ((0x0000ffffU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                                            >> 8U)) 
                                        | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2) 
                                           >> 0x00000010U)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[3U] 
                = ((0xffff0000U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                                    << 0x00000018U) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2) 
                                      << 0x00000010U))) 
                   | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                        << 8U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2)) 
                      | (0x0000ffffU & ((0x0000ffffU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                                            >> 8U)) 
                                        | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2) 
                                           >> 0x00000010U)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[4U] 
                = ((0xffff0000U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                                    << 0x00000018U) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2) 
                                      << 0x00000010U))) 
                   | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                        << 8U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2)) 
                      | (0x0000ffffU & ((0x0000ffffU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                                            >> 8U)) 
                                        | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2) 
                                           >> 0x00000010U)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[5U] 
                = ((0xffff0000U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                                    << 0x00000018U) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2) 
                                      << 0x00000010U))) 
                   | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                        << 8U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2)) 
                      | (0x0000ffffU & ((0x0000ffffU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3) 
                                            >> 8U)) 
                                        | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_mask_d2) 
                                           >> 0x00000010U)))));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_fw_3) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[3U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[4U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[5U] = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d3) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d4))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d3;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d3) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d4))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d4 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d4) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d4;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d4;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d4) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d5))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d4;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d4) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d5))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d5 = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d2) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d3))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d2;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d2) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d3))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d3 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d3;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d3;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d3) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d4))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d3;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d3) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d4))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d4 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_out) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_end_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_end;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d1) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d1;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d1) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d2 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d2;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d2) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d3))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d2;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d2) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d3))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d3 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d1;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d1) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d1;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d1) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d2 = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_valid) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                = (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_op1_vld[5U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_elem_op1_vld[4U])));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d1 
                = ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_valid)) 
                          | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_channel_end)))
                    ? 0U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_rd_mask));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_valid) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 = 0ULL;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d1 = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d1 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_valid) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_stripe_end;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_layer_end;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[4U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_in_mask[5U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_end_d1 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_wr_en_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_stripe_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_layer_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_d1 = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_valid_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_count_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__dlv_sat_clr_d1)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_sum)
            : ((1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_count)) 
                                       + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_sum))) 
                                      >> 0x00000020U))))
                ? 0xffffffffU : (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_count 
                                 + (IData)((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__sat_sum))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_valid_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_valid) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_channel_end)));
}

extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h7f9fae8a_0;
extern const VlUnpacked<VlWide<6>/*191:0*/, 8> Vsim__ConstPool__TABLE_h3ebe7751_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hd4ca0047_0;
extern const VlUnpacked<VlWide<20>/*639:0*/, 128> Vsim__ConstPool__TABLE_h9e2d4fe8_0;

void Vsim___024root___nba_sequent__TOP__291(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__291\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    CData/*2:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    // Body
    __Vtableidx56 = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_end_d2) 
                      << 2U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_valid_d2) 
                                 << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_)));
    if (Vsim__ConstPool__TABLE_h7f9fae8a_0[__Vtableidx56]) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_dlv_elem_mask[0U] 
            = Vsim__ConstPool__TABLE_h3ebe7751_0[__Vtableidx56][0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_dlv_elem_mask[1U] 
            = Vsim__ConstPool__TABLE_h3ebe7751_0[__Vtableidx56][1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_dlv_elem_mask[2U] 
            = Vsim__ConstPool__TABLE_h3ebe7751_0[__Vtableidx56][2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_dlv_elem_mask[3U] 
            = Vsim__ConstPool__TABLE_h3ebe7751_0[__Vtableidx56][3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_dlv_elem_mask[4U] 
            = Vsim__ConstPool__TABLE_h3ebe7751_0[__Vtableidx56][4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_dlv_elem_mask[5U] 
            = Vsim__ConstPool__TABLE_h3ebe7751_0[__Vtableidx56][5U];
    }
    __Vtableidx55 = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer)
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_clip_truncate)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_clip_truncate)) 
                      << 2U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__layer_st) 
                                 << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_)));
    if (Vsim__ConstPool__TABLE_hd4ca0047_0[__Vtableidx55]) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[1U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[2U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[3U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[4U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[5U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[6U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[7U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[8U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[9U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000aU] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000bU] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000cU] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000dU] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000eU] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x0000000fU] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000010U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000011U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000012U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_truncate[0x00000013U] 
            = Vsim__ConstPool__TABLE_h9e2d4fe8_0[__Vtableidx55][0x00000013U];
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__layer_st) {
            if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__cfg_is_fp16 = 1U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[3U] = 0U;
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__cfg_is_fp16 = 0U;
                if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x8) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[0U] = 0xffffffffU;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[1U] = 0xffffffffU;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[2U] = 0xffffffffU;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[3U] = 0xffffffffU;
                } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x4) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[0U] = 0xffffffffU;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[1U] = 0xffffffffU;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[2U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[3U] = 0U;
                } else {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[0U] = 0x0000ffffU;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[2U] 
                        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x2)
                            ? 0x0000ffffU : 0U);
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[3U] = 0U;
                }
            }
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[4U] 
                = (IData)(((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision))
                            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x1)
                                ? 0x000000000000ffffULL
                                : 0xffffffffffffffffULL)
                            : 0ULL));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[5U] 
                = (IData)((((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision))
                             ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x1)
                                 ? 0x000000000000ffffULL
                                 : 0xffffffffffffffffULL)
                             : 0ULL) >> 0x00000020U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__cfg_winograd 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_conv_mode;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_wg[0U] 
                = (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_conv_mode)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_wg[1U] 
                = (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_conv_mode)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_wg[2U] 
                = (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_conv_mode)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U] 
                = (- (IData)((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U] 
                = (- (IData)((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[2U] 
                = (- (IData)((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[3U] 
                = (0x7fffffffU & (- (IData)((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision)))));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__layer_st) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_valid) 
                >> 8U))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_cnt_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__layer_st) 
                    | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_valid) 
                       >> 8U))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_cnt = 0U;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[0U] 
            = (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_valid_d2)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[1U] 
            = (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_valid_d2)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[2U] 
            = (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_valid_d2)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[3U] 
            = (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_valid_d2)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[4U] 
            = (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_valid_d2)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[5U] 
            = (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_valid_d2)));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__cfg_is_fp16 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[4U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_in_en_mask[5U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__cfg_winograd = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_wg[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_wg[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_wg[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__cfg_is_int8[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[4U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__accu_ctrl_ram_valid[5U] = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_valid_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_valid_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_valid_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_st) 
                           >> 8U)) & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_valid) 
                                      >> 8U))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_valid_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_mode 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_mode_d2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0 
                = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_0_d2))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4 
                = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_4_d2))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1 
                = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_1_d2))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2 
                = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_2_d2))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3 
                = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_3_d2))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5 
                = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_5_d2))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6 
                = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_6_d2))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7 
                = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_7_d2))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_rd_mask 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_d2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_stripe_end 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_stripe_end_d2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_layer_end 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_layer_end_d2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_channel_end 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_end_d2;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__slcg_cell_en_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__slcg_cell_en_d2;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_valid_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_mode_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_mode_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_0_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_0_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_4_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_4_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_1_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_1_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_2_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_2_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_3_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_3_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_5_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_5_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_6_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_6_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_7_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_7_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_stripe_end_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_stripe_end_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_layer_end_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_layer_end_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_end_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_end_d1;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__slcg_cell_en_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__slcg_cell_en_d1;
        if ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_valid))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_mode_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_mode_d0;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_0_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_0_d0;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_4_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_4_d0;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_1_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_1_d0;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_2_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_2_d0;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_3_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_3_d0;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_5_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_5_d0;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_6_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_6_d0;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_7_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_7_d0;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_stripe_end_d1 
                = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_pd) 
                         >> 6U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_layer_end_d1 
                = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_pd) 
                         >> 8U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_end_d1 
                = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_pd) 
                         >> 7U));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__slcg_cell_en_d1 
            = (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_547) 
                  & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision))) 
                 << 3U) | (0xfffffffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                                          & ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision)) 
                                             << 2U)))) 
               | ((((2U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision)) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_547)) 
                   << 1U) | ((2U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision)) 
                             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                                >> 2U))));
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__layer_st) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_valid) 
                >> 8U))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_st 
                = (0x000001ffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_st_w))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_0_d0 
                = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_w));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_4_d0 
                = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_w) 
                         >> 4U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_1_d0 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_w) 
                    >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_549));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_2_d0 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_w) 
                    >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_549));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_3_d0 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_w) 
                    >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_549));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_5_d0 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_w) 
                    >> 5U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x2));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_6_d0 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_w) 
                    >> 6U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x2));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_7_d0 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_w) 
                    >> 7U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x2));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__layer_st) 
                    | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_valid) 
                       >> 8U))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_st = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_0_d0 = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_4_d0 = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_1_d0 = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_2_d0 = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_3_d0 = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_5_d0 = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_6_d0 = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_7_d0 = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__layer_st) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_mode_d0 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x8) 
                     << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x4) 
                               << 2U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x2) 
                                           << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x1)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_pvld_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_pd 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_pd_d2;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_mode = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__slcg_cell_en_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_rd_mask = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_stripe_end = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_layer_end = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_channel_end = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_mode_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_0_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_4_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_1_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_2_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_3_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_5_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_6_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_7_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__slcg_cell_en_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_stripe_end_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_layer_end_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_end_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_mode_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_0_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_4_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_1_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_2_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_3_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_5_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_6_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_7_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__slcg_cell_en_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_stripe_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_layer_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_st = 0x01ffU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_mode_d0 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_0_d0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_4_d0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_1_d0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_2_d0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_3_d0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_5_d0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_6_d0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ram_sel_7_d0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_pd = 0U;
    }
}

extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h93e1b771_0;

void Vsim___024root___nba_sequent__TOP__292(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__292\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__channel_cnt_reg_en) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_first_atomic))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_height_base 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_cnt_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__channel_cnt_reg_en) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_first_atomic))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_height_base = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt_reg_en) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_first_atomic))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_line_base 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_cnt_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt_reg_en) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_first_atomic))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_line_base = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__channel_cnt_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__channel_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__channel_cnt_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt_reg_en) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_first_atomic))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_cnt_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_cnt_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt_reg_en) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_first_atomic))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_cnt_d1 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__batch_cnt_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__batch_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__batch_cnt_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_d0_sat_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_d0_sat_count_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_d1_sat_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_d1_sat_count_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag0_en) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag1_vld) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag0_addr 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag1_addr;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag0_mask 
                    = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag1_mask));
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag0_addr 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_addr_w;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag0_mask 
                    = (0x000000ffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_565) 
                                      >> 8U));
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__wait_for_op_en) 
             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                >> 2U))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_op_en 
                = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                         >> 2U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_channel 
                = (0x000001ffU & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision))
                                   ? (0x000000ffU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__reg2dp_dataout_channel) 
                                       >> 5U)) : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__reg2dp_dataout_channel) 
                                                  >> 4U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_conv_mode 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_conv_mode;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_proc_precision 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_proc_precision;
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_line_packed 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_line_packed;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_surf_packed 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_surf_packed;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_height 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_height;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_line_stride 
                    = (1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_line_stride);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_surf_stride 
                    = (1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_surf_stride);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_width 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_width;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_dataout_addr 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_addr;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_batches 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_batches;
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_line_packed 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_line_packed;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_surf_packed 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_surf_packed;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_height 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_height;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_line_stride 
                    = (1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_line_stride);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_surf_stride 
                    = (1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_surf_stride);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_width 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_width;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_dataout_addr 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_addr;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_batches 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_batches;
            }
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__wait_for_op_en) 
                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                       >> 2U))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_op_en = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_channel = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_conv_mode = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_proc_precision = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_line_packed = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_surf_packed = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_height = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_line_stride = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_surf_stride = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_width = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_dataout_addr = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_batches = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_valid_d2) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_d0_reg_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_data_avl 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_data_avl_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_valid_d2) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_d0_reg_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_data_avl = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_valid_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_size_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_size_d1;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dlv_valid) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__back_reg_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_back 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base) 
                                  + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_add_4)
                                      ? 2U : 1U)));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dlv_valid) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__back_reg_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_back = 0U;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en;
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_0_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_0;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_1_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_1;
        } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_1_d1 = 0U;
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_2_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_2;
        } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_2_d1 = 0U;
        }
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_3_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_3;
        } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_3_d1 = 0U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_4_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_4;
        } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_4_d1 = 0U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_5_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_5;
        } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_5_d1 = 0U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_6_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_6;
        } else if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_6_d1 = 0U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_7_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_7;
        } else if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_7_d1 = 0U;
        }
        if (((0x0034U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_cya 
                = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                           >> 0x00000016U));
        }
        if (((0x0014U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_channel 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_cacc_d_misc_cfg_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_proc_precision 
                = (3U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000022U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_conv_mode 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (((0x0034U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_cya 
                = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                           >> 0x00000016U));
        }
        if (((0x0014U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_channel 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_cacc_d_misc_cfg_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_proc_precision 
                = (3U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000022U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_conv_mode 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_d2_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_layer_end_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_layer_end_d2;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_d1_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0U] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0U]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0U])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0U])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0U]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0U]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0U]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[1U] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[1U]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[1U])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[1U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[1U])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[1U]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[1U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[1U]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[1U]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[2U] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[2U]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[2U])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[2U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[2U])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[2U]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[2U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[2U]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[2U]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[3U] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[3U]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[3U])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[3U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[3U])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[3U]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[3U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[3U]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[3U]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[4U] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[4U]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[4U])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[4U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[4U])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[4U]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[4U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[4U]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[4U]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[5U] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[5U]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[5U])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[5U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[5U])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[5U]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[5U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[5U]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[5U]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[6U] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[6U]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[6U])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[6U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[6U])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[6U]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[6U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[6U]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[6U]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[7U] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[7U]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[7U])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[7U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[7U])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[7U]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[7U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[7U]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[7U]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[8U] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[8U]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[8U])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[8U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[8U])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[8U]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[8U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[8U]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[8U]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[9U] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[9U]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[9U])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[9U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[9U])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[9U]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[9U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[9U]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[9U]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0x0000000aU] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0x0000000aU]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0x0000000aU])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0x0000000aU]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0x0000000aU])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0x0000000aU]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0x0000000aU]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0x0000000aU]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0x0000000aU]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0x0000000bU] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0x0000000bU]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0x0000000bU])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0x0000000bU]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0x0000000bU])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0x0000000bU]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0x0000000bU]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0x0000000bU]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0x0000000bU]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0x0000000cU] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0x0000000cU]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0x0000000cU])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0x0000000cU]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0x0000000cU])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0x0000000cU]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0x0000000cU]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0x0000000cU]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0x0000000cU]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0x0000000dU] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0x0000000dU]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0x0000000dU])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0x0000000dU]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0x0000000dU])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0x0000000dU]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0x0000000dU]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0x0000000dU]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0x0000000dU]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0x0000000eU] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0x0000000eU]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0x0000000eU])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0x0000000eU]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0x0000000eU])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0x0000000eU]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0x0000000eU]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0x0000000eU]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0x0000000eU]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0x0000000fU] 
                = ((((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1)))) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0x0000000fU]) 
                    | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                         >> 1U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0x0000000fU])) 
                   | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                          >> 2U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0x0000000fU]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 3U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0x0000000fU])) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                            >> 4U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0x0000000fU]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0x0000000fU]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0x0000000fU]) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1) 
                                               >> 7U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0x0000000fU]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_layer_end_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_layer_end_d1;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_d0_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_d1 
                = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_rd_addr_cnt) 
                                  >> 3U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_rd_mask 
                = (0x000000ffU & ((IData)(1U) << (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_rd_addr_cnt)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_rd_addr_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_rd_addr_cnt_inc;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_layer_end_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_layer_end;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg_rd_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__cacc2csb_resp_src_pd 
                = (QData)((IData)((((- (IData)((8U 
                                                > (0x00000ffcU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))))) 
                                    & ((4U == (0x00000ffcU 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))
                                        ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer) 
                                            << 0x00000010U) 
                                           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_producer))
                                        : ((0U == (0x00000ffcU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                            ? ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en)
                                                  ? 
                                                 ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer)
                                                   ? 1U
                                                   : 2U)
                                                  : 0U) 
                                                << 0x00000010U) 
                                               | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en)
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer)
                                                    ? 2U
                                                    : 1U)
                                                   : 0U))
                                            : 0U))) 
                                   | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__select_d0))) 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data) 
                                      | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__select_d1))) 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data)))));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg_wr_en) 
                    & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                               >> 0x00000037U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__cacc2csb_resp_src_pd = 0x0000000200000000ULL;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__slcg_op_en_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__slcg_op_en_d2;
        if (((0x002cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_clip_truncate 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x002cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_clip_truncate 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag1_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag1_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_addr_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag1_mask 
                = (0x000000ffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_565) 
                                  >> 8U));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_valid_d0) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_size_d1 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__skip_cnt)
                    ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x2)
                        ? 4U : 2U) : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_add_8)
                                       ? 8U : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x4)
                                                ? 4U
                                                : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x2)
                                                    ? 2U
                                                    : 1U))));
        }
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_0 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_0_w;
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_0 = 0U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_1_w;
        } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_1 = 0U;
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_2_w;
        } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_2 = 0U;
        }
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_3_w;
        } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_3 = 0U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_4_w;
        } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_4 = 0U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_5_w;
        } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_5 = 0U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_6 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_6_w;
        } else if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_6 = 0U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_7 
                = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base) 
                                  >> 3U));
        } else if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_7 = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dlv_valid) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_valid_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_en_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dlv_valid) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_valid_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_cacc_d_dataout_map_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_line_packed 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_surf_packed 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_cacc_d_dataout_map_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_line_packed 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_surf_packed 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_cacc_d_dataout_size_0_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_height 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_width 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_cacc_d_dataout_size_0_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_height 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_width 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0020U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_line_stride 
                = (0x0007ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (((0x0020U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_line_stride 
                = (0x0007ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (((0x0024U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_surf_stride 
                = (0x0007ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (((0x0024U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_surf_stride 
                = (0x0007ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (((0x0018U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_addr 
                = (0x07ffffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (((0x0018U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_addr 
                = (0x07ffffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (((0x001cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_batches 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x001cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_batches 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg_w;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dp2reg_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer_w;
        }
        if (((4U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                    << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__s_reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_producer 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__slcg_op_en_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__slcg_op_en_d1;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dlv_valid) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base 
                = (0x000000ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_552));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__slcg_op_en_d1 
            = (0x0000007fU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_ori))));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_height_base = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_line_base = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__channel_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dataout_addr_cnt_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__batch_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_d0_sat_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_d1_sat_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_rd_mask = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag0_addr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag0_mask = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_op_en = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_channel = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_data_avl = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_conv_mode = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_proc_precision = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_size_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_back = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_0_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_1_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_2_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_3_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_4_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_5_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_6_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_7_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_line_packed = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_surf_packed = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_height = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_line_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_surf_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_width = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_dataout_addr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_batches = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_cya = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_channel = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_proc_precision = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_conv_mode = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_cya = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_channel = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_proc_precision = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_conv_mode = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_layer_end_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[1U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[2U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[3U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[4U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[5U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[6U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[7U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[8U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[9U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0x0000000aU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0x0000000bU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0x0000000cU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0x0000000dU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0x0000000eU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_d2[0x0000000fU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__cacc2csb_resp_src_pd = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__slcg_op_en_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_clip_truncate = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_clip_truncate = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_rd_addr_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag1_addr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag1_mask = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_size_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_addr_7 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dbuf_wr_en = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_line_packed = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_line_packed = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_surf_packed = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_surf_packed = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_height = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_height = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_line_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_line_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_surf_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_surf_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_width = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_width = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_addr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_addr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_batches = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_batches = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_layer_end_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_producer = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__slcg_op_en_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_layer_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__slcg_op_en_d1 = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d1_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d2_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag0_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag1_vld) 
               | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dp2reg_done_w) 
                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_567))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_global_clk_ovr_on_sync__DOT__sync_sbus 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_global_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cacc__DOT__csb2cacc_req_pvld_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_global_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_global_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag1_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag1_vld_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__channel_cnt_w 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__channel_cnt) 
            == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_channel))
            ? 0U : (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__channel_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_valid_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_valid_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x1 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_proc_precision)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_conv_mode)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_height_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_height) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_width_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_width) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_batch_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__batch_cnt) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_batches));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_add_8 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_proc_precision)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_conv_mode));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x4 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_proc_precision)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_conv_mode));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x2 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_conv_mode)) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__cur_proc_precision)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_height_end)
            ? 0U : (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__height_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_width_end)
            ? 0U : (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__width_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__batch_cnt_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_batch_end)
            ? 0U : (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__batch_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en 
        = ((~ (- (IData)((1U & (~ (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_data_avl))))))) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_rd_mask));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_rd_addr_cnt_inc 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_rd_addr_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_global_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0 
        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_data_avl_add 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_valid_d2)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_size_d2)
            : 0U);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_valid_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_push_valid_d0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_last_mask 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x1)
            ? 1U : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x2)
                     ? 2U : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_x4)
                              ? 8U : 0x80U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__skip_cnt 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__skip_cnt_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_valid_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dlv_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer_w 
        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__reg2dp_dataout_channel 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_channel;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_conv_mode 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_conv_mode;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_ori 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__reg2dp_dataout_channel 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_channel;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_conv_mode 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_conv_mode;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_ori 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dp2reg_done 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dp2reg_done_w));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_547 = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                                                   >> 2U) 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__reg2dp_conv_mode));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3646 = (
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__skip_cnt)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__is_batch_end));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_0_w 
        = (0x0000001fU & ((0U < (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)))
                           ? (0x0000001fU & (((IData)(8U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)) 
                                             >> 3U))
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base) 
                              >> 3U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_1_w 
        = (0x0000001fU & ((1U < (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)))
                           ? (0x0000001fU & (((IData)(8U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)) 
                                             >> 3U))
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base) 
                              >> 3U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_2_w 
        = (0x0000001fU & ((2U < (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)))
                           ? (0x0000001fU & (((IData)(8U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)) 
                                             >> 3U))
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base) 
                              >> 3U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_3_w 
        = (0x0000001fU & ((3U < (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)))
                           ? (0x0000001fU & (((IData)(8U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)) 
                                             >> 3U))
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base) 
                              >> 3U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_4_w 
        = (0x0000001fU & ((4U < (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)))
                           ? (0x0000001fU & (((IData)(8U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)) 
                                             >> 3U))
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base) 
                              >> 3U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_5_w 
        = (0x0000001fU & ((5U < (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)))
                           ? (0x0000001fU & (((IData)(8U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)) 
                                             >> 3U))
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base) 
                              >> 3U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_6_w 
        = (0x0000001fU & ((6U < (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)))
                           ? (0x0000001fU & (((IData)(8U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base)) 
                                             >> 3U))
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base) 
                              >> 3U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_565 = (0x0000ffffU 
                                                  & ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_last_mask) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_last_mask)) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dp2reg_done)
            ? 0U : ((6U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                           << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_ori)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_addr_w 
        = (0x0000001fU & ((((- (IData)((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_565) 
                                              >> 8U)))) 
                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_0_w)) 
                           | ((- (IData)((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_565) 
                                                >> 9U)))) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_1_w))) 
                          | ((((- (IData)((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_565) 
                                                 >> 0x0000000aU)))) 
                               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_2_w)) 
                              | ((- (IData)((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_565) 
                                                   >> 0x0000000bU)))) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_3_w))) 
                             | (((- (IData)((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_565) 
                                                   >> 0x0000000cU)))) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_4_w)) 
                                | (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_565) 
                                                   >> 0x0000000dU)))) 
                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_5_w)) 
                                   | (((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_565) 
                                                      >> 0x0000000eU)))) 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_6_w)) 
                                      | ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_565) 
                                                        >> 0x0000000fU)))) 
                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_wr_addr_base) 
                                            >> 3U))))))));
}

extern const VlWide<17>/*543:0*/ Vsim__ConstPool__CONST_h70f0910f_0;
extern const VlWide<24>/*767:0*/ Vsim__ConstPool__CONST_hda9269f3_0;

void Vsim___024root___nba_sequent__TOP__293(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__293\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_5[0x00000010U];
    }
    if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_6[0x00000010U];
    } else if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[1U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[2U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[3U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[4U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[5U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[6U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[7U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[8U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[9U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000aU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000bU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000cU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000dU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000eU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000fU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x00000010U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
    }
    if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_7[0x00000010U];
    } else if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[1U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[2U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[3U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[4U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[5U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[6U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[7U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[8U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[9U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000aU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000bU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000cU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000dU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000eU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000fU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x00000010U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
    }
    if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_1[0x00000017U];
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[1U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[2U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[3U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[4U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[5U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[6U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[7U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[8U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[9U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000aU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000bU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000cU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000dU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000eU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000fU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000010U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000011U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000012U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000013U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000014U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000015U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000016U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000017U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    }
    if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_2[0x00000017U];
    } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[1U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[2U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[3U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[4U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[5U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[6U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[7U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[8U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[9U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000aU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000bU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000cU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000dU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000eU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000fU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000010U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000011U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000012U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000013U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000014U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000015U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000016U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000017U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    }
    if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_3[0x00000017U];
    } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[1U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[2U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[3U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[4U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[5U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[6U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[7U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[8U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[9U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000aU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000bU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000cU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000dU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000eU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000fU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000010U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000011U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000012U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000013U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000014U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000015U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000016U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000017U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    }
    if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_4[0x00000010U];
    } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[1U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[2U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[3U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[4U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[5U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[6U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[7U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[8U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[9U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000aU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000bU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000cU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000dU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000eU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000fU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x00000010U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
    }
    if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_data_0[0x00000017U];
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_wr_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[1U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[2U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[3U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[4U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[5U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[6U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[7U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[8U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[9U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000aU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000bU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000cU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000dU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000eU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000fU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000010U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000011U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000012U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000013U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000014U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000015U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000016U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000017U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    }
    if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d2))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x00000010U];
    }
    if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d2))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_0[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000017U];
    }
    if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d2))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_1[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000017U];
    }
    if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d2))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_2[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000017U];
    }
    if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d2))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_3[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000017U];
    }
    if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d2))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x00000010U];
    }
    if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x00000010U];
    } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[1U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[2U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[3U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[4U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[5U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[6U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[7U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[8U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[9U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000aU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000bU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000cU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000dU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000eU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x0000000fU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_4_d2[0x00000010U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
    }
    if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000017U];
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[1U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[2U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[3U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[4U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[5U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[6U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[7U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[8U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[9U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000aU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000bU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000cU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000dU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000eU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x0000000fU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000010U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000011U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000012U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000013U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000014U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000015U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000016U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_0_d2[0x00000017U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    }
    if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000017U];
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[1U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[2U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[3U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[4U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[5U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[6U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[7U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[8U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[9U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000aU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000bU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000cU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000dU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000eU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x0000000fU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000010U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000011U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000012U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000013U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000014U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000015U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000016U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_1_d2[0x00000017U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    }
    if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000017U];
    } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[1U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[2U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[3U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[4U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[5U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[6U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[7U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[8U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[9U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000aU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000bU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000cU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000dU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000eU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x0000000fU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000010U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000011U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000012U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000013U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000014U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000015U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000016U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_2_d2[0x00000017U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    }
    if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000017U];
    } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[1U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[2U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[3U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[4U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[5U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[6U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[7U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[8U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[9U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000aU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000bU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000cU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000dU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000eU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x0000000fU] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000010U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000011U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000012U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000013U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000014U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000015U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000016U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_3_d2[0x00000017U] 
            = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    }
    if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x00000010U];
    } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[1U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[2U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[3U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[4U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[5U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[6U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[7U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[8U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[9U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000aU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000bU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000cU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000dU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000eU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x0000000fU] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_raw_data_5_d2[0x00000010U] 
            = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
    }
}

void Vsim___024root___nba_sequent__TOP__294(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__294\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__layer_end 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__layer_end_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2dl_reuse_rls 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_reuse_release));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2wl_reuse_rls 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_reuse_release));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b0c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b0c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b0c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b0c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b1c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b1c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b1c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b1c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b2c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b2c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b2c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b2c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b3c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b3c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b3c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b3c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b4c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b4c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b4c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b4c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b5c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b5c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b5c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b5c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b6c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b6c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b6c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b6c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b7c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b7c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b7c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b7c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__pending_req 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat2status_done_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                >> 2U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat2status_done)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_global_cdma_clk_ovr_on_sync__DOT__sync_sbus 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_global_cdma_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pending_req_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pending_req));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__wt2status_done_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                >> 2U) & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__wt2status_state))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__csb2csc_req_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__csb2cdma_req_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_valid_d6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_en_d5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_valid_d6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_en_d5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b0c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b0c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b0c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b0c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b1c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b1c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b1c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b1c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b2c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b2c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b2c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b2c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b3c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b3c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b3c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b3c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b4c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b4c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b4c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b4c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b5c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b5c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b5c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b5c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b6c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b6c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b6c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b6c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b7c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b7c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b7c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b7c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c1_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_c1_valid_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d4)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_c0_valid_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d4)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__cdma2buf_wt_wr_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_reg 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_reg_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__csc2csb_resp_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg_wr_en) 
                & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                           >> 0x00000037U))) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg_rd_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__cdma2csb_resp_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg_wr_en) 
                & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                           >> 0x00000037U))) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg_rd_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cmac__DOT__cmac2csb_resp_valid_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cmac__DOT__cmac2csb_resp_valid_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cacc__DOT__cacc2csb_resp_valid_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cacc__DOT__cacc2csb_resp_valid_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__pending_ack 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                >> 2U) & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2status_state)) 
                          | ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__wg2status_state)) 
                             | (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__img2status_state))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b0c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b0c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b0c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b0c1_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b15c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b15c1_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b1c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b1c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b1c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b1c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b1c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b1c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b2c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b2c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b2c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b2c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b2c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b2c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b3c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b3c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b3c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b3c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b3c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b3c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b4c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b4c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b4c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b4c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b4c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b4c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b5c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b5c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b5c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b5c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b5c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b5c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b6c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b6c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b6c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b6c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b6c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b6c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b7c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b7c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b7c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b7c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b7c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b7c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b8c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b8c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b8c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b8c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b9c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b9c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b9c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b9c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b10c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b10c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b10c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b10c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b11c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b11c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b11c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b11c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b12c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b12c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b12c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b12c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b13c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b13c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b13c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b13c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b14c0_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b14c0_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b14c1_w) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b14c1_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_global_cdma_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_global_cdma_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__update_all) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_valid_slices 
                = (0x00000fffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_539));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__status2dma_valid_entries 
                = (0x00000fffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_538));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__real_bank_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__real_bank 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_data_bank)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_reg) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_nan_weight_num 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_nan_weight_num_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_inf_weight_num 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_inf_weight_num_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_nan_data_num 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_nan_data_num_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_inf_data_num 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_inf_data_num_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_wt_rd_stall 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_wt_rd_stall_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_wt_rd_latency 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_wt_rd_latency_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_dat_rd_stall 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_dat_rd_stall_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_dat_rd_latency 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_dat_rd_latency_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_reg) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_nan_weight_num 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_nan_weight_num_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_inf_weight_num 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_inf_weight_num_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_nan_data_num 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_nan_data_num_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_inf_data_num 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_inf_data_num_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_wt_rd_stall 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_wt_rd_stall_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_wt_rd_latency 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_wt_rd_latency_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_dat_rd_stall 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_dat_rd_stall_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_dat_rd_latency 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_dat_rd_latency_w;
        }
        if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_222) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_cbuf_wr_vld_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_onfly 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_onfly_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_cbuf_wr_vld_w) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__status_update_wmb))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_stored 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_stored_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_cbuf_wr_vld_w) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__status_update_wmb))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_stored = 0U;
        }
        if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_219) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_wr_vld_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_onfly 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_onfly_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_wr_vld_w) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__status_update))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_stored 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_stored_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_wr_vld_w) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__status_update))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_stored = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_st 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_st_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_st 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_st_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_st = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_st = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_wt_updt) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__sc_wmb_entries 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_wmb_entries;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__sc_wt_entries 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_wt_entries;
        }
        if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__status_update_wmb) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__sc_wt_updt)) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__clear_all))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_avl 
                = (0x000007ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224));
        } else if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__status_update_wmb) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__sc_wt_updt)) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__clear_all))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_avl = 0U;
        }
        if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__status_update) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__sc_wt_updt)) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__clear_all))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_avl 
                = (0x00003fffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221));
        } else if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__status_update) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__sc_wt_updt)) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__clear_all))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_avl = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_valid_slices = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__status2dma_valid_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__real_bank = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_nan_weight_num = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_inf_weight_num = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_nan_data_num = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_inf_data_num = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_nan_weight_num = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_inf_weight_num = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_nan_data_num = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_inf_data_num = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_wt_rd_stall = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_wt_rd_latency = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_dat_rd_stall = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_dat_rd_latency = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_wt_rd_stall = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_wt_rd_latency = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_dat_rd_stall = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_dat_rd_latency = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_onfly = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_stored = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_onfly = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_stored = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_st = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_st = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__sc_wmb_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__sc_wt_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_avl = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_avl = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__sc_wt_updt 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_wt_updt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pending_req 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rls))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_st 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req)
                    ? 0U : (0x00000fffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_st_inc) 
                                            >= ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__data_bank) 
                                                << 8U))
                                            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_st_inc) 
                                               - ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__data_bank) 
                                                  << 8U))
                                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_st_inc))));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rls))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_st = 0U;
        }
        if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
              >> 2U) & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__cur_state)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__last_img 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__img_en;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__last_skip_data_rls 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__img_en) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_skip_data_rls));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__last_data_bank 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_data_bank;
        } else if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                     >> 2U) & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__cur_state)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__last_img = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__last_skip_data_rls = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__last_data_bank = 0U;
        }
        if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
              >> 2U) & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cur_state)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__last_data_bank 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_data_bank;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__last_wg 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__wg_en;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__last_skip_data_rls 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__wg_en) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_skip_data_rls));
        } else if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                     >> 2U) & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cur_state)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__last_data_bank = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__last_wg = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__last_skip_data_rls = 0U;
        }
        if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
              >> 2U) & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cur_state)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__last_data_bank 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_data_bank;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__last_dc 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc_en;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__last_skip_data_rls 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc_en) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_skip_data_rls));
        } else if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                     >> 2U) & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cur_state)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__last_data_bank = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__last_dc = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__last_skip_data_rls = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_ready) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_vld))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_cnt_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_ready) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_vld))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_cnt = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_st = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__last_img = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__last_skip_data_rls = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__last_data_bank = 0x0fU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__last_data_bank = 0x0fU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__last_wg = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__last_skip_data_rls = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__last_data_bank = 0x0fU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__last_dc = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__last_skip_data_rls = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_cnt = 0x0100U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__accu2sc_credit_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_en_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d4)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_en_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d4) 
                     >> 2U)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d2;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__cdma2buf_wt_wr_en_w) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_hsel 
                = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_wr_vld_w)
                          ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_wr_idx)
                          : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_cbuf_wr_vld_w)
                              ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_cbuf_wr_idx)
                              : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_flush_idx))));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__incr_wt_updt_d3))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_end 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_end_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_end 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req)
                    ? 0U : (0x00000fffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_end_inc) 
                                            >= ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__weight_bank) 
                                                << 8U))
                                            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_end_inc) 
                                               - ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__weight_bank) 
                                                  << 8U))
                                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_end_inc))));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__incr_wt_updt_d3))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_end = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_end = 0U;
        }
        if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__incr_wt_updt_d3) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls)) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_avl 
                = (0x00000fffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4059));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_avl 
                = (0x000001ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4060));
        } else if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__incr_wt_updt_d3) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls)) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_avl = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_avl = 0U;
        }
        if (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_release)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_reuse_release)) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__incr_wt_updt_d3))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__kernels_avl 
                = (0x00007fffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4058));
        } else if (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req) 
                      | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_release)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_reuse_release)) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__incr_wt_updt_d3))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__kernels_avl = 0U;
        }
        if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d9) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rls)) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_avl 
                = (0x00000fffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4219));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_slice_avl 
                = (0x00000fffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4218));
        } else if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d9) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rls)) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_avl = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_slice_avl = 0U;
        }
        if (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_release)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_reuse_release)) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d9))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__slices_avl 
                = (0x00000fffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4057));
        } else if (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req) 
                      | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_release)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_reuse_release)) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d9))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__slices_avl = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d9))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_end 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req)
                    ? 0U : (0x00000fffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_end_inc) 
                                            >= ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__data_bank) 
                                                << 8U))
                                            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_end_inc) 
                                               - ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__data_bank) 
                                                  << 8U))
                                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_end_inc))));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d9))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_end = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d3 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_hsel = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_end = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_avl = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_avl = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__kernels_avl = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_end = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_avl = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_slice_avl = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__slices_avl = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_end = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d9 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d8));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b0c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b0c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b1c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b1c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b2c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b2c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b3c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b3c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b4c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b4c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b5c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b5c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b6c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b6c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b7c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b7c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0_w));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_reg_w) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_reg 
                = ((0x00001000U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_idx))
                    ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_cvt_en))
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d5)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d1))
                    : ((2U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_idx) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_idx)))));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d8) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d9 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d8;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d9 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d8;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_datain_size_ext_0_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_width_ext 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_height_ext 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_dataout_size_0_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_dataout_width 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_dataout_height 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_misc_cfg_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_in_precision 
                = (3U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x0000001eU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_proc_precision 
                = (3U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000022U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_reuse 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x0000002aU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_data_reuse 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000026U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_skip_weight_rls 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000032U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_skip_data_rls 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x0000002eU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_conv_mode 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_weight_size_ext_0_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_height_ext 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_dilation_ext_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_y_dilation_ext 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_conv_stride_ext_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_conv_x_stride_ext 
                = (7U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_zero_padding_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pad_top 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pad_left 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_weight_size_ext_1_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_channel_ext 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_kernel 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
        }
        if (((0x0064U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_cya 
                = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                           >> 0x00000016U));
        }
        if (((0x0040U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_dataout_channel 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0044U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_atomics 
                = (0x001fffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0024U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_entries 
                = (0x00000fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0060U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pra_truncate 
                = (3U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (((0x0048U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_rls_slices 
                = (0x00000fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0018U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_channel_ext 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_bank_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_bank 
                = (0x0000000fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_data_bank 
                = (0x0000000fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x001cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_batches 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0020U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_y_extension 
                = (3U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_format 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_datain_size_ext_0_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_width_ext 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_height_ext 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_dataout_size_0_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_dataout_width 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_dataout_height 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_misc_cfg_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_in_precision 
                = (3U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x0000001eU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_proc_precision 
                = (3U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000022U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_reuse 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x0000002aU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_data_reuse 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000026U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_skip_weight_rls 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000032U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_skip_data_rls 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x0000002eU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_conv_mode 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_weight_size_ext_0_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_height_ext 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_dilation_ext_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_y_dilation_ext 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_conv_stride_ext_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_conv_x_stride_ext 
                = (7U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_zero_padding_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pad_top 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pad_left 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_weight_size_ext_1_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_channel_ext 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_kernel 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
        }
        if (((0x0064U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_cya 
                = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                           >> 0x00000016U));
        }
        if (((0x0040U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_dataout_channel 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0044U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_atomics 
                = (0x001fffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0024U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_entries 
                = (0x00000fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0060U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pra_truncate 
                = (3U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (((0x0048U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_rls_slices 
                = (0x00000fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0018U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_channel_ext 
                = (0x00001fffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_bank_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_bank 
                = (0x0000000fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_data_bank 
                = (0x0000000fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x001cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_batches 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0020U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_y_extension 
                = (3U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_format 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wr_sel_ram_d1 
            = (((QData)((IData)((((((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b0c0_w) 
                                        << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b0c1_w) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b1c0_w) 
                                          << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b1c1_w))) 
                                     << 0x0000000aU) 
                                    | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b2c0_w) 
                                        << 9U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b2c1_w) 
                                                   << 8U) 
                                                  | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b3c0_w) 
                                                     << 7U)))) 
                                   | ((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b3c1_w) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b4c0_w) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b4c1_w) 
                                          << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b5c0_w))) 
                                       << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b5c1_w) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b6c0_w) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b6c1_w))))) 
                                  << 0x0000000eU) | 
                                 (((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b7c0_w) 
                                       << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b7c1_w) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b8c0_w) 
                                         << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b8c1_w))) 
                                    << 0x0000000aU) 
                                   | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b9c0_w) 
                                       << 9U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b9c1_w) 
                                                  << 8U) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b10c0_w) 
                                                    << 7U)))) 
                                  | ((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b10c1_w) 
                                         << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b11c0_w) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b11c1_w) 
                                           << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b12c0_w))) 
                                      << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b12c1_w) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b13c0_w) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b13c1_w)))))))) 
                << 0x00000020U) | (QData)((IData)((
                                                   ((((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b14c0_w) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b14c1_w) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b1c0_w) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b1c1_w))) 
                                                       << 0x0000000cU) 
                                                      | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b2c0_w) 
                                                            << 3U) 
                                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b2c1_w) 
                                                              << 2U)) 
                                                          | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b3c0_w) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b3c1_w))) 
                                                         << 8U)) 
                                                     | ((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b4c0_w) 
                                                            << 3U) 
                                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b4c1_w) 
                                                              << 2U)) 
                                                          | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b5c0_w) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b5c1_w))) 
                                                         << 4U) 
                                                        | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b6c0_w) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b6c1_w) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b7c0_w) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b7c1_w))))) 
                                                    << 0x00000010U) 
                                                   | (((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b8c0_w) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b8c1_w) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b9c0_w) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b9c1_w))) 
                                                        << 0x0000000cU) 
                                                       | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b10c0_w) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b10c1_w) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b11c0_w) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b11c1_w))) 
                                                          << 8U)) 
                                                      | ((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b12c0_w) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b12c1_w) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b13c0_w) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b13c1_w))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b14c0_w) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b14c1_w) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b15c0_w) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b15c1_w)))))))));
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg_rd_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__csc2csb_resp_pd 
                = (QData)((IData)((((- (IData)((8U 
                                                > (0x00000ffcU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))))) 
                                    & ((4U == (0x00000ffcU 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))
                                        ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer) 
                                            << 0x00000010U) 
                                           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_producer))
                                        : ((0U == (0x00000ffcU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                            ? ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_op_en)
                                                  ? 
                                                 ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer)
                                                   ? 1U
                                                   : 2U)
                                                  : 0U) 
                                                << 0x00000010U) 
                                               | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_op_en)
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer)
                                                    ? 2U
                                                    : 1U)
                                                   : 0U))
                                            : 0U))) 
                                   | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__select_d0))) 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data) 
                                      | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__select_d1))) 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data)))));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg_wr_en) 
                    & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                               >> 0x00000037U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__csc2csb_resp_pd = 0x0000000200000000ULL;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_reg = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d9 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d9 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_width_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_dataout_width = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_in_precision = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_height_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_y_dilation_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_height_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_proc_precision = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_conv_x_stride_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pad_top = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_channel_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pad_left = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_reuse = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_data_reuse = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_skip_weight_rls = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_skip_data_rls = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_cya = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_dataout_channel = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_atomics = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pra_truncate = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_rls_slices = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_channel_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_bank = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_batches = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_dataout_height = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_data_bank = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_y_extension = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_kernel = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_format = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_conv_mode = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_width_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_dataout_width = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_in_precision = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_height_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_y_dilation_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_height_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_proc_precision = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_conv_x_stride_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pad_top = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_channel_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pad_left = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_reuse = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_data_reuse = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_skip_weight_rls = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_skip_data_rls = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_cya = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_dataout_channel = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_atomics = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pra_truncate = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_rls_slices = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_channel_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_bank = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_batches = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_dataout_height = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_data_bank = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_y_extension = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_kernel = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_format = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_conv_mode = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wr_sel_ram_d1 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__csc2csb_resp_pd = 0ULL;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_op_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_op_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_op_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_op_en_w));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg_rd_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__cdma2csb_resp_pd 
                = (QData)((IData)((((- (IData)((0x0010U 
                                                > (0x00000ffcU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))))) 
                                    & ((8U == (0x00000ffcU 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))
                                        ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__reg2dp_arb_wmb) 
                                            << 0x00000010U) 
                                           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__reg2dp_arb_weight))
                                        : ((0x000cU 
                                            == (0x00000ffcU 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))
                                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_flush_done)
                                            : ((4U 
                                                == 
                                                (0x00000ffcU 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))
                                                ? (
                                                   ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer) 
                                                    << 0x00000010U) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_producer))
                                                : (
                                                   (0U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en)
                                                       ? 
                                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                        ? 1U
                                                        : 2U)
                                                       : 0U) 
                                                     << 0x00000010U) 
                                                    | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en)
                                                        ? 
                                                       ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                         ? 2U
                                                         : 1U)
                                                        : 0U))
                                                    : 0U))))) 
                                   | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__select_d0))) 
                                       & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.reg_rd_data) 
                                      | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__select_d1))) 
                                         & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.reg_rd_data)))));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg_wr_en) 
                    & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                               >> 0x00000037U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__cdma2csb_resp_pd = 0x0000000200000000ULL;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__cdma2csb_resp_pd = 0ULL;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_flush_done 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_flush_idx) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_idx)) 
                     >> 0x0000000cU)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__cdma2buf_wt_wr_en_w) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr 
                = (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_wr_vld_w)
                                   ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_wr_idx) 
                                      >> 1U) : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_cbuf_wr_vld_w)
                                                 ? 
                                                ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_cbuf_wr_idx) 
                                                 >> 1U)
                                                 : 
                                                (0x00000800U 
                                                 | (0x000007ffU 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_flush_idx) 
                                                       >> 1U))))));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_reg_w) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg 
                = (0x00000fffU & ((0x00001000U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_idx))
                                   ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_cvt_en))
                                       ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d5)
                                       : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d1))
                                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_idx) 
                                      >> 1U)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__wt_done_intr 
            = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_533) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3654)) 
                << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3655) 
                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3654)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_done_intr 
            = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_533) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3653)) 
                << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3655) 
                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3653)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_cacc2glb__DOT__cacc2glb_done_intr_pd_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_cacc2glb__DOT__cacc2glb_done_intr_pd_d1;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__entries_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_free_entries 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__status2dma_free_entries_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__update_all) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_wr_idx 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__status2dma_wr_idx_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_weight_size_ext_0_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_width_ext 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_weight_size_ext_0_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_width_ext 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__slcg_op_en_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__slcg_op_en_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__slcg_img_gate_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__slcg_img_gate_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__slcg_op_en_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__slcg_op_en_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__slcg_wg_gate_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__slcg_wg_gate_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__slcg_dc_gate_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__slcg_dc_gate_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d1;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d7) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d8 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d7;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d8 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d7;
        }
        if (((4U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                    << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__s_reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_producer 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_single_reg__DOT__nvdla_cdma_s_arbiter_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__reg2dp_arb_wmb 
                = (0x0000000fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000026U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__reg2dp_arb_weight 
                = (0x0000000fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((4U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                    << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__s_reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_producer 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_cacc2glb__DOT__cacc2glb_done_intr_pd_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__cacc_done_intr;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__slcg_op_en_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__slcg_op_en_d1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__slcg_img_gate_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__slcg_img_gate_d1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__slcg_op_en_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__slcg_op_en_d1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__slcg_wg_gate_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__slcg_wg_gate_d1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__slcg_dc_gate_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__slcg_dc_gate_d1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d1 
            = (((QData)((IData)((((((((0x0000000cU 
                                       & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b0c0_w))) 
                                          << 2U)) | 
                                      (3U & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b1c0_w))))) 
                                     << 0x0000000bU) 
                                    | (((0x0000000cU 
                                         & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b2c0_w))) 
                                            << 2U)) 
                                        | (3U & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b3c0_w))))) 
                                       << 7U)) | ((
                                                   ((0x0000000cU 
                                                     & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b4c0_w))) 
                                                        << 2U)) 
                                                    | (3U 
                                                       & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b5c0_w))))) 
                                                   << 3U) 
                                                  | ((6U 
                                                      & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b6c0_w))) 
                                                         << 1U)) 
                                                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b7c0_w)))) 
                                  << 0x0000000fU) | 
                                 (((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b7c0_w) 
                                       << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b8c0_w) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b8c0_w) 
                                         << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b9c0_w))) 
                                    << 0x0000000bU) 
                                   | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b9c0_w) 
                                         << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b10c0_w) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b10c0_w) 
                                           << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b11c0_w))) 
                                      << 7U)) | (((
                                                   (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b11c0_w) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b12c0_w) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b12c0_w) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b13c0_w))) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b13c0_w) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b14c0_w) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_sel_ram_b14c0_w)))))))) 
                << 0x00000020U) | (QData)((IData)((
                                                   ((((((0x0000000cU 
                                                         & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b1c0_w))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b2c0_w))))) 
                                                       << 0x0000000cU) 
                                                      | (((0x0000000cU 
                                                           & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b3c0_w))) 
                                                              << 2U)) 
                                                          | (3U 
                                                             & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b4c0_w))))) 
                                                         << 8U)) 
                                                     | ((((0x0000000cU 
                                                           & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b5c0_w))) 
                                                              << 2U)) 
                                                          | (3U 
                                                             & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b6c0_w))))) 
                                                         << 4U) 
                                                        | ((0x0000000cU 
                                                            & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b7c0_w))) 
                                                               << 2U)) 
                                                           | (3U 
                                                              & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b8c0_w))))))) 
                                                    << 0x00000010U) 
                                                   | (((((0x0000000cU 
                                                          & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b9c0_w))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b10c0_w))))) 
                                                        << 0x0000000cU) 
                                                       | (((0x0000000cU 
                                                            & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b11c0_w))) 
                                                               << 2U)) 
                                                           | (3U 
                                                              & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b12c0_w))))) 
                                                          << 8U)) 
                                                      | ((((0x0000000cU 
                                                            & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b13c0_w))) 
                                                               << 2U)) 
                                                           | (3U 
                                                              & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b14c0_w))))) 
                                                          << 4U) 
                                                         | ((0x0000000cU 
                                                             & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_sel_ram_b15c0_w))) 
                                                                << 2U)) 
                                                            | (3U 
                                                               & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2buf_wmb_rd_en)))))))))));
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d6) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d7 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d6;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d7 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d6;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_flush_vld_w) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_flush_idx 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_flush_idx_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_vld_w) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_idx 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_idx_w;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__slcg_op_en_d1 
            = (0x0000000fU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_op_en_ori))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__slcg_img_gate_d1 
            = (3U & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__img_en) 
                                         & ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__cur_state)) 
                                            | ((3U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__cur_state)) 
                                               | (1U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__cur_state))))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__slcg_op_en_d1 
            = (0x000000ffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_ori))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__slcg_wg_gate_d1 
            = (3U & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__wg_en) 
                                         & ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cur_state)) 
                                            | ((3U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cur_state)) 
                                               | (1U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cur_state))))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__slcg_dc_gate_d1 
            = (3U & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc_en) 
                                         & ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cur_state)) 
                                            | ((3U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cur_state)) 
                                               | (1U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cur_state))))))))));
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d5) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d6 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d5;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d6 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d5;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d4) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d4;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d4;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d3;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d3;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d2;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d1;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d0) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d0;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d0;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__wt_done_intr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_done_intr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_cacc2glb__DOT__cacc2glb_done_intr_pd_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_free_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_wr_idx = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_width_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_width_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__slcg_op_en_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__slcg_img_gate_d3 = 3U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__slcg_op_en_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__slcg_wg_gate_d3 = 3U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__slcg_dc_gate_d3 = 3U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d2 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d8 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d8 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_producer = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__reg2dp_arb_wmb = 3U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__reg2dp_arb_weight = 0x0fU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_producer = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_cacc2glb__DOT__cacc2glb_done_intr_pd_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__slcg_op_en_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__slcg_img_gate_d2 = 3U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__slcg_op_en_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__slcg_wg_gate_d2 = 3U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__slcg_dc_gate_d2 = 3U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_sel_ram_d1 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d7 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d7 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_flush_idx = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_idx = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__slcg_op_en_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__slcg_img_gate_d1 = 3U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__slcg_op_en_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__slcg_wg_gate_d1 = 3U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__slcg_dc_gate_d1 = 3U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d1 = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_hsel)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_en) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_hsel));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_reg) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_reg));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_reg) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_reg) 
              >> 1U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cmac__DOT__cmac2csb_resp_valid_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cmac__DOT__cmac2csb_resp_valid_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cacc__DOT__cacc2csb_resp_valid_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cacc__DOT__cacc2csb_resp_valid_d1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_534 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__pending_ack) 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__pending_req));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b1c0_w 
        = (IData)(((0x0100U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b2c0_w 
        = (IData)(((0x0200U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b3c0_w 
        = (IData)(((0x0300U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b4c0_w 
        = (IData)(((0x0400U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b5c0_w 
        = (IData)(((0x0500U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b6c0_w 
        = (IData)(((0x0600U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b7c0_w 
        = (IData)(((0x0700U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b8c0_w 
        = (IData)(((0x0800U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b9c0_w 
        = (IData)(((0x0900U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b10c0_w 
        = (IData)(((0x0a00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b11c0_w 
        = (IData)(((0x0b00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b12c0_w 
        = (IData)(((0x0c00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b13c0_w 
        = (IData)(((0x0d00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b14c0_w 
        = (IData)(((0x0e00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b15c0_w 
        = (IData)(((0x0f00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b1c1_w 
        = (IData)(((0x0100U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b2c1_w 
        = (IData)(((0x0200U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b3c1_w 
        = (IData)(((0x0300U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b4c1_w 
        = (IData)(((0x0400U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b5c1_w 
        = (IData)(((0x0500U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b6c1_w 
        = (IData)(((0x0600U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b7c1_w 
        = (IData)(((0x0700U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b8c1_w 
        = (IData)(((0x0800U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b9c1_w 
        = (IData)(((0x0900U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b10c1_w 
        = (IData)(((0x0a00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b11c1_w 
        = (IData)(((0x0b00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b12c1_w 
        = (IData)(((0x0c00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b13c1_w 
        = (IData)(((0x0d00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b14c1_w 
        = (IData)(((0x0e00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_sel_ram_b15c1_w 
        = (IData)(((0x0f00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__cdma2buf_wt_wr_addr))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b0c0_w 
        = (IData)(((0U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b1c0_w 
        = (IData)(((0x0100U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b2c0_w 
        = (IData)(((0x0200U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b3c0_w 
        = (IData)(((0x0300U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b4c0_w 
        = (IData)(((0x0400U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b5c0_w 
        = (IData)(((0x0500U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b6c0_w 
        = (IData)(((0x0600U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b7c0_w 
        = (IData)(((0x0700U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b8c0_w 
        = (IData)(((0x0800U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b9c0_w 
        = (IData)(((0x0900U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b10c0_w 
        = (IData)(((0x0a00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b11c0_w 
        = (IData)(((0x0b00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b12c0_w 
        = (IData)(((0x0c00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b13c0_w 
        = (IData)(((0x0d00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b14c0_w 
        = (IData)(((0x0e00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b0c1_w 
        = (IData)(((0U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b1c1_w 
        = (IData)(((0x0100U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b2c1_w 
        = (IData)(((0x0200U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b3c1_w 
        = (IData)(((0x0300U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b4c1_w 
        = (IData)(((0x0400U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b5c1_w 
        = (IData)(((0x0500U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b6c1_w 
        = (IData)(((0x0600U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b7c1_w 
        = (IData)(((0x0700U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b8c1_w 
        = (IData)(((0x0800U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b9c1_w 
        = (IData)(((0x0900U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b10c1_w 
        = (IData)(((0x0a00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b11c1_w 
        = (IData)(((0x0b00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b12c1_w 
        = (IData)(((0x0c00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b13c1_w 
        = (IData)(((0x0d00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_sel_ram_b14c1_w 
        = (IData)(((0x0e00U == (0x0f00U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_reg))) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_hi_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_global_cdma_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0 
        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d9) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_avl_add 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_entries_d9;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_slice_avl_add 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_slices_d9;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_avl_add = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_slice_avl_add = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d8 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d7));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cmac__DOT__cmac2csb_resp_valid_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_mb.cmac_a2csb_resp_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cacc__DOT__cacc2csb_resp_valid_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__cacc2csb_resp_src_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_end_inc 
        = (0x00001fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_end) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_avl_add)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d7 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d6));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_flush_idx_w 
        = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_flush_idx)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_flush_vld_w 
        = (1U & (~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_cbuf_flush_idx) 
                    >> 0x0000000cU)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_vld_w 
        = (1U & (~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_idx) 
                    >> 0x0000000cU)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_idx_w 
        = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_cbuf_flush_idx)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat_updt_d0));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_h4af62635_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_heec17e39_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_h208f55eb_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_hd0b80454_0;

void Vsim___024root___nba_sequent__TOP__295(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__295\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_local_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_local_valid_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_dummy 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_dummy_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_dat_updt 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rls));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_dummy 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_dummy_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_dummy 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_dummy_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_sg_running_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc_state)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_dummy 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_dummy_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_dummy 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_dummy_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_dummy 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_dummy_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_dummy 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_dummy_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_dummy 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_dummy_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_valid_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) 
               & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_dummy)) 
                  & (~ (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                          >> 5U) & ((0U != (0x00000fffU 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cur) 
                                               >> 2U))) 
                                    & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cur) 
                                        >> 1U) & (0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__stripe_cnt) 
                                                      >> 1U)))))) 
                        | ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                    >> 6U)) & ((0x00000fffU 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_w) 
                                                   >> 2U)) 
                                               > (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries_cmp))))))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_ori_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_ori 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_cnt_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_ori 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_cnt_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_w_ori 
                = (0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4230);
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd_ori_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd_ori 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_w_ch_ori 
                = (0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4230);
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rls) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_dat_slices 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc2cdma_dat_slices_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_dat_entries 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc2cdma_dat_entries_w;
        }
        if ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc_state))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__last_entries 
                = (0x00000fffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4217);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__last_slices 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__slice_left;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4224))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_cnt_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc2buf_dat_rd_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2buf_dat_rd_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_addr_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc2buf_dat_rd_en_w))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2buf_dat_rd_addr = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__c_bias_d1_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__c_bias_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__c_bias;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_p0_vld_w) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[1U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[0U]))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask[1U] 
                = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[0U]))) 
                           >> 0x00000020U));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_p1_vld_w) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask[2U] 
                = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[3U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[2U]))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask[3U] 
                = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[3U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[2U]))) 
                           >> 0x00000020U));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1)) 
                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4224)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((~ (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                            >> 1U))) & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4231))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_ori 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st_d1) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) 
                & ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                            >> 2U)) & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_sub_h_end) 
                                       | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_w_end)))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_w_cnt 
                = (0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4230);
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT____VdfgRegularize_h19e0feae_0_3) 
                & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_d1))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_0_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_addr_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT____VdfgRegularize_h19e0feae_0_3) 
                & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_d1))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_1_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_addr_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT____VdfgRegularize_h19e0feae_0_3) 
                & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_d1))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_2_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_addr_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT____VdfgRegularize_h19e0feae_0_3) 
                & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_d1))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_3_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_addr_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_reg_en__BRA__1__KET__) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_3_d1 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
                    ? 0U : (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cnt) 
                                           * (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_3_stride))));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rls_entries 
                = (0x00000fffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4217);
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_d1 
                = (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_w) 
                                  >> 2U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_force_clr_d1 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1) 
                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_sub_h_end) 
                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_force_fetch) 
                         | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_force_fetch_d1))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_1_d1 
                = (0x00000fffU & ((0x0000001fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                                  >> 5U)) 
                                  * (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_1_stride)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_1_stride 
                = (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries) 
                                  * (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_offset_slice)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_2_d1 
                = (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__batch_cnt) 
                                  * (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_2_stride)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_2_stride 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_0_d1 
                = (0x00000fffU & ((0x00000fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_cnt)) 
                                  * (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_0_stride)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_0_stride 
                = (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries) 
                                  * (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__data_batch)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_3_stride 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | (((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                          >> 0x00000015U)) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d1)) 
                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4244)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l0_ori 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l0_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                         >> 0x00000011U)) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d1)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l0 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l0_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                         >> 0x00000012U)) & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d2) 
                                             & (1U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g5)))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l1_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                         >> 0x00000013U)) & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d3) 
                                             & (4U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g5)))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l2_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                         >> 0x00000014U)) & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d4) 
                                             & (4U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g5)))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l3_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_out_flag 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pra_en_d1 
            = (0x0000000fU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pra_en))));
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d3;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d5) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d6 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d5;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d6 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d5;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                         >> 0x00000016U)) & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d2) 
                                              & (0x01000010U 
                                                 == 
                                                 (0x01000010U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d2))) 
                                             & (1U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g6)))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l1_ori 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l1_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                         >> 0x00000017U)) & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d3) 
                                              & (0x01000010U 
                                                 == 
                                                 (0x01000010U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d3))) 
                                             & (4U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g6)))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l2_ori 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l2_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                         >> 0x00000018U)) & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d4) 
                                              & (0x01000010U 
                                                 == 
                                                 (0x01000010U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d4))) 
                                             & (4U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g6)))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l3_ori 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l3_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4221))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__stripe_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__stripe_cnt_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) 
                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4410) 
                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_w_end))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_cnt_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_w) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag 
                = (0x000001ffU & ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1)
                                   ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l5)
                                   : (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                      >> 0x00000012U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d2;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d4) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d4;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d4;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d3;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l4) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l4;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d1;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d3;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d3;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d2;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l3;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d1 
                = ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2dl_pd
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d5);
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d2;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d1;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l2;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d4) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d4;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d1;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d6) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d1 
                = ((0x07fe0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d6 
                                   >> 2U)) | (0x0001ffffU 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d6));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l1;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d3;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_exec_valid_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_dummy_d2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_d2;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d5) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d6 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d5;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l0) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l1 
                = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                  >> 0x00000012U));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d2;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d4) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d4;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d1;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d3;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2dl_pvld) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2dl_pd;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d2;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d1;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_valid_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d1 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_flag_d2) 
                     << 0x00000014U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_rls_d2) 
                                         << 0x00000013U) 
                                        | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_w_st_d2) 
                                            << 0x00000012U) 
                                           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_dummy_d2) 
                                               << 0x00000011U) 
                                              | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_cur_sub_h_d2) 
                                                 << 0x0000000fU))))) 
                   | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_bytes_d2) 
                       << 7U) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_ch_odd_d2) 
                                   << 6U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_ch_end_d2) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_c_d2) 
                                                << 4U))) 
                                 | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_d2) 
                                     << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_w_d2)))));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_exec_valid_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_ch_odd_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_ch_odd_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_ch_end_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_ch_end_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_bytes_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_bytes_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_dummy_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_dummy_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_cur_sub_h_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_cur_sub_h_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_rls_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_rls_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_w_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_w_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_flag_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_flag_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_w_st_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_w_st_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_c_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_c_d1;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_force_fetch_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_force_fetch;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_ch_odd_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_ch_end_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_last_channel;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_bytes_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_bytes;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_dummy_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_dummy;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_cur_sub_h_d1 
                = (3U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                         >> 0x00000018U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_rls_d1 
                = (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                     >> 0x0000001eU) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_equal)) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_valid));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_w_d1 
                = (3U & ((0x00000040U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1)
                          ? (1U & (~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cur) 
                                      >> 1U))) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cur)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_flag_d1 
                = ((((2U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                            >> 0x0000001cU)) | (1U 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                                   >> 0x0000001bU))) 
                    << 7U) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_equal) 
                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_valid)) 
                               << 6U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_stripe_st) 
                                          << 5U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__batch_cnt))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cnt;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_c_d1 
                = (1U & ((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                        >> 7U))) ? 
                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                          >> 0x0000001aU) : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                                              >> 2U) 
                                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_c_cnt))));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__c_bias_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__c_bias 
                = (0x00000fffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4232));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_c_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_c_cnt_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) 
             & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cnt)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_w_st_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_stripe_st;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__batch_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__batch_cnt_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__batch_cnt = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                  >> 2U) | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_y_extension))) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cnt_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_width_cmp 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_datain_width_ext;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries_batch 
                = (0x00000fffU & ((0x00000fffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_entries))) 
                                  * (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__data_batch_w)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_height_cmp 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_datain_height_ext;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cmp_g1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cmp_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__conv_x_stride 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__conv_x_stride_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_stride_odd 
                = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_stride_w));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_ch_stride 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_stride_w) 
                   << 6U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__y_dilate 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__y_dilate_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_init_offset 
                = (0x0000007fU & ((IData)(1U) + (0x0000003fU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_weight_channel_ext))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g11 
                = (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4209) 
                         >> 3U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_fp16_d1 
                = (3U & (- (IData)((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_proc_precision)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g10 
                = (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4209) 
                         >> 3U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g9 
                = (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4209) 
                         >> 3U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g2 
                = (3U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4209) 
                         >> 4U));
            if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_y_extension))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_add 
                    = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_stride_w) 
                                      << 2U));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_init 
                    = (0x0000003fU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_stride_w) 
                                       << 1U) + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4213)));
            } else if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_y_extension))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_add 
                    = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_stride_w) 
                                      << 1U));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_init 
                    = (0x0000003fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4213));
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_add 
                    = (0x0000007fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_stride_w));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_init 
                    = (0x0000003fU & ((0x003fU <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_weight_channel_ext))
                                       ? 0x3fU : (0x0000003fU 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_weight_channel_ext))));
            }
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rls_slices 
                = (0x00000fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_rls_slices)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_byte_stride 
                = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_proc_precision))
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_stride_w)
                    : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_stride_w) 
                       << 1U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g7 
                = (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4209) 
                         >> 3U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g8 
                = (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4209) 
                         >> 3U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_width_cmp 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_dataout_width;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g0 
                = (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4209) 
                         >> 3U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g3 
                = (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4209) 
                         >> 3U));
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_conv_mode) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_width 
                    = (0x00003fffU & ((IData)(1U) + 
                                      (0x000007ffU 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_datain_width_ext) 
                                          >> 2U))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_channel_cmp 
                    = (0x000007ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_weight_channel_ext) 
                                      >> 2U));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__conv_y_stride = 1U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries 
                    = (0x00000fffU & ((IData)(4U) + 
                                      (0x00000fffU 
                                       & VL_SHIFTL_III(12,12,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_entries), 2U))));
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_width 
                    = (0x00003fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_datain_width_ext)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_channel_cmp 
                    = (0x000007ffU & (0x0000007fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_weight_channel_ext) 
                                       >> 6U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__conv_y_stride 
                    = (0x0000000fU & ((IData)(1U) + 
                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer)
                                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_conv_y_stride_ext)
                                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_conv_y_stride_ext))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries 
                    = (0x00000fffU & (0x00000fffU & 
                                      ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_entries))));
            }
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cmp_g0 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cmp_w;
            if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4045) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__batch_cmp = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__x_dilate = 1U;
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__batch_cmp 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_batches;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__x_dilate 
                    = (0x0000003fU & ((IData)(1U) + 
                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer)
                                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_x_dilation_ext)
                                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_x_dilation_ext))));
            }
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g1 
                = (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4209) 
                         >> 3U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g4 
                = (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4209) 
                         >> 3U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pra_truncate 
                = (0x000000ffU & ((((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_pra_truncate))
                                     ? 2U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_pra_truncate)) 
                                   << 6U) | ((((3U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_pra_truncate))
                                                ? 2U
                                                : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_pra_truncate)) 
                                              << 4U) 
                                             | ((((3U 
                                                   == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_pra_truncate))
                                                   ? 2U
                                                   : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_pra_truncate)) 
                                                 << 2U) 
                                                | ((3U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_pra_truncate))
                                                    ? 2U
                                                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_pra_truncate))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pad_value)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pad_value));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pra_precision 
                = (0x000000ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_proc_precision) 
                                   << 6U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_proc_precision) 
                                              << 4U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_proc_precision) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_proc_precision)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__data_bank 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_data_bank)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__slice_left 
                = (0x00000fffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4047));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries_cmp 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_entries;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g5 
                = (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4209) 
                         >> 3U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g6 
                = (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4209) 
                         >> 3U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_offset_slice 
                = (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__data_batch_w) 
                                  * (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__y_dilate_w)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__data_batch 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__data_batch_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                = (0x00000003ffffffffULL & (- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                = (0x007fffffU & (- (IData)((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_proc_precision)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                = (0x003fffffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_conv_mode))));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_ori = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd_ori = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_ori = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_w_ori = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_w_ch_ori = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_dat_slices = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_dat_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__last_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_width_cmp = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries_batch = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_height_cmp = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cmp_g1 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__conv_x_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_stride_odd = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_ch_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__y_dilate = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_init_offset = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g11 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_fp16_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g10 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g9 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g2 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_add = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rls_slices = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_init = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_byte_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g7 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g8 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_width_cmp = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g0 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g3 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_width = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_channel_cmp = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cmp_g0 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__batch_cmp = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2buf_dat_rd_addr = 0x0fffU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g1 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g4 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pra_truncate = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__c_bias_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rls_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__last_slices = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_ori = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_force_clr_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_w_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_0_addr = 0x0fffU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_1_addr = 0x0fffU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_2_addr = 0x0fffU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_3_addr = 0x0fffU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_1_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_2_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_0_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_3_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l0_ori = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_out_flag = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pra_en_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__x_dilate = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__conv_y_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l1_ori = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l2_ori = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l3_ori = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pra_precision = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__data_bank = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__c_bias = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__slice_left = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_force_fetch_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_1_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_2_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries_cmp = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__stripe_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_0_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_3_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g5 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g6 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_offset_slice = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__data_batch = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_flag_l1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pd_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_ch_odd_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_ch_end_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_bytes_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_dummy_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_cur_sub_h_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_rls_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_w_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_flag_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_w_st_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_c_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_ch_odd_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_ch_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_bytes_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_dummy_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_cur_sub_h_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_rls_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_w_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_flag_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_h_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_w_st_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_sub_c_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__batch_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_c_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__slcg_wg_en_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__slcg_wg_en_d2));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4222 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_cnt) 
                                                   >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_width_cmp));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT____VdfgRegularize_h19e0feae_0_4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_dummy_d6) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d6));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__slcg_wg_en_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__slcg_wg_en_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_dummy_l0_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT____VdfgRegularize_h19e0feae_0_4) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d6)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_dummy_l1_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT____VdfgRegularize_h19e0feae_0_4) 
           & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d6)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_dummy_l2_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT____VdfgRegularize_h19e0feae_0_4) 
           & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d6)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_dummy_l3_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT____VdfgRegularize_h19e0feae_0_4) 
           & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d6)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__c_bias_d1_reg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__c_bias) 
           != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__c_bias_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4247 = (IData)(
                                                          (0x01000010U 
                                                           == 
                                                           (0x01000010U 
                                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d4)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__slcg_wg_en_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_conv_mode) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                  >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4217 = (0x00ffffffU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__entries_batch) 
                                                      * 
                                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st_d1)
                                                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rls_slices)
                                                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__slice_left))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_sft_lo_d3_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d3) 
           & (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g9)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4246 = (IData)(
                                                          (0x01000010U 
                                                           == 
                                                           (0x01000010U 
                                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d3)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_sft_lo_d2_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d2) 
           & (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g9)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4245 = (IData)(
                                                          (0x01000010U 
                                                           == 
                                                           (0x01000010U 
                                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d6));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_pvld_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_exec_valid_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_sft_lo_d1_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d1) 
           & (1U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g9)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4244 = (IData)(
                                                          (0x01000010U 
                                                           == 
                                                           (0x01000010U 
                                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_exec_valid_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_exec_valid_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l0 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g3) 
             >> 2U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d4)) 
           | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g3) 
                >> 1U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d2)) 
              | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g3) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pvld_d1))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g4) 
                              >> 2U)))) & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d4) 
           | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g4) 
                                 >> 1U)))) & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d2) 
              | ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g4)))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd_d1)));
    __Vtemp_1[0U] = 0xffffffffU;
    __Vtemp_1[1U] = 0xffffffffU;
    __Vtemp_1[2U] = 0xffffffffU;
    __Vtemp_1[3U] = 0xffffffffU;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_2, __Vtemp_1, 
                  (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                  >> 7U)));
    __Vtemp_7[0U] = 0xffffffffU;
    __Vtemp_7[1U] = 0xffffffffU;
    __Vtemp_7[2U] = 0xffffffffU;
    __Vtemp_7[3U] = 0xffffffffU;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_8, __Vtemp_7, 
                  (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                  >> 7U)));
    __Vtemp_12[0U] = 0xffffffffU;
    __Vtemp_12[1U] = 0xffffffffU;
    __Vtemp_12[2U] = 0xffffffffU;
    __Vtemp_12[3U] = 0xffffffffU;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_13, __Vtemp_12, 
                  (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                  >> 7U)));
    if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g10))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[0U] 
            = (~ __Vtemp_2[0U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[1U] 
            = ((~ __Vtemp_2[0U]) & (IData)(((1U <= 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                               >> 0x0000000fU)))
                                             ? 0xffffffffffffffffULL
                                             : 0ULL)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[2U] 
            = ((~ __Vtemp_2[0U]) & (IData)((((QData)((IData)(
                                                             ((3U 
                                                               == 
                                                               (3U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                                   >> 0x0000000fU)))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              ((2U 
                                                                <= 
                                                                (3U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                                    >> 0x0000000fU)))
                                                                ? 0xffffffffU
                                                                : 0U))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[3U] 
            = ((~ __Vtemp_2[0U]) & (IData)(((((QData)((IData)(
                                                              ((3U 
                                                                == 
                                                                (3U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                                    >> 0x0000000fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((2U 
                                                                 <= 
                                                                 (3U 
                                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                                     >> 0x0000000fU)))
                                                                 ? 0xffffffffU
                                                                 : 0U)))) 
                                            >> 0x00000020U)));
    } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g10))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[0U] 
            = (IData)((~ (((QData)((IData)(__Vtemp_8[1U])) 
                           << 0x00000020U) | (QData)((IData)(
                                                             __Vtemp_8[0U])))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[1U] 
            = (IData)(((~ (((QData)((IData)(__Vtemp_8[1U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              __Vtemp_8[0U])))) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[2U] 
            = ((IData)((~ (((QData)((IData)(__Vtemp_8[1U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              __Vtemp_8[0U]))))) 
               & (IData)(((1U <= (3U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                        >> 0x0000000fU)))
                           ? 0xffffffffffffffffULL : 0ULL)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[3U] 
            = ((IData)(((~ (((QData)((IData)(__Vtemp_8[1U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               __Vtemp_8[0U])))) 
                        >> 0x00000020U)) & (IData)(
                                                   (((1U 
                                                      <= 
                                                      (3U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 0x0000000fU)))
                                                      ? 0xffffffffffffffffULL
                                                      : 0ULL) 
                                                    >> 0x00000020U)));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[0U] 
            = (~ __Vtemp_13[0U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[1U] 
            = (~ __Vtemp_13[1U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[2U] 
            = (~ __Vtemp_13[2U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[3U] 
            = (~ __Vtemp_13[3U]);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_rls 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l0) 
           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
              >> 0x00000011U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257 = (
                                                   (0x40U 
                                                    >= 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                        >> 7U))) 
                                                   & (0x20U 
                                                      < 
                                                      (0x000000ffU 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259 = (
                                                   (0x20U 
                                                    >= 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                        >> 7U))) 
                                                   & (0U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261 = (
                                                   (0x20U 
                                                    >= 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                        >> 7U))) 
                                                   & (1U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262 = (
                                                   (0x20U 
                                                    >= 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                        >> 7U))) 
                                                   & (2U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264 = (
                                                   (0x20U 
                                                    >= 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                        >> 7U))) 
                                                   & (3U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)));
    __Vtableidx54 = ((0x0000000cU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                     << 2U)) | (3U 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                   >> 2U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt 
        = Vsim__ConstPool__TABLE_h4af62635_0[__Vtableidx54];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb 
        = Vsim__ConstPool__TABLE_heec17e39_0[__Vtableidx54];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt 
        = Vsim__ConstPool__TABLE_h208f55eb_0[__Vtableidx54];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb 
        = Vsim__ConstPool__TABLE_hd0b80454_0[__Vtableidx54];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d3));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_rls) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc2cdma_dat_slices_w 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rls_slices;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc2cdma_dat_entries_w 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rls_entries;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc2cdma_dat_slices_w 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__last_slices;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc2cdma_dat_entries_w 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__last_entries;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_in_pvld_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2dl_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pvld_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_valid_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_valid_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_valid_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_valid_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_exec_valid_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_stripe_st 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g0) 
             >> 2U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d1)) 
           | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g0) 
                >> 1U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d3)) 
              | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g0) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pvld_d4))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g1) 
                              >> 2U)))) & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d1) 
           | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g1) 
                                 >> 1U)))) & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d3) 
              | ((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g1)))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd_d4)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT____VdfgRegularize_h19e0feae_0_3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_dummy_d1) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_valid_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_local_valid) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_stripe_st));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_h_offset_ext 
        = (0x000003ffU & ((0x0000001fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                          >> 5U)) * (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__y_dilate)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_w_offset_ext 
        = (0x000003ffU & ((0x0000001fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd) 
                          * (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__x_dilate)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cur 
        = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_w_offset_ext)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_batch_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__batch_cmp) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__batch_cnt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_cur 
        = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_cnt) 
                          + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_h_offset_ext) 
                             + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_stripe_st) 
           | ((~ ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__stripe_cnt))) 
                  & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cnt))) 
                     & (~ (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__batch_cnt)))))) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_exec_valid_d1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_sub_h_end 
        = ((7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cnt))) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cmp_g0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_last_channel 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_c_cnt) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_channel_cmp));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_force_fetch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_stripe_st)) 
           | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_force_clr_d1)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_force_fetch_d1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_8b_lo 
        = (1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                     >> 4U)) & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                                >> 6U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_8b_hi 
        = (1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                  >> 7U) & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                            >> 4U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_sft_hi_d2_en 
        = ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
               >> 0x0000000fU)) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_sft_lo_d2_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_sft_hi_d3_en 
        = ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
               >> 0x00000010U)) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_sft_lo_d3_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_bytes 
        = ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1)
            ? (0x0000007fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                              >> 0x0000000aU)) : (0x000000feU 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                                     >> 9U)));
    if ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000018U) | ((0x00ff0000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value)))));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pad_value) 
                                      >> 0x00000010U)));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_equal 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_batch_end) 
           & ((0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__stripe_cnt))) 
              == (0x0000007fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                 >> 0x00000011U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_img_req_dummy 
        = (IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_cur) 
                    >> 0x0000000dU) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_cur) 
                                       > (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_height_cmp))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4221 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_batch_end));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_w_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_batch_end) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_sub_h_end) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4222)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4238 = (
                                                   (0x20U 
                                                    < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_bytes))
                                                    ? 
                                                   (0x00003fffU 
                                                    & VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cur), 1U))
                                                    : 
                                                   (0x00001fffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cur)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_local_valid_w 
        = ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_valid) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_equal))) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_stripe_st) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_pipe_local_valid)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_equal) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_sub_h_end));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4224 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4221) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_sub_h_end));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4405 = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                                                       >> 1U) 
                                                      & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_w_end)) 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                                            >> 0x0000001bU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pra_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l0) 
           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
              >> 0x00000013U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_p0_vld_w 
        = ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
               >> 0x00000010U)) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_p1_vld_w 
        = ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
               >> 0x00000012U)) & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                       >> 0x0000000fU)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_pvld_l0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_dummy 
        = (1U & ((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                >> 5U))) ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_img_req_dummy)
                  : ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                         >> 4U)) & ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cur) 
                                      >> 0x0000000dU) 
                                     | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cur) 
                                        > (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_width_cmp))) 
                                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_img_req_dummy)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_w 
        = (0x00003fffU & ((0x00000010U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1)
                           ? ((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                             >> 0x0000000aU)))
                               ? (0x000007feU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_w_cnt) 
                                                 >> 5U))
                               : ((0x00000100U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1)
                                   ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt)
                                   : ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_last_channel)) 
                                             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_c_cnt) 
                                                | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                                   >> 8U))))
                                       ? (0x00007ffcU 
                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cur) 
                                             << 2U))
                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4238))))
                           : ((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                             >> 0x0000000bU)))
                               ? (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_w_cnt) 
                                                 >> 4U))
                               : ((0x00000200U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1)
                                   ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt)
                                   : ((1U & ((0x40U 
                                              < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_bytes)) 
                                             | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                                >> 9U)))
                                       ? (0x00007ffcU 
                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cur) 
                                             << 2U))
                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4238))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd_ori_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st_d1) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) 
              & (((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                           >> 4U)) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_end)) 
                 & (IData)((0x0c000000U == (0x0c000000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4231 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_end) 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                                      >> 0x0000001bU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4225 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_end));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4410 = (
                                                   (~ 
                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                                     >> 0x0000001bU)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_end));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4227 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_end) 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                                      >> 0x0000001aU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd_w 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st_d1)) 
                 & ((~ ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                         >> 0x0000001bU) & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_batch_end) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4222)))) 
                    & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4405) 
                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_stride_odd))
                        ? (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd_ori))
                        : (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_stride_odd)) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4405))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd_ori)
                            : ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                          >> 0x0000001bU)) 
                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                                         >> 1U))) ? 
                               (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd))
                                : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_req_ch_odd_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st_d1) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_reg_en) 
               & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                          >> 3U))) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4227)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4228 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4227) 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                                      >> 0x0000001bU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4230 = (0x0001ffffU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st_d1)
                                                       ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_init)
                                                       : 
                                                      (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4228) 
                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_w_end))
                                                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_init)
                                                        : 
                                                       (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_w_end)) 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4228))
                                                         ? 
                                                        ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_w_ch_ori) 
                                                         + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_ch_stride))
                                                         : 
                                                        (((~ 
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                                            >> 0x0000001bU)) 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4227))
                                                          ? 
                                                         ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_w_ch_ori) 
                                                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_init_offset))
                                                          : 
                                                         (((~ 
                                                            (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                                             >> 0x0000001aU)) 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_end))
                                                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_w_ori)
                                                           : 
                                                          ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_w_cnt) 
                                                           + 
                                                           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_sub_h_end)
                                                             ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_add)
                                                             : 0U))))))));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_comb__TOP__475(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__475\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_valid) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_skid_catch))));
}

void Vsim___024root___nba_comb__TOP__476(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__476\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__D_Ra_reg_r0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_adr_p));
}

void Vsim___024root___nba_comb__TOP__477(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__477\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__we_q))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__access_en_r)));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_we_w0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__we;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_re_r0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__re;
    }
}

void Vsim___024root___nba_comb__TOP__478(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__478\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__wthru 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_rd_adr_p) 
            == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__data_wr_adr)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__re) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__we) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT____VdfgRegularize_h398ac72f_0_1))));
}

void Vsim___024root___nba_comb__TOP__479(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__479\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_busy_int)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_in_pvld) 
              & (0x000000ffU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__Xinterp_in_rdy))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_valid)) 
                 | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_in_prdy) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_rd_pvld_int))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT____VdfgRegularize_h4f8683c2_0_2 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__sync2itp_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__sumpd_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_count_next_no_wr_popping 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_count) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_pvld_p 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_count_p)) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut2intp_pvld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_ready)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT____VdfgRegularize_h8cc3e894_0_2)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_pvld_p));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_count_next_is_19 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping)) 
           & (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_count_next 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_count)
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_count) 
                                  - (IData)(1U))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_adr_p 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__rd_adr_next;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_count_next 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_count_next_no_wr_popping));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_adr_p 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_adr;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__we 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping)) 
              | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_count))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__re 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping)
              ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_adr) 
                 == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__rd_adr_next))
              : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_adr) 
                 == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_adr))) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_reserving)) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping)
                ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__rd_count_p_next_rd_popping))
                : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__rd_count_p_next_no_rd_popping))) 
              & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_pvld_p)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__wr_popping))));
}

void Vsim___024root___nba_comb__TOP__480(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__480\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__mc_wr_req_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_type) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__cv_wr_req_vld 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_type)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_vld));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_pop) {
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[0U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[0U] 
               << 5U);
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[1U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[0U] 
                >> 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[1U] 
                                   << 5U));
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[2U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[1U] 
                >> 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[2U] 
                                   << 5U));
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[3U] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[4U] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[5U] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[6U] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[7U] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[8U] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[9U] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000aU] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000bU] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000cU] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000dU] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000eU] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000fU] = 0U;
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x00000010U] = 0U;
    } else {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half) {
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[0U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[1U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[2U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[3U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[4U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[5U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[6U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[7U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[0U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[1U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[2U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[3U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[4U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[5U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[6U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[7U];
        } else {
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[0U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[1U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[2U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[3U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[4U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[5U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[6U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datal_opd[7U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[0U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[1U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[2U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[3U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[4U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[5U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[6U];
            vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_datah_opd[7U];
        }
        vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x00000010U] 
            = ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__remain_data_size))
                ? 1U : 3U);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p5__DOT__p5_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p5__DOT__p5_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__mc_wr_req_vld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p5__DOT__p5_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p5__DOT__p5_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__mc_wr_req_vld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p5__DOT__p5_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p5__DOT__p5_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p5__DOT__p5_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p5__DOT__p5_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p5__DOT__p5_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p5__DOT__p5_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__cv_wr_req_vld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__cv_wr_req_vld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[3U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[4U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[5U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[6U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[7U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[8U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[9U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[9U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[0x0000000aU] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[0x0000000bU] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[0x0000000cU] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[0x0000000dU] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000dU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[0x0000000eU] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[0x0000000fU] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x0000000fU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_pd[0x00000010U] 
        = ((4U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_pop)) 
                  << 2U)) | vlSelfRef.__VdfgRegularize_he50b618e_0_32[0x00000010U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__ack_raw_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_vld) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_rdy) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_pop) 
                 & (vlSelfRef.__VdfgRegularize_he50b618e_0_32[2U] 
                    >> 0x0000000dU))));
}

void Vsim___024root___nba_comb__TOP__481(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__481\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT____VdfgRegularize_ha1be1e7f_0_0 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_ordy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ore 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT____VdfgRegularize_ha1be1e7f_0_0)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_pvld_p));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_count_p_next_not_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ore)
            ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_count_p_next_rd_popping))
            : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_count_p_next_no_rd_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_enable 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__rd_count_p_next_not_0) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_pvld_p)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ore)));
}

void Vsim___024root___nba_comb__TOP__482(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__482\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pvld_f 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp16_sqsum_bypass_en)
            ? (0x0000000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp17to32_out_vld))
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pvld));
}

void Vsim___024root___nba_comb__TOP__483(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__483\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__cmd_en) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pd[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pd[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[2U] 
            = ((0x00002000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pd[2U] 
                               >> 2U)) | (0x00001fffU 
                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pd[2U]));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[3U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[4U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[5U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[6U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[7U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[8U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[9U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000aU] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000bU] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000cU] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000dU] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000eU] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000fU] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x00000010U] = 0U;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0U] 
            = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0.dat_fifo_rd_pd);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[1U] 
            = (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0.dat_fifo_rd_pd 
                       >> 0x00000020U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[2U] 
            = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1.dat_fifo_rd_pd);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[3U] 
            = (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1.dat_fifo_rd_pd 
                       >> 0x00000020U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[4U] 
            = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2.dat_fifo_rd_pd);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[5U] 
            = (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2.dat_fifo_rd_pd 
                       >> 0x00000020U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[6U] 
            = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3.dat_fifo_rd_pd);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[7U] 
            = (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3.dat_fifo_rd_pd 
                       >> 0x00000020U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[8U] 
            = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo0.dat_fifo_rd_pd);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[9U] 
            = (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo0.dat_fifo_rd_pd 
                       >> 0x00000020U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000aU] 
            = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo1.dat_fifo_rd_pd);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000bU] 
            = (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo1.dat_fifo_rd_pd 
                       >> 0x00000020U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000cU] 
            = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo2.dat_fifo_rd_pd);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000dU] 
            = (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo2.dat_fifo_rd_pd 
                       >> 0x00000020U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000eU] 
            = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo3.dat_fifo_rd_pd);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000fU] 
            = (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat1_fifo3.dat_fifo_rd_pd 
                       >> 0x00000020U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x00000010U] 
            = (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__cmd_fifo_rd_size_use)) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__is_last_beat))
                ? 1U : 3U);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_cmd_vld) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_dat_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[8U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[9U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[0x0000000aU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[0x0000000bU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[0x0000000cU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[0x0000000dU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000dU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[0x0000000eU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[0x0000000fU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x0000000fU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_pd[0x00000010U] 
        = ((4U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__cmd_en)) 
                  << 2U)) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122[0x00000010U]);
}

void Vsim___024root___nba_comb__TOP__484(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__484\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_cmd_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_cmd_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dma_wr_req_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_pvld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd_fifo_rd_prdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_busy_next 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_popping)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_count_next_no_wr_popping));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT____VdfgRegularize_h89196029_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_popping) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_reserving));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_popping) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__rd_count_next 
                = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_rd_count));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_count));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__rd_count_next 
                = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_rd_count)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_wr_count)));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__rd_count_next 
            = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_rd_count))
                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__cmd_fifo_rd_count)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_cmd__DOT__u_fifo__DOT__wr_count_next_no_wr_popping));
    }
}

void Vsim___024root___nba_comb__TOP__485(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__485\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT____VdfgRegularize_hb40b72be_0_0 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_ready)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_req_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ore 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT____VdfgRegularize_hb40b72be_0_0)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_req_p));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p_next_not_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ore)
            ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p_next_rd_popping))
            : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p_next_no_rd_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_enable 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p_next_not_0) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_req_p)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ore)));
}

void Vsim___024root___nba_comb__TOP__486(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__486\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_wr_req_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_vld) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_valid)) 
                 | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_valid) 
                    & ((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U])
                        ? ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_busy_int)) 
                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat_fifo_wr_rdy))
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat_fifo_wr_rdy)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_reserving 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_busy_int)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_valid) 
              & (IData)(((0x0b00U == (0x0f00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U])) 
                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat_fifo_wr_rdy)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_count_next_no_wr_popping 
        = (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_count) 
                 + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_reserving)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_pvld_p 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_count_p)) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_reserving));
}

void Vsim___024root___nba_comb__TOP__487(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__487\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT____VdfgRegularize_h035ee885_0_2 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_pvld_int));
}

void Vsim___024root___nba_comb__TOP__488(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__488\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__layer_st 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
            >> 2U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__wait_for_op_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_cnt_w 
        = ((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__layer_st) 
                  | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_pd) 
                     >> 6U))) ? 0U : (0x0000007fU & 
                                      ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_st_w 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__layer_st) 
                 | ((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_valid) 
                              >> 8U) & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_pd) 
                                        >> 6U))) ? 
                    ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_pd) 
                     >> 7U) : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_channel_st) 
                               >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_rd_mask_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x8)
            ? 0x000000ffU : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x4)
                              ? 0x0000000fU : (0x000000ffU 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__is_x2)
                                                   ? 
                                                  ((0x000000f0U 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_cnt_w))) 
                                                       << 4U)) 
                                                   | (0x0000000fU 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_cnt_w)))))
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_cnt_w))))))));
}

void Vsim___024root___nba_sequent__TOP__1503(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1503\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_pvld_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_pvld_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_RT_cmac_a2cacc__DOT__mac2accu_pvld_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_ma.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1));
}

void Vsim___024root___nba_sequent__TOP__1504(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1504\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en_d1 = 0U;
    }
}

void Vsim___024root___nba_comb__TOP__489(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__489\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<9>/*287:0*/ __Vtemp_7;
    VlWide<9>/*287:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<9>/*287:0*/ __Vtemp_23;
    VlWide<9>/*287:0*/ __Vtemp_30;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<9>/*287:0*/ __Vtemp_40;
    VlWide<9>/*287:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_48;
    VlWide<9>/*287:0*/ __Vtemp_56;
    VlWide<9>/*287:0*/ __Vtemp_63;
    VlWide<17>/*543:0*/ __Vtemp_64;
    VlWide<17>/*543:0*/ __Vtemp_66;
    // Body
    __Vtemp_7[4U] = (((IData)((0x00000003ffffffffULL 
                               & (- (QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                        >> 0x0000000cU))))))) 
                      << 8U) | (((0x0000000fU & ((IData)(
                                                         (0x00000003ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000bU))))))) 
                                                 >> 0x0000001aU)) 
                                 | ((IData)(((0x00000003ffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                       >> 0x0000000aU)))))) 
                                             >> 0x00000020U)) 
                                    >> 0x0000001cU)) 
                                | ((0x00000030U & ((IData)(
                                                           (0x00000003ffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000bU))))))) 
                                                   >> 0x0000001aU)) 
                                   | ((IData)(((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                         >> 0x0000000bU)))))) 
                                               >> 0x00000020U)) 
                                      << 6U))));
    __Vtemp_7[6U] = (((0x000000ffU & ((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                        >> 0x0000000dU))))))) 
                                      >> 0x00000016U)) 
                      | ((IData)(((0x00000003ffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                            >> 0x0000000cU)))))) 
                                  >> 0x00000020U)) 
                         >> 0x00000018U)) | (((IData)(
                                                      (0x00000003ffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000eU))))))) 
                                              << 0x0000000cU) 
                                             | ((0x00000300U 
                                                 & ((IData)(
                                                            (0x00000003ffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000dU))))))) 
                                                    >> 0x00000016U)) 
                                                | ((IData)(
                                                           ((0x00000003ffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000dU)))))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000000aU))));
    __Vtemp_7[7U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                        >> 0x0000000eU))))))) 
                                      >> 0x00000014U) 
                                     | ((IData)(((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                           >> 0x0000000dU)))))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000016U))) 
                     | ((0x00000f00U & ((IData)((0x00000003ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                          >> 0x0000000eU))))))) 
                                        >> 0x00000014U)) 
                        | (((IData)((0x00000003ffffffffULL 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                              >> 0x0000000fU))))))) 
                            << 0x0000000eU) | ((IData)(
                                                       ((0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000eU)))))) 
                                                        >> 0x00000020U)) 
                                               << 0x0000000cU))));
    __Vtemp_7[8U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                        >> 0x0000000fU))))))) 
                                      >> 0x00000012U) 
                                     | ((IData)(((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                           >> 0x0000000eU)))))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000014U))) 
                     | ((((0x0000000fU & ((IData)((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                            >> 0x0000000fU))))))) 
                                          >> 0x0000001aU)) 
                          | ((IData)(((0x00000003ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                >> 0x0000000eU)))))) 
                                      >> 0x00000020U)) 
                             >> 0x0000001cU)) | ((0x00000030U 
                                                  & ((IData)(
                                                             (0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000fU))))))) 
                                                     >> 0x0000001aU)) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000fU)))))) 
                                                             >> 0x00000020U)) 
                                                    << 6U))) 
                        << 8U));
    __Vtemp_14[4U] = (((IData)((0x00000003ffffffffULL 
                                & (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                         >> 4U))))))) 
                       << 8U) | (((0x0000000fU & ((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 3U))))))) 
                                                  >> 0x0000001aU)) 
                                  | ((IData)(((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                        >> 2U)))))) 
                                              >> 0x00000020U)) 
                                     >> 0x0000001cU)) 
                                 | ((0x00000030U & 
                                     ((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                        >> 3U))))))) 
                                      >> 0x0000001aU)) 
                                    | ((IData)(((0x00000003ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                          >> 3U)))))) 
                                                >> 0x00000020U)) 
                                       << 6U))));
    __Vtemp_14[6U] = (((0x000000ffU & ((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                         >> 5U))))))) 
                                       >> 0x00000016U)) 
                       | ((IData)(((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                             >> 4U)))))) 
                                   >> 0x00000020U)) 
                          >> 0x00000018U)) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 6U))))))) 
                                               << 0x0000000cU) 
                                              | ((0x00000300U 
                                                  & ((IData)(
                                                             (0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 5U))))))) 
                                                     >> 0x00000016U)) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 5U)))))) 
                                                             >> 0x00000020U)) 
                                                    << 0x0000000aU))));
    __Vtemp_14[7U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                         >> 6U))))))) 
                                       >> 0x00000014U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                            >> 5U)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000016U))) 
                      | ((0x00000f00U & ((IData)((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                           >> 6U))))))) 
                                         >> 0x00000014U)) 
                         | (((IData)((0x00000003ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                               >> 7U))))))) 
                             << 0x0000000eU) | ((IData)(
                                                        ((0x00000003ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 6U)))))) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000cU))));
    __Vtemp_14[8U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                         >> 7U))))))) 
                                       >> 0x00000012U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                            >> 6U)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000014U))) 
                      | ((((0x0000000fU & ((IData)(
                                                   (0x00000003ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                             >> 7U))))))) 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x00000003ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                 >> 6U)))))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | ((0x00000030U 
                                                   & ((IData)(
                                                              (0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 7U))))))) 
                                                      >> 0x0000001aU)) 
                                                  | ((IData)(
                                                             ((0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 7U)))))) 
                                                              >> 0x00000020U)) 
                                                     << 6U))) 
                         << 8U));
    __Vtemp_15[0x0000000aU] = (((0x0000ffffU & ((IData)(
                                                        (0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 9U))))))) 
                                                >> 0x0000000eU)) 
                                | ((IData)(((0x00000003ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                      >> 8U)))))) 
                                            >> 0x00000020U)) 
                                   >> 0x00000010U)) 
                               | (((IData)((0x00000003ffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                     >> 0x0000000aU))))))) 
                                   << 0x00000014U) 
                                  | ((0x00030000U & 
                                      ((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                         >> 9U))))))) 
                                       >> 0x0000000eU)) 
                                     | ((IData)(((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                           >> 9U)))))) 
                                                 >> 0x00000020U)) 
                                        << 0x00000012U))));
    __Vtemp_15[0x0000000bU] = ((0x0000ffffU & (((IData)(
                                                        (0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000aU))))))) 
                                                >> 0x0000000cU) 
                                               | ((IData)(
                                                          ((0x00000003ffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 9U)))))) 
                                                           >> 0x00000020U)) 
                                                  >> 0x0000000eU))) 
                               | ((0x000f0000U & ((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000aU))))))) 
                                                  >> 0x0000000cU)) 
                                  | (((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                        >> 0x0000000bU))))))) 
                                      << 0x00000016U) 
                                     | ((IData)(((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                           >> 0x0000000aU)))))) 
                                                 >> 0x00000020U)) 
                                        << 0x00000014U))));
    __Vtemp_23[4U] = (((IData)((0x00000003ffffffffULL 
                                & (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                         >> 0x0000000cU))))))) 
                       << 8U) | (((0x0000000fU & ((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000bU))))))) 
                                                  >> 0x0000001aU)) 
                                  | ((IData)(((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                        >> 0x0000000aU)))))) 
                                              >> 0x00000020U)) 
                                     >> 0x0000001cU)) 
                                 | ((0x00000030U & 
                                     ((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                        >> 0x0000000bU))))))) 
                                      >> 0x0000001aU)) 
                                    | ((IData)(((0x00000003ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                          >> 0x0000000bU)))))) 
                                                >> 0x00000020U)) 
                                       << 6U))));
    __Vtemp_23[6U] = (((0x000000ffU & ((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                         >> 0x0000000dU))))))) 
                                       >> 0x00000016U)) 
                       | ((IData)(((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                             >> 0x0000000cU)))))) 
                                   >> 0x00000020U)) 
                          >> 0x00000018U)) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000eU))))))) 
                                               << 0x0000000cU) 
                                              | ((0x00000300U 
                                                  & ((IData)(
                                                             (0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000dU))))))) 
                                                     >> 0x00000016U)) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000dU)))))) 
                                                             >> 0x00000020U)) 
                                                    << 0x0000000aU))));
    __Vtemp_23[7U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                         >> 0x0000000eU))))))) 
                                       >> 0x00000014U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                            >> 0x0000000dU)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000016U))) 
                      | ((0x00000f00U & ((IData)((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                           >> 0x0000000eU))))))) 
                                         >> 0x00000014U)) 
                         | (((IData)((0x00000003ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                               >> 0x0000000fU))))))) 
                             << 0x0000000eU) | ((IData)(
                                                        ((0x00000003ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000eU)))))) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000cU))));
    __Vtemp_23[8U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                         >> 0x0000000fU))))))) 
                                       >> 0x00000012U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                            >> 0x0000000eU)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000014U))) 
                      | ((((0x0000000fU & ((IData)(
                                                   (0x00000003ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                             >> 0x0000000fU))))))) 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x00000003ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                 >> 0x0000000eU)))))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | ((0x00000030U 
                                                   & ((IData)(
                                                              (0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000fU))))))) 
                                                      >> 0x0000001aU)) 
                                                  | ((IData)(
                                                             ((0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000fU)))))) 
                                                              >> 0x00000020U)) 
                                                     << 6U))) 
                         << 8U));
    __Vtemp_30[4U] = (((IData)((0x00000003ffffffffULL 
                                & (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                         >> 4U))))))) 
                       << 8U) | (((0x0000000fU & ((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 3U))))))) 
                                                  >> 0x0000001aU)) 
                                  | ((IData)(((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                        >> 2U)))))) 
                                              >> 0x00000020U)) 
                                     >> 0x0000001cU)) 
                                 | ((0x00000030U & 
                                     ((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                        >> 3U))))))) 
                                      >> 0x0000001aU)) 
                                    | ((IData)(((0x00000003ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                          >> 3U)))))) 
                                                >> 0x00000020U)) 
                                       << 6U))));
    __Vtemp_30[6U] = (((0x000000ffU & ((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                         >> 5U))))))) 
                                       >> 0x00000016U)) 
                       | ((IData)(((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                             >> 4U)))))) 
                                   >> 0x00000020U)) 
                          >> 0x00000018U)) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 6U))))))) 
                                               << 0x0000000cU) 
                                              | ((0x00000300U 
                                                  & ((IData)(
                                                             (0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 5U))))))) 
                                                     >> 0x00000016U)) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 5U)))))) 
                                                             >> 0x00000020U)) 
                                                    << 0x0000000aU))));
    __Vtemp_30[7U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                         >> 6U))))))) 
                                       >> 0x00000014U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                            >> 5U)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000016U))) 
                      | ((0x00000f00U & ((IData)((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                           >> 6U))))))) 
                                         >> 0x00000014U)) 
                         | (((IData)((0x00000003ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                               >> 7U))))))) 
                             << 0x0000000eU) | ((IData)(
                                                        ((0x00000003ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 6U)))))) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000cU))));
    __Vtemp_30[8U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                         >> 7U))))))) 
                                       >> 0x00000012U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                            >> 6U)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000014U))) 
                      | ((((0x0000000fU & ((IData)(
                                                   (0x00000003ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                             >> 7U))))))) 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x00000003ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                 >> 6U)))))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | ((0x00000030U 
                                                   & ((IData)(
                                                              (0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 7U))))))) 
                                                      >> 0x0000001aU)) 
                                                  | ((IData)(
                                                             ((0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 7U)))))) 
                                                              >> 0x00000020U)) 
                                                     << 6U))) 
                         << 8U));
    __Vtemp_31[0x0000000aU] = (((0x0000ffffU & ((IData)(
                                                        (0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 9U))))))) 
                                                >> 0x0000000eU)) 
                                | ((IData)(((0x00000003ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                      >> 8U)))))) 
                                            >> 0x00000020U)) 
                                   >> 0x00000010U)) 
                               | (((IData)((0x00000003ffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                     >> 0x0000000aU))))))) 
                                   << 0x00000014U) 
                                  | ((0x00030000U & 
                                      ((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                         >> 9U))))))) 
                                       >> 0x0000000eU)) 
                                     | ((IData)(((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                           >> 9U)))))) 
                                                 >> 0x00000020U)) 
                                        << 0x00000012U))));
    __Vtemp_31[0x0000000bU] = ((0x0000ffffU & (((IData)(
                                                        (0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000aU))))))) 
                                                >> 0x0000000cU) 
                                               | ((IData)(
                                                          ((0x00000003ffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 9U)))))) 
                                                           >> 0x00000020U)) 
                                                  >> 0x0000000eU))) 
                               | ((0x000f0000U & ((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000aU))))))) 
                                                  >> 0x0000000cU)) 
                                  | (((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                        >> 0x0000000bU))))))) 
                                      << 0x00000016U) 
                                     | ((IData)(((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                           >> 0x0000000aU)))))) 
                                                 >> 0x00000020U)) 
                                        << 0x00000014U))));
    __Vtemp_33[2U] = (((((IData)((0x00000003ffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                           >> 2U))))))) 
                         << 4U) | (((IData)((0x00000003ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                      >> 1U))))))) 
                                    >> 0x0000001eU) 
                                   | ((IData)(((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                         >> 1U)))))) 
                                               >> 0x00000020U)) 
                                      << 2U))) & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[2U]) 
                      | ((((IData)((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                             >> 2U))))))) 
                           << 4U) | (((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                        >> 1U))))))) 
                                      >> 0x0000001eU) 
                                     | ((IData)(((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                           >> 1U)))))) 
                                                 >> 0x00000020U)) 
                                        << 2U))) & 
                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[2U]));
    __Vtemp_33[3U] = (((((IData)((0x00000003ffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                           >> 2U))))))) 
                         >> 0x0000001cU) | (((IData)(
                                                     (0x00000003ffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                               >> 3U))))))) 
                                             << 6U) 
                                            | ((IData)(
                                                       ((0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 2U)))))) 
                                                        >> 0x00000020U)) 
                                               << 4U))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[3U]) 
                      | ((((IData)((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                             >> 2U))))))) 
                           >> 0x0000001cU) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 3U))))))) 
                                               << 6U) 
                                              | ((IData)(
                                                         ((0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 2U)))))) 
                                                          >> 0x00000020U)) 
                                                 << 4U))) 
                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[3U]));
    __Vtemp_33[5U] = (((((IData)((0x00000003ffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                           >> 4U))))))) 
                         >> 0x00000018U) | (((IData)(
                                                     (0x00000003ffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                               >> 5U))))))) 
                                             << 0x0000000aU) 
                                            | ((IData)(
                                                       ((0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 4U)))))) 
                                                        >> 0x00000020U)) 
                                               << 8U))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[5U]) 
                      | ((((IData)((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                             >> 4U))))))) 
                           >> 0x00000018U) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 5U))))))) 
                                               << 0x0000000aU) 
                                              | ((IData)(
                                                         ((0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 4U)))))) 
                                                          >> 0x00000020U)) 
                                                 << 8U))) 
                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[5U]));
    __Vtemp_33[9U] = (((((IData)((0x00000003ffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                           >> 8U))))))) 
                         >> 0x00000010U) | (((IData)(
                                                     (0x00000003ffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                               >> 9U))))))) 
                                             << 0x00000012U) 
                                            | ((IData)(
                                                       ((0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 8U)))))) 
                                                        >> 0x00000020U)) 
                                               << 0x00000010U))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[9U]) 
                      | ((((IData)((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                             >> 8U))))))) 
                           >> 0x00000010U) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 9U))))))) 
                                               << 0x00000012U) 
                                              | ((IData)(
                                                         ((0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 8U)))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000010U))) 
                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[9U]));
    __Vtemp_33[0x0000000cU] = ((((0x0000ffffU & (((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000bU))))))) 
                                                  >> 0x0000000aU) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000aU)))))) 
                                                             >> 0x00000020U)) 
                                                    >> 0x0000000cU))) 
                                 | (__Vtemp_7[4U] << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x0000000cU]) 
                               | (((0x0000ffffU & (
                                                   ((IData)(
                                                            (0x00000003ffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000bU))))))) 
                                                    >> 0x0000000aU) 
                                                   | ((IData)(
                                                              ((0x00000003ffffffffULL 
                                                                & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000aU)))))) 
                                                               >> 0x00000020U)) 
                                                      >> 0x0000000cU))) 
                                   | (__Vtemp_23[4U] 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x0000000cU]));
    __Vtemp_33[0x0000000dU] = ((((__Vtemp_7[4U] >> 0x00000010U) 
                                 | ((0x00ff0000U & 
                                     ((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                        >> 0x0000000cU))))))) 
                                      >> 8U)) | (((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000dU))))))) 
                                                  << 0x0000001aU) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000cU)))))) 
                                                             >> 0x00000020U)) 
                                                    << 0x00000018U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x0000000dU]) 
                               | (((__Vtemp_23[4U] 
                                    >> 0x00000010U) 
                                   | ((0x00ff0000U 
                                       & ((IData)((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                            >> 0x0000000cU))))))) 
                                          >> 8U)) | 
                                      (((IData)((0x00000003ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                          >> 0x0000000dU))))))) 
                                        << 0x0000001aU) 
                                       | ((IData)((
                                                   (0x00000003ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                             >> 0x0000000cU)))))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000018U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x0000000dU]));
    __Vtemp_33[0x0000000eU] = ((((0x0000ffffU & (((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000dU))))))) 
                                                  >> 6U) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                                >> 0x0000000cU)))))) 
                                                             >> 0x00000020U)) 
                                                    >> 8U))) 
                                 | (__Vtemp_7[6U] << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x0000000eU]) 
                               | (((0x0000ffffU & (
                                                   ((IData)(
                                                            (0x00000003ffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000dU))))))) 
                                                    >> 6U) 
                                                   | ((IData)(
                                                              ((0x00000003ffffffffULL 
                                                                & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                                >> 0x0000000cU)))))) 
                                                               >> 0x00000020U)) 
                                                      >> 8U))) 
                                   | (__Vtemp_23[6U] 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x0000000eU]));
    __Vtemp_40[4U] = (((IData)((0x00000003ffffffffULL 
                                & (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                         >> 0x0000000cU))))))) 
                       << 8U) | (((0x0000000fU & ((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000bU))))))) 
                                                  >> 0x0000001aU)) 
                                  | ((IData)(((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                        >> 0x0000000aU)))))) 
                                              >> 0x00000020U)) 
                                     >> 0x0000001cU)) 
                                 | ((0x00000030U & 
                                     ((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                        >> 0x0000000bU))))))) 
                                      >> 0x0000001aU)) 
                                    | ((IData)(((0x00000003ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                          >> 0x0000000bU)))))) 
                                                >> 0x00000020U)) 
                                       << 6U))));
    __Vtemp_40[6U] = (((0x000000ffU & ((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                         >> 0x0000000dU))))))) 
                                       >> 0x00000016U)) 
                       | ((IData)(((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                             >> 0x0000000cU)))))) 
                                   >> 0x00000020U)) 
                          >> 0x00000018U)) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000eU))))))) 
                                               << 0x0000000cU) 
                                              | ((0x00000300U 
                                                  & ((IData)(
                                                             (0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000dU))))))) 
                                                     >> 0x00000016U)) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000dU)))))) 
                                                             >> 0x00000020U)) 
                                                    << 0x0000000aU))));
    __Vtemp_40[7U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                         >> 0x0000000eU))))))) 
                                       >> 0x00000014U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                            >> 0x0000000dU)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000016U))) 
                      | ((0x00000f00U & ((IData)((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                           >> 0x0000000eU))))))) 
                                         >> 0x00000014U)) 
                         | (((IData)((0x00000003ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                               >> 0x0000000fU))))))) 
                             << 0x0000000eU) | ((IData)(
                                                        ((0x00000003ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000eU)))))) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000cU))));
    __Vtemp_40[8U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                         >> 0x0000000fU))))))) 
                                       >> 0x00000012U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                            >> 0x0000000eU)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000014U))) 
                      | ((((0x0000000fU & ((IData)(
                                                   (0x00000003ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                             >> 0x0000000fU))))))) 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x00000003ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                 >> 0x0000000eU)))))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | ((0x00000030U 
                                                   & ((IData)(
                                                              (0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000fU))))))) 
                                                      >> 0x0000001aU)) 
                                                  | ((IData)(
                                                             ((0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000fU)))))) 
                                                              >> 0x00000020U)) 
                                                     << 6U))) 
                         << 8U));
    __Vtemp_47[4U] = (((IData)((0x00000003ffffffffULL 
                                & (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                         >> 4U))))))) 
                       << 8U) | (((0x0000000fU & ((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 3U))))))) 
                                                  >> 0x0000001aU)) 
                                  | ((IData)(((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                        >> 2U)))))) 
                                              >> 0x00000020U)) 
                                     >> 0x0000001cU)) 
                                 | ((0x00000030U & 
                                     ((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                        >> 3U))))))) 
                                      >> 0x0000001aU)) 
                                    | ((IData)(((0x00000003ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                          >> 3U)))))) 
                                                >> 0x00000020U)) 
                                       << 6U))));
    __Vtemp_47[6U] = (((0x000000ffU & ((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                         >> 5U))))))) 
                                       >> 0x00000016U)) 
                       | ((IData)(((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                             >> 4U)))))) 
                                   >> 0x00000020U)) 
                          >> 0x00000018U)) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 6U))))))) 
                                               << 0x0000000cU) 
                                              | ((0x00000300U 
                                                  & ((IData)(
                                                             (0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 5U))))))) 
                                                     >> 0x00000016U)) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 5U)))))) 
                                                             >> 0x00000020U)) 
                                                    << 0x0000000aU))));
    __Vtemp_47[7U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                         >> 6U))))))) 
                                       >> 0x00000014U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                            >> 5U)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000016U))) 
                      | ((0x00000f00U & ((IData)((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                           >> 6U))))))) 
                                         >> 0x00000014U)) 
                         | (((IData)((0x00000003ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                               >> 7U))))))) 
                             << 0x0000000eU) | ((IData)(
                                                        ((0x00000003ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 6U)))))) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000cU))));
    __Vtemp_47[8U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                         >> 7U))))))) 
                                       >> 0x00000012U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                            >> 6U)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000014U))) 
                      | ((((0x0000000fU & ((IData)(
                                                   (0x00000003ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                             >> 7U))))))) 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x00000003ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                 >> 6U)))))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | ((0x00000030U 
                                                   & ((IData)(
                                                              (0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 7U))))))) 
                                                      >> 0x0000001aU)) 
                                                  | ((IData)(
                                                             ((0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 7U)))))) 
                                                              >> 0x00000020U)) 
                                                     << 6U))) 
                         << 8U));
    __Vtemp_48[0x0000000aU] = (((0x0000ffffU & ((IData)(
                                                        (0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 9U))))))) 
                                                >> 0x0000000eU)) 
                                | ((IData)(((0x00000003ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                      >> 8U)))))) 
                                            >> 0x00000020U)) 
                                   >> 0x00000010U)) 
                               | (((IData)((0x00000003ffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                     >> 0x0000000aU))))))) 
                                   << 0x00000014U) 
                                  | ((0x00030000U & 
                                      ((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                         >> 9U))))))) 
                                       >> 0x0000000eU)) 
                                     | ((IData)(((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                           >> 9U)))))) 
                                                 >> 0x00000020U)) 
                                        << 0x00000012U))));
    __Vtemp_48[0x0000000bU] = ((0x0000ffffU & (((IData)(
                                                        (0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000aU))))))) 
                                                >> 0x0000000cU) 
                                               | ((IData)(
                                                          ((0x00000003ffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 9U)))))) 
                                                           >> 0x00000020U)) 
                                                  >> 0x0000000eU))) 
                               | ((0x000f0000U & ((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000aU))))))) 
                                                  >> 0x0000000cU)) 
                                  | (((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                        >> 0x0000000bU))))))) 
                                      << 0x00000016U) 
                                     | ((IData)(((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                           >> 0x0000000aU)))))) 
                                                 >> 0x00000020U)) 
                                        << 0x00000014U))));
    __Vtemp_56[4U] = (((IData)((0x00000003ffffffffULL 
                                & (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                         >> 0x0000000cU))))))) 
                       << 8U) | (((0x0000000fU & ((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000bU))))))) 
                                                  >> 0x0000001aU)) 
                                  | ((IData)(((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                        >> 0x0000000aU)))))) 
                                              >> 0x00000020U)) 
                                     >> 0x0000001cU)) 
                                 | ((0x00000030U & 
                                     ((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                        >> 0x0000000bU))))))) 
                                      >> 0x0000001aU)) 
                                    | ((IData)(((0x00000003ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                          >> 0x0000000bU)))))) 
                                                >> 0x00000020U)) 
                                       << 6U))));
    __Vtemp_56[6U] = (((0x000000ffU & ((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                         >> 0x0000000dU))))))) 
                                       >> 0x00000016U)) 
                       | ((IData)(((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                             >> 0x0000000cU)))))) 
                                   >> 0x00000020U)) 
                          >> 0x00000018U)) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000eU))))))) 
                                               << 0x0000000cU) 
                                              | ((0x00000300U 
                                                  & ((IData)(
                                                             (0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000dU))))))) 
                                                     >> 0x00000016U)) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000dU)))))) 
                                                             >> 0x00000020U)) 
                                                    << 0x0000000aU))));
    __Vtemp_56[7U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                         >> 0x0000000eU))))))) 
                                       >> 0x00000014U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                            >> 0x0000000dU)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000016U))) 
                      | ((0x00000f00U & ((IData)((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                           >> 0x0000000eU))))))) 
                                         >> 0x00000014U)) 
                         | (((IData)((0x00000003ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                               >> 0x0000000fU))))))) 
                             << 0x0000000eU) | ((IData)(
                                                        ((0x00000003ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000eU)))))) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000cU))));
    __Vtemp_56[8U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                         >> 0x0000000fU))))))) 
                                       >> 0x00000012U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                            >> 0x0000000eU)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000014U))) 
                      | ((((0x0000000fU & ((IData)(
                                                   (0x00000003ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                             >> 0x0000000fU))))))) 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x00000003ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                 >> 0x0000000eU)))))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | ((0x00000030U 
                                                   & ((IData)(
                                                              (0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000fU))))))) 
                                                      >> 0x0000001aU)) 
                                                  | ((IData)(
                                                             ((0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000fU)))))) 
                                                              >> 0x00000020U)) 
                                                     << 6U))) 
                         << 8U));
    __Vtemp_63[4U] = (((IData)((0x00000003ffffffffULL 
                                & (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                         >> 4U))))))) 
                       << 8U) | (((0x0000000fU & ((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 3U))))))) 
                                                  >> 0x0000001aU)) 
                                  | ((IData)(((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                        >> 2U)))))) 
                                              >> 0x00000020U)) 
                                     >> 0x0000001cU)) 
                                 | ((0x00000030U & 
                                     ((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                        >> 3U))))))) 
                                      >> 0x0000001aU)) 
                                    | ((IData)(((0x00000003ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                          >> 3U)))))) 
                                                >> 0x00000020U)) 
                                       << 6U))));
    __Vtemp_63[6U] = (((0x000000ffU & ((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                         >> 5U))))))) 
                                       >> 0x00000016U)) 
                       | ((IData)(((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                             >> 4U)))))) 
                                   >> 0x00000020U)) 
                          >> 0x00000018U)) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 6U))))))) 
                                               << 0x0000000cU) 
                                              | ((0x00000300U 
                                                  & ((IData)(
                                                             (0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 5U))))))) 
                                                     >> 0x00000016U)) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 5U)))))) 
                                                             >> 0x00000020U)) 
                                                    << 0x0000000aU))));
    __Vtemp_63[7U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                         >> 6U))))))) 
                                       >> 0x00000014U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                            >> 5U)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000016U))) 
                      | ((0x00000f00U & ((IData)((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                           >> 6U))))))) 
                                         >> 0x00000014U)) 
                         | (((IData)((0x00000003ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                               >> 7U))))))) 
                             << 0x0000000eU) | ((IData)(
                                                        ((0x00000003ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 6U)))))) 
                                                         >> 0x00000020U)) 
                                                << 0x0000000cU))));
    __Vtemp_63[8U] = ((0x000000ffU & (((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                         >> 7U))))))) 
                                       >> 0x00000012U) 
                                      | ((IData)(((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                            >> 6U)))))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000014U))) 
                      | ((((0x0000000fU & ((IData)(
                                                   (0x00000003ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                             >> 7U))))))) 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x00000003ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                 >> 6U)))))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | ((0x00000030U 
                                                   & ((IData)(
                                                              (0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 7U))))))) 
                                                      >> 0x0000001aU)) 
                                                  | ((IData)(
                                                             ((0x00000003ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 7U)))))) 
                                                              >> 0x00000020U)) 
                                                     << 6U))) 
                         << 8U));
    __Vtemp_64[0x0000000aU] = (((0x0000ffffU & ((IData)(
                                                        (0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 9U))))))) 
                                                >> 0x0000000eU)) 
                                | ((IData)(((0x00000003ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                      >> 8U)))))) 
                                            >> 0x00000020U)) 
                                   >> 0x00000010U)) 
                               | (((IData)((0x00000003ffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                     >> 0x0000000aU))))))) 
                                   << 0x00000014U) 
                                  | ((0x00030000U & 
                                      ((IData)((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                         >> 9U))))))) 
                                       >> 0x0000000eU)) 
                                     | ((IData)(((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                           >> 9U)))))) 
                                                 >> 0x00000020U)) 
                                        << 0x00000012U))));
    __Vtemp_64[0x0000000bU] = ((0x0000ffffU & (((IData)(
                                                        (0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000aU))))))) 
                                                >> 0x0000000cU) 
                                               | ((IData)(
                                                          ((0x00000003ffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 9U)))))) 
                                                           >> 0x00000020U)) 
                                                  >> 0x0000000eU))) 
                               | ((0x000f0000U & ((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000aU))))))) 
                                                  >> 0x0000000cU)) 
                                  | (((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                        >> 0x0000000bU))))))) 
                                      << 0x00000016U) 
                                     | ((IData)(((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                           >> 0x0000000aU)))))) 
                                                 >> 0x00000020U)) 
                                        << 0x00000014U))));
    __Vtemp_66[2U] = (((((IData)((0x00000003ffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                           >> 2U))))))) 
                         << 4U) | (((IData)((0x00000003ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                      >> 1U))))))) 
                                    >> 0x0000001eU) 
                                   | ((IData)(((0x00000003ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                         >> 1U)))))) 
                                               >> 0x00000020U)) 
                                      << 2U))) & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[2U]) 
                      | ((((IData)((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                             >> 2U))))))) 
                           << 4U) | (((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                        >> 1U))))))) 
                                      >> 0x0000001eU) 
                                     | ((IData)(((0x00000003ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                           >> 1U)))))) 
                                                 >> 0x00000020U)) 
                                        << 2U))) & 
                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[2U]));
    __Vtemp_66[3U] = (((((IData)((0x00000003ffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                           >> 2U))))))) 
                         >> 0x0000001cU) | (((IData)(
                                                     (0x00000003ffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                               >> 3U))))))) 
                                             << 6U) 
                                            | ((IData)(
                                                       ((0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 2U)))))) 
                                                        >> 0x00000020U)) 
                                               << 4U))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[3U]) 
                      | ((((IData)((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                             >> 2U))))))) 
                           >> 0x0000001cU) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 3U))))))) 
                                               << 6U) 
                                              | ((IData)(
                                                         ((0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 2U)))))) 
                                                          >> 0x00000020U)) 
                                                 << 4U))) 
                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[3U]));
    __Vtemp_66[5U] = (((((IData)((0x00000003ffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                           >> 4U))))))) 
                         >> 0x00000018U) | (((IData)(
                                                     (0x00000003ffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                               >> 5U))))))) 
                                             << 0x0000000aU) 
                                            | ((IData)(
                                                       ((0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 4U)))))) 
                                                        >> 0x00000020U)) 
                                               << 8U))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[5U]) 
                      | ((((IData)((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                             >> 4U))))))) 
                           >> 0x00000018U) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 5U))))))) 
                                               << 0x0000000aU) 
                                              | ((IData)(
                                                         ((0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 4U)))))) 
                                                          >> 0x00000020U)) 
                                                 << 8U))) 
                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[5U]));
    __Vtemp_66[9U] = (((((IData)((0x00000003ffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                           >> 8U))))))) 
                         >> 0x00000010U) | (((IData)(
                                                     (0x00000003ffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                               >> 9U))))))) 
                                             << 0x00000012U) 
                                            | ((IData)(
                                                       ((0x00000003ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 8U)))))) 
                                                        >> 0x00000020U)) 
                                               << 0x00000010U))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[9U]) 
                      | ((((IData)((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                             >> 8U))))))) 
                           >> 0x00000010U) | (((IData)(
                                                       (0x00000003ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 9U))))))) 
                                               << 0x00000012U) 
                                              | ((IData)(
                                                         ((0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 8U)))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000010U))) 
                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[9U]));
    __Vtemp_66[0x0000000cU] = ((((0x0000ffffU & (((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000bU))))))) 
                                                  >> 0x0000000aU) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000aU)))))) 
                                                             >> 0x00000020U)) 
                                                    >> 0x0000000cU))) 
                                 | (__Vtemp_40[4U] 
                                    << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[0x0000000cU]) 
                               | (((0x0000ffffU & (
                                                   ((IData)(
                                                            (0x00000003ffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000bU))))))) 
                                                    >> 0x0000000aU) 
                                                   | ((IData)(
                                                              ((0x00000003ffffffffULL 
                                                                & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000aU)))))) 
                                                               >> 0x00000020U)) 
                                                      >> 0x0000000cU))) 
                                   | (__Vtemp_56[4U] 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[0x0000000cU]));
    __Vtemp_66[0x0000000dU] = ((((__Vtemp_40[4U] >> 0x00000010U) 
                                 | ((0x00ff0000U & 
                                     ((IData)((0x00000003ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                        >> 0x0000000cU))))))) 
                                      >> 8U)) | (((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000dU))))))) 
                                                  << 0x0000001aU) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000cU)))))) 
                                                             >> 0x00000020U)) 
                                                    << 0x00000018U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[0x0000000dU]) 
                               | (((__Vtemp_56[4U] 
                                    >> 0x00000010U) 
                                   | ((0x00ff0000U 
                                       & ((IData)((0x00000003ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                            >> 0x0000000cU))))))) 
                                          >> 8U)) | 
                                      (((IData)((0x00000003ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                          >> 0x0000000dU))))))) 
                                        << 0x0000001aU) 
                                       | ((IData)((
                                                   (0x00000003ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                             >> 0x0000000cU)))))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000018U)))) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[0x0000000dU]));
    __Vtemp_66[0x0000000eU] = ((((0x0000ffffU & (((IData)(
                                                          (0x00000003ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000dU))))))) 
                                                  >> 6U) 
                                                 | ((IData)(
                                                            ((0x00000003ffffffffULL 
                                                              & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                                >> 0x0000000cU)))))) 
                                                             >> 0x00000020U)) 
                                                    >> 8U))) 
                                 | (__Vtemp_40[6U] 
                                    << 0x00000010U)) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[0x0000000eU]) 
                               | (((0x0000ffffU & (
                                                   ((IData)(
                                                            (0x00000003ffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000dU))))))) 
                                                    >> 6U) 
                                                   | ((IData)(
                                                              ((0x00000003ffffffffULL 
                                                                & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                                                >> 0x0000000cU)))))) 
                                                               >> 0x00000020U)) 
                                                      >> 8U))) 
                                   | (__Vtemp_56[6U] 
                                      << 0x00000010U)) 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[0x0000000eU]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[0U] 
        = ((((IData)((0x00000003ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4))))))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0U]) 
            | ((IData)((0x00000003ffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0U])) 
           | (((IData)((0x00000003ffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6))))))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[0U]) 
              | ((IData)((0x00000003ffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7))))))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[0U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[1U] 
        = ((((((IData)((0x00000003ffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                       >> 1U))))))) 
               << 2U) | (IData)(((0x00000003ffffffffULL 
                                  & (- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4)))))) 
                                 >> 0x00000020U))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[1U]) 
            | ((((IData)((0x00000003ffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                         >> 1U))))))) 
                 << 2U) | (IData)(((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5)))))) 
                                   >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[1U])) 
           | (((((IData)((0x00000003ffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                         >> 1U))))))) 
                 << 2U) | (IData)(((0x00000003ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6)))))) 
                                   >> 0x00000020U))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[1U]) 
              | ((((IData)((0x00000003ffffffffULL & 
                            (- (QData)((IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                   >> 1U))))))) 
                   << 2U) | (IData)(((0x00000003ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7)))))) 
                                     >> 0x00000020U))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[1U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[2U] 
        = (__Vtemp_33[2U] | __Vtemp_66[2U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[3U] 
        = (__Vtemp_33[3U] | __Vtemp_66[3U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[4U] 
        = (((__Vtemp_14[4U] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[4U]) 
            | (__Vtemp_30[4U] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[4U])) 
           | ((__Vtemp_47[4U] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[4U]) 
              | (__Vtemp_63[4U] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[4U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[5U] 
        = (__Vtemp_33[5U] | __Vtemp_66[5U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[6U] 
        = (((__Vtemp_14[6U] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[6U]) 
            | (__Vtemp_30[6U] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[6U])) 
           | ((__Vtemp_47[6U] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[6U]) 
              | (__Vtemp_63[6U] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[6U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[7U] 
        = (((__Vtemp_14[7U] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[7U]) 
            | (__Vtemp_30[7U] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[7U])) 
           | ((__Vtemp_47[7U] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[7U]) 
              | (__Vtemp_63[7U] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[7U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[8U] 
        = ((((((IData)((0x00000003ffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_4) 
                                                                       >> 8U))))))) 
               << 0x00000010U) | __Vtemp_14[8U]) & 
             vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[8U]) 
            | ((((IData)((0x00000003ffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_5) 
                                                                         >> 8U))))))) 
                 << 0x00000010U) | __Vtemp_30[8U]) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[8U])) 
           | (((((IData)((0x00000003ffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_6) 
                                                                         >> 8U))))))) 
                 << 0x00000010U) | __Vtemp_47[8U]) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[8U]) 
              | ((((IData)((0x00000003ffffffffULL & 
                            (- (QData)((IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_ctrl__DOT__accu_ctrl_ram_sel_7) 
                                                   >> 8U))))))) 
                   << 0x00000010U) | __Vtemp_63[8U]) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[8U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[9U] 
        = (__Vtemp_33[9U] | __Vtemp_66[9U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[0x0000000aU] 
        = (((__Vtemp_15[0x0000000aU] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x0000000aU]) 
            | (__Vtemp_31[0x0000000aU] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x0000000aU])) 
           | ((__Vtemp_48[0x0000000aU] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[0x0000000aU]) 
              | (__Vtemp_64[0x0000000aU] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[0x0000000aU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[0x0000000bU] 
        = (((__Vtemp_15[0x0000000bU] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x0000000bU]) 
            | (__Vtemp_31[0x0000000bU] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x0000000bU])) 
           | ((__Vtemp_48[0x0000000bU] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[0x0000000bU]) 
              | (__Vtemp_64[0x0000000bU] & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[0x0000000bU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[0x0000000cU] 
        = (__Vtemp_33[0x0000000cU] | __Vtemp_66[0x0000000cU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[0x0000000dU] 
        = (__Vtemp_33[0x0000000dU] | __Vtemp_66[0x0000000dU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[0x0000000eU] 
        = (__Vtemp_33[0x0000000eU] | __Vtemp_66[0x0000000eU]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[0x0000000fU] 
        = (((((__Vtemp_7[6U] >> 0x00000010U) | (__Vtemp_7[7U] 
                                                << 0x00000010U)) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x0000000fU]) 
            | (((__Vtemp_23[6U] >> 0x00000010U) | (
                                                   __Vtemp_23[7U] 
                                                   << 0x00000010U)) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x0000000fU])) 
           | ((((__Vtemp_40[6U] >> 0x00000010U) | (
                                                   __Vtemp_40[7U] 
                                                   << 0x00000010U)) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[0x0000000fU]) 
              | (((__Vtemp_56[6U] >> 0x00000010U) | 
                  (__Vtemp_56[7U] << 0x00000010U)) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[0x0000000fU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__abuf_rd_data_4_sft[0x00000010U] 
        = (((((__Vtemp_7[7U] >> 0x00000010U) | (__Vtemp_7[8U] 
                                                << 0x00000010U)) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_4[0x00000010U]) 
            | (((__Vtemp_23[7U] >> 0x00000010U) | (
                                                   __Vtemp_23[8U] 
                                                   << 0x00000010U)) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_5[0x00000010U])) 
           | ((((__Vtemp_40[7U] >> 0x00000010U) | (
                                                   __Vtemp_40[8U] 
                                                   << 0x00000010U)) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_6[0x00000010U]) 
              | (((__Vtemp_56[7U] >> 0x00000010U) | 
                  (__Vtemp_56[8U] << 0x00000010U)) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__abuf_rd_data_7[0x00000010U])));
}

void Vsim___024root___nba_comb__TOP__490(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__490\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[4U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[5U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[6U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[7U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[8U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[9U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x0000000aU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x0000000bU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x0000000cU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x0000000dU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x0000000eU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x0000000fU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x00000010U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[7U];
}

void Vsim___024root___nba_comb__TOP__491(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__491\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[4U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[5U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[6U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[7U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[8U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__r_nv_ram_rws_32x544__DOT__ram_Inst_32X288_0_0.__PVT__ITOP__DOT__dout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[9U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x0000000aU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x0000000bU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x0000000cU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x0000000dU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x0000000eU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x0000000fU] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x00000010U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[7U];
}

void Vsim___024root___nba_comb__TOP__492(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__492\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__addr_init 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_sg_running_d1)) 
           & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc_state)));
}

extern const VlWide<32>/*1023:0*/ Vsim__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<32>/*1023:0*/ Vsim__ConstPool__CONST_ha7258237_0;
extern const VlWide<32>/*1023:0*/ Vsim__ConstPool__CONST_h4ae1d737_0;

void Vsim___024root___nba_comb__TOP__493(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__493\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<32>/*1023:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_5;
    VlWide<32>/*1023:0*/ __Vtemp_7;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt_vld_w 
        = ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
               | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                   >> 0x00000010U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end)))) 
           & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                >> 0x0000000fU) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt_vld)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last_reg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d6) 
              & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                  >> 0x0000001aU) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_compressed_d1))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt_vld_w 
        = ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_group_end))) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_channel_end) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt_vld)));
    VL_SHIFTR_WWI(1024,1024,8, __Vtemp_1, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_data_d6, 
                  (0x000000ffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                                   >> 7U) - (0x0000007fU 
                                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_bit_remain)))));
    VL_SHIFTR_WWI(1024,1024,8, __Vtemp_2, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain, 
                  (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                                  >> 7U)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__stripe_cnt_w = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt_w = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt_w = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl_w = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4077 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4065 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[1U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[2U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[3U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[4U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[5U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[6U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[7U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[8U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[9U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000010U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000011U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000012U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000013U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000014U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000015U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000016U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000017U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000018U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000019U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_element_avl_w = 0U;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__stripe_cnt_w 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end)
                ? 0U : (0x0000001fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__stripe_cnt))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt_w 
            = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4064)
                ? 0U : (0x000001ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt_w 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_group_end)
                ? 0U : (0x00000fffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl_w 
            = (0x000000ffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4075)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl_last)
                               : (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl) 
                                   + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_valid)
                                       ? 0x80U : 0U)) 
                                  - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl_sub))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4077 
            = (0x000001ffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)
                               : (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain) 
                                   + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                                       ? 0x80U : 0U)) 
                                  - (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d6)))));
        if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4430) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4065 
                = (0x00000fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_bit_remain_last));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000fU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000010U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000010U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000011U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000011U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000012U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000012U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000013U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000013U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000014U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000014U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000015U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000015U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000016U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000016U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000017U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000017U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000018U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000018U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000019U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000019U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001fU];
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4065 
                = (0x00000fffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_bit_remain) 
                                   + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_valid_d6)
                                       ? 0x0400U : 0U)) 
                                  - ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d6)
                                      ? (0x000000ffU 
                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                                            >> 7U))
                                      : 0U)));
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p2_rd_valid_d6) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0U] 
                    = __Vtemp_1[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[1U] 
                    = __Vtemp_1[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[2U] 
                    = __Vtemp_1[2U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[3U] 
                    = __Vtemp_1[3U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[4U] 
                    = __Vtemp_1[4U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[5U] 
                    = __Vtemp_1[5U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[6U] 
                    = __Vtemp_1[6U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[7U] 
                    = __Vtemp_1[7U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[8U] 
                    = __Vtemp_1[8U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[9U] 
                    = __Vtemp_1[9U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000aU] 
                    = __Vtemp_1[0x0000000aU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000bU] 
                    = __Vtemp_1[0x0000000bU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000cU] 
                    = __Vtemp_1[0x0000000cU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000dU] 
                    = __Vtemp_1[0x0000000dU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000eU] 
                    = __Vtemp_1[0x0000000eU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000fU] 
                    = __Vtemp_1[0x0000000fU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000010U] 
                    = __Vtemp_1[0x00000010U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000011U] 
                    = __Vtemp_1[0x00000011U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000012U] 
                    = __Vtemp_1[0x00000012U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000013U] 
                    = __Vtemp_1[0x00000013U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000014U] 
                    = __Vtemp_1[0x00000014U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000015U] 
                    = __Vtemp_1[0x00000015U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000016U] 
                    = __Vtemp_1[0x00000016U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000017U] 
                    = __Vtemp_1[0x00000017U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000018U] 
                    = __Vtemp_1[0x00000018U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000019U] 
                    = __Vtemp_1[0x00000019U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001aU] 
                    = __Vtemp_1[0x0000001aU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001bU] 
                    = __Vtemp_1[0x0000001bU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001cU] 
                    = __Vtemp_1[0x0000001cU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001dU] 
                    = __Vtemp_1[0x0000001dU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001eU] 
                    = __Vtemp_1[0x0000001eU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001fU] 
                    = __Vtemp_1[0x0000001fU];
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0U] 
                    = __Vtemp_2[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[1U] 
                    = __Vtemp_2[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[2U] 
                    = __Vtemp_2[2U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[3U] 
                    = __Vtemp_2[3U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[4U] 
                    = __Vtemp_2[4U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[5U] 
                    = __Vtemp_2[5U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[6U] 
                    = __Vtemp_2[6U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[7U] 
                    = __Vtemp_2[7U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[8U] 
                    = __Vtemp_2[8U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[9U] 
                    = __Vtemp_2[9U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000aU] 
                    = __Vtemp_2[0x0000000aU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000bU] 
                    = __Vtemp_2[0x0000000bU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000cU] 
                    = __Vtemp_2[0x0000000cU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000dU] 
                    = __Vtemp_2[0x0000000dU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000eU] 
                    = __Vtemp_2[0x0000000eU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000fU] 
                    = __Vtemp_2[0x0000000fU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000010U] 
                    = __Vtemp_2[0x00000010U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000011U] 
                    = __Vtemp_2[0x00000011U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000012U] 
                    = __Vtemp_2[0x00000012U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000013U] 
                    = __Vtemp_2[0x00000013U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000014U] 
                    = __Vtemp_2[0x00000014U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000015U] 
                    = __Vtemp_2[0x00000015U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000016U] 
                    = __Vtemp_2[0x00000016U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000017U] 
                    = __Vtemp_2[0x00000017U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000018U] 
                    = __Vtemp_2[0x00000018U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000019U] 
                    = __Vtemp_2[0x00000019U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001aU] 
                    = __Vtemp_2[0x0000001aU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001bU] 
                    = __Vtemp_2[0x0000001bU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001cU] 
                    = __Vtemp_2[0x0000001cU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001dU] 
                    = __Vtemp_2[0x0000001dU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001eU] 
                    = __Vtemp_2[0x0000001eU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001fU] 
                    = __Vtemp_2[0x0000001fU];
            }
        }
        if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sub_h_total))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[0U] 
                = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p0);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[1U] 
                = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p0 
                           >> 0x00000020U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[2U] 
                = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p4);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[3U] 
                = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p4 
                           >> 0x00000020U));
        } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sub_h_total))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[0U] 
                = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p0);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[2U] 
                = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p5)) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p4))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[3U] 
                = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p5)) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p4))) 
                           >> 0x00000020U));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[0U] 
                = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p1 
                    << 0x00000010U) | (0x0000ffffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p0)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[1U] 
                = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4071) 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4424)) 
                    << 0x00000010U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4070) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4426)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[2U] 
                = (IData)((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4074) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4424)) 
                                              << 0x00000010U) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4073) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4426))))) 
                            << 0x00000020U) | (QData)((IData)(
                                                              ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p5 
                                                                << 0x00000010U) 
                                                               | (0x0000ffffU 
                                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p4)))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[3U] 
                = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4074) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4424)) 
                                               << 0x00000010U) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4073) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4426))))) 
                             << 0x00000020U) | (QData)((IData)(
                                                               ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p5 
                                                                 << 0x00000010U) 
                                                                | (0x0000ffffU 
                                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p4)))))) 
                           >> 0x00000020U));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_element_avl_w 
            = (0x000007ffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4431)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_element_avl_last)
                               : (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_element_avl) 
                                   + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_valid)
                                       ? 0x0400U : 0U)) 
                                  - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_element_avl_sub))));
    }
    VL_SHIFTR_WWI(1024,1024,11, __Vtemp_5, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d6, 
                  (0x000007f8U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d6) 
                                   - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain)) 
                                  << 3U)));
    VL_SHIFTR_WWI(1016,1016,11, __Vtemp_7, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain, 
                  (0x000007f8U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d6) 
                                  << 3U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0U] & 
           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
             ? Vsim__ConstPool__CONST_h4ae1d737_0[0U]
             : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                 & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0U]
                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_5[0U] : __Vtemp_7[0U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[1U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[1U] & 
           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
             ? Vsim__ConstPool__CONST_h4ae1d737_0[1U]
             : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                 & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[1U]
                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_5[1U] : __Vtemp_7[1U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[2U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[2U] & 
           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
             ? Vsim__ConstPool__CONST_h4ae1d737_0[2U]
             : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                 & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[2U]
                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_5[2U] : __Vtemp_7[2U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[3U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[3U] & 
           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
             ? Vsim__ConstPool__CONST_h4ae1d737_0[3U]
             : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                 & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[3U]
                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_5[3U] : __Vtemp_7[3U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[4U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[4U] & 
           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
             ? Vsim__ConstPool__CONST_h4ae1d737_0[4U]
             : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                 & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[4U]
                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_5[4U] : __Vtemp_7[4U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[5U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[5U] & 
           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
             ? Vsim__ConstPool__CONST_h4ae1d737_0[5U]
             : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                 & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[5U]
                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_5[5U] : __Vtemp_7[5U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[6U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[6U] & 
           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
             ? Vsim__ConstPool__CONST_h4ae1d737_0[6U]
             : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                 & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[6U]
                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_5[6U] : __Vtemp_7[6U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[7U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[7U] & 
           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
             ? Vsim__ConstPool__CONST_h4ae1d737_0[7U]
             : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                 & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[7U]
                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_5[7U] : __Vtemp_7[7U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[8U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[8U] & 
           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
             ? Vsim__ConstPool__CONST_h4ae1d737_0[8U]
             : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                 & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[8U]
                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_5[8U] : __Vtemp_7[8U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[9U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[9U] & 
           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
             ? Vsim__ConstPool__CONST_h4ae1d737_0[9U]
             : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                 & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[9U]
                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_5[9U] : __Vtemp_7[9U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000000aU] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x0000000aU] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x0000000aU]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000000aU]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x0000000aU] : __Vtemp_7[0x0000000aU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000000bU] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x0000000bU] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x0000000bU]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000000bU]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x0000000bU] : __Vtemp_7[0x0000000bU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000000cU] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x0000000cU] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x0000000cU]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000000cU]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x0000000cU] : __Vtemp_7[0x0000000cU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000000dU] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x0000000dU] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x0000000dU]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000000dU]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x0000000dU] : __Vtemp_7[0x0000000dU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000000eU] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x0000000eU] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x0000000eU]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000000eU]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x0000000eU] : __Vtemp_7[0x0000000eU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000000fU] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x0000000fU] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x0000000fU]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000000fU]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x0000000fU] : __Vtemp_7[0x0000000fU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000010U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x00000010U] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x00000010U]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000010U]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x00000010U] : __Vtemp_7[0x00000010U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000011U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x00000011U] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x00000011U]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000011U]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x00000011U] : __Vtemp_7[0x00000011U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000012U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x00000012U] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x00000012U]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000012U]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x00000012U] : __Vtemp_7[0x00000012U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000013U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x00000013U] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x00000013U]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000013U]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x00000013U] : __Vtemp_7[0x00000013U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000014U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x00000014U] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x00000014U]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000014U]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x00000014U] : __Vtemp_7[0x00000014U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000015U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x00000015U] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x00000015U]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000015U]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x00000015U] : __Vtemp_7[0x00000015U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000016U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x00000016U] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x00000016U]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000016U]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x00000016U] : __Vtemp_7[0x00000016U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000017U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x00000017U] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x00000017U]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000017U]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x00000017U] : __Vtemp_7[0x00000017U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000018U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x00000018U] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x00000018U]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000018U]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x00000018U] : __Vtemp_7[0x00000018U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x00000019U] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x00000019U] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x00000019U]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x00000019U]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x00000019U] : __Vtemp_7[0x00000019U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000001aU] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x0000001aU] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x0000001aU]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000001aU]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x0000001aU] : __Vtemp_7[0x0000001aU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000001bU] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x0000001bU] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x0000001bU]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000001bU]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x0000001bU] : __Vtemp_7[0x0000001bU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000001cU] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x0000001cU] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x0000001cU]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000001cU]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x0000001cU] : __Vtemp_7[0x0000001cU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000001dU] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x0000001dU] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x0000001dU]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000001dU]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x0000001dU] : __Vtemp_7[0x0000001dU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000001eU] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x0000001eU] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x0000001eU]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000001eU]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x0000001eU] : __Vtemp_7[0x0000001eU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_w[0x0000001fU] 
        = (Vsim__ConstPool__CONST_ha7258237_0[0x0000001fU] 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st)
               ? Vsim__ConstPool__CONST_h4ae1d737_0[0x0000001fU]
               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last)))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain_last[0x0000001fU]
                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                       ? __Vtemp_5[0x0000001fU] : __Vtemp_7[0x0000001fU]))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_st_w = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_st_w = 0U;
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_st_w 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_st) 
                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_wmb_entries)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_st_w 
            = (0x00000fffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_st_inc) 
                               >= ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__weight_bank) 
                                   << 8U)) ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_st_inc) 
                                              - ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__weight_bank) 
                                                 << 8U))
                               : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_st_inc)));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_st_w 
            = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_st));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_st_w 
            = (0x00000fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_st));
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__addr_init) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_addr_w 
            = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_entry_st_w));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr_w 
            = (0x00000fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_st_w));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_addr_w 
            = (0x000000ffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4431)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_addr_last)
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_addr) 
                                  + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_valid))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr_w 
            = (0x00000fffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4075)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr_last)
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_valid)
                                   ? (((0x00000fffU 
                                        & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr))) 
                                       == ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__weight_bank) 
                                           << 8U)) ? 0U
                                       : ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr)))
                                   : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr))));
    }
}

void Vsim___024root___nba_comb__TOP__494(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__494\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__required_valid_w 
        = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__cur_state)) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__status_update)) 
              & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_format)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_req_int))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wgs_data_onfly_sub 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_req_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wgs_pop_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT____VdfgRegularize_hc3606d62_0_0 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wgs_pop_ready)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_req_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_required_en 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__required_valid)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__required_valid_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ore 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT____VdfgRegularize_hc3606d62_0_0)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_req_p));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_required_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_required_en) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_format));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p_next_not_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ore)
            ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p_next_rd_popping))
            : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p_next_no_rd_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_enable 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p_next_not_0) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_req_p)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ore)));
}

extern const VlUnpacked<CData/*1:0*/, 512> Vsim__ConstPool__TABLE_hc4324424_0;

void Vsim___024root___nba_comb__TOP__495(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__495\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    __Vtableidx17 = ((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__last_skip_weight_rls) 
                         << 4U) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.weight_reuse)
                                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.weight_reuse)) 
                                    << 3U) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__last_data_bank) 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_data_bank)) 
                                               | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__last_weight_bank) 
                                                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_bank))) 
                                              << 2U))) 
                       | ((2U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                                 >> 1U)) | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__pending_req)) 
                                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__pending_req_d1)))) 
                      << 4U) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__status_done) 
                                  & (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__status_done_cnt))) 
                                 << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_fsm_switch) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__cur_state))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__nxt_state 
        = Vsim__ConstPool__TABLE_hc4324424_0[__Vtableidx17];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3654 = (
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__wt2status_done_d1)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__wt2status_state)));
}

void Vsim___024root___nba_comb__TOP__496(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__496\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__both_rod_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.rod_wr_rdy) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul.rod_wr_rdy));
}

void Vsim___024root___nba_comb__TOP__497(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__497\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__both_rod_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.rod_wr_rdy) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_mul.rod_wr_rdy));
}

void Vsim___024root___nba_comb__TOP__498(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__498\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__both_rod_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.rod_wr_rdy) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul.rod_wr_rdy));
}

void Vsim___024root___nba_comb__TOP__499(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__499\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_adr 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_take_thread_id_is_4))
            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2631)
                ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2632)
                         ? 0U : ((0x00000010U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__update_head)))
                                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data)
                                  : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__head4))))
            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2631)
                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2632)
                    ? ((8U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__update_head)))
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__head3))
                    : ((4U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__update_head)))
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__head2)))
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2632)
                    ? ((2U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__update_head)))
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__head1))
                    : ((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__update_head)))
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__head0)))));
}

void Vsim___024root___nba_comb__TOP__500(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__500\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd_adr 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd_take_thread_id_is_4))
            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2645)
                ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2646)
                         ? 0U : ((0x00000010U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__update_head)))
                                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data)
                                  : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__head4))))
            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2645)
                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2646)
                    ? ((8U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__update_head)))
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__head3))
                    : ((4U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__update_head)))
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__head2)))
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2646)
                    ? ((2U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__update_head)))
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__head1))
                    : ((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__update_head)))
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__head0)))));
}

void Vsim___024root___nba_comb__TOP__501(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__501\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_busy_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_pvld_in));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_reserving 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_busy_int)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_pvld_in));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_count) 
                 + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_reserving)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__odata_pvld_p 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__odata_count_p)) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_reserving));
}

void Vsim___024root___nba_comb__TOP__502(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__502\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_busy_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_pvld_in));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_reserving 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_busy_int)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_pvld_in));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_count) 
                 + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_reserving)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__odata_pvld_p 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__odata_count_p)) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_reserving));
}

void Vsim___024root___nba_comb__TOP__503(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__503\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__dma_wr_data_rdy 
        = (1U & ((0U != (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_omask_d) 
                                        >> 6U))) ? 
                 ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_busy_in)) 
                  & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_busy_in)))
                  : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__fill_half)
                      ? (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_busy_in))
                      : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_busy_in)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_col_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_vld) 
           & ((0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_ccnt))) 
              >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rd_total_colm)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_data_push 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dma_wr_data_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__dma_wr_data_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_ordy 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr) 
            != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wptr)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__dma_wr_data_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_data_push) 
           & ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__dma_wr_pd_mask)) 
              | ((~ (0U != (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_omask_d) 
                                           >> 6U)))) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__fill_half))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_data_push) 
           & ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__dma_wr_pd_mask)) 
              | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__fill_half)) 
                 & (~ (0U != (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_omask_d) 
                                             >> 6U)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_ordy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_pop 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_valid) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_ordy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_vld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim___024root___nba_comb__TOP__504(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__504\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_busy_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_pvld_in));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_reserving 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_busy_int)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_pvld_in));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_count) 
                 + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_reserving)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_pvld_p 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_count_p)) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_reserving));
}

void Vsim___024root___nba_comb__TOP__505(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__505\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_planar_num 
        = (0x0000001fU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_wr_channel) 
                           >= (0x0fU | ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_in_precision_drv0)) 
                                        << 4U))) ? 
                          (0x0fU | ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_in_precision_drv0)) 
                                    << 4U)) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_wr_channel)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_planar_num 
        = (0x0000001fU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_rd_channel) 
                           >= (0x0fU | ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_in_precision_drv0)) 
                                        << 4U))) ? 
                          (0x0fU | ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_in_precision_drv0)) 
                                    << 4U)) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_rd_channel)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__mc_rd_req_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_type) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__cv_rd_req_vld 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_type)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_vld) 
           & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_type) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p1__DOT__p1_pipe_rand_ready)) 
              | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_type)) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_pipe_rand_ready))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_rd_dx 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride) 
                          - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_wr_dx 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride) 
                          - ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_cnt) 
                             << 3U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__contract_lit_dx 
        = ((~ (0U != (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride) 
                            >> 3U)))) & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_9 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
           & ((0U != (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride) 
                            >> 3U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_accept)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_rd_width 
        = (0x00001fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_width) 
                          - ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_cnt) 
                             << 3U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_wr_width 
        = (0x00001fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_width) 
                          - ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_cnt) 
                             << 3U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_7) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt) 
              == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_planar_num)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__mc_rd_req_vld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p1__DOT__p1_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__mc_rd_req_vld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p1__DOT__p1_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p1__DOT__p1_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p1__DOT__p1_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p1__DOT__p1_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__cv_rd_req_vld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__cv_rd_req_vld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_2 
        = ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_accept));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_3 
        = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_accept));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_4 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_accept));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_num 
        = ((7U <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_wr_dx))
            ? 7U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_wr_dx));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_vld 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_7) 
            & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt))) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_9) 
               & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt))) 
              | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__contract_lit_dx) 
                  | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0))) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_accept))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__contract_rd_size 
        = ((7U <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_rd_width))
            ? 7U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_rd_width));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__split_rd_size 
        = ((0x003fU <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_rd_width))
            ? 0x003fU : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_rd_width));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__merge_rd_size 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_in_precision_drv0))
            ? ((0x0020U <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_rd_width))
                ? 1U : 0U) : ((0x0030U <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_rd_width))
                               ? 3U : ((0x0020U <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_rd_width))
                                        ? 2U : ((0x0010U 
                                                 <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_rd_width))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__merge_wr_size 
        = ((0x003fU <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_wr_width))
            ? 0x003fU : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_wr_width));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_num 
        = ((7U <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_wr_width))
            ? 7U : (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__remain_wr_width)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_mwdth_end 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_end) 
            | ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_accept))) 
           & ((0x000007ffU & ((IData)(8U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_cnt))) 
              >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__inwidthm)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_plar_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_3) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt) 
              == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_planar_num)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_vld 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_3) 
            & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt))) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_4) 
               & (0U == (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt)))) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_4) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride) 
              == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_pd[0U] 
        = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr 
                   << 5U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_pd[1U] 
        = (IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr 
                    << 5U) >> 0x00000020U));
    if ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_num 
            = (0x00003fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dataout_channel)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_pd[2U] 
            = (0x00007fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__contract_rd_size));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_num 
            = (0x00003fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_channel)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_pd[2U] 
            = (0x00007fffU & ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0))
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__split_rd_size)
                               : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__merge_rd_size)));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_hx_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_9) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt) 
              == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_num)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_mwdth_end 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_plar_end) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_2)) 
           & ((0x000007ffU & ((IData)(8U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_cnt))) 
              >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__inwidthm)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_cwdth_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_end) 
           & ((0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_cnt))) 
              >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__inwidthm)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_hx_end) 
           & ((7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_cnt))) 
              >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dx_stride_num)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_cwdth_end) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_y_stride) 
              == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_cwdth_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_end) 
           & ((0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_cnt))) 
              >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__inwidthm)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_height_end 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_end) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_mwdth_end)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_height) 
              == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_cwdth_end) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_mwdth_end));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_height_end 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_cwdth_end) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__contract_lit_dx) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_accept))) 
            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__inheight_mul_dy 
               == vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt)) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_mwdth_end) 
              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt 
                 == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_height))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_channel_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_height_end) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_cnt_inc) 
              >= (0x000003ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_num) 
                                  >> 4U) + (0U != (0x0000000fU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_num)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_channel_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_height_end) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_cnt_inc) 
              >= (0x000003ffU & ((0x000003ffU & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dataout_channel)) 
                                                 >> 4U)) 
                                 + (0U != (0x0000000fU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dataout_channel))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_ext 
        = (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_cur));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_inc 
        = (0x00000003ffffffffULL & (1ULL + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_cur))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_vld) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_mod 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_inc;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_new 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_mod;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_mod 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_new 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_ext;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_nxt 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_channel_end)
            ? 0ULL : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_new);
}

void Vsim___024root___nba_comb__TOP__506(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__506\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_busy_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_pvld_in));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_reserving 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_busy_int)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_pvld_in));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_count_next_no_wr_popping 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_count) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_reserving)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_busy_next 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_popping)) 
           & (0x0100U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_count_next_no_wr_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_count_next 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_popping)
                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_reserving)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_count)
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_count) 
                                  - (IData)(1U))) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_count_next_no_wr_popping)));
}

void Vsim___024root___nba_comb__TOP__507(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__507\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_popping 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_count_p)) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_pushing));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_count_p_next 
        = (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_popping)
                  ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_pushing)
                      ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_count_p)
                      : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_count_p) 
                         - (IData)(1U))) : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_count_p) 
                                            + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_pushing))));
}

void Vsim___024root___nba_sequent__TOP__1505(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1505\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_adr_next;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_adr = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_adr_next 
        = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_adr)));
}

void Vsim___024root___nba_sequent__TOP__1506(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1506\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_busy_in)) 
         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_req))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__ram__DOT__di_d 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_data;
    }
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vsim__ConstPool__TABLE_h70a16e19_0;
extern const VlUnpacked<CData/*6:0*/, 1024> Vsim__ConstPool__TABLE_h637ed2fd_0;

void Vsim___024root___nba_comb__TOP__508(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__508\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_ready 
        = (1U & ((~ (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_data 
                             >> 0x0000001bU))) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_cnt) 
                                                  >= 
                                                  (0x000001ffU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_impact_cnt) 
                                                      + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__batch_delta))))));
    __Vtableidx49 = ((0x000003f8U & ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_data 
                                              >> 0x00000011U)) 
                                     << 3U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_y_extension) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__is_img_d1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__mon_dat_stripe_img_length_w 
        = Vsim__ConstPool__TABLE_h70a16e19_0[__Vtableidx49];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_stripe_img_length_w 
        = Vsim__ConstPool__TABLE_h637ed2fd_0[__Vtableidx49];
}

extern const VlUnpacked<CData/*1:0*/, 512> Vsim__ConstPool__TABLE_hd955bcb9_0;

void Vsim___024root___nba_comb__TOP__509(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__509\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    // Body
    __Vtableidx46 = (((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_bank_change) 
                          | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__last_weight_bank) 
                             != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_weight_bank))) 
                         << 4U) | (((2U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                                           >> 1U)) 
                                    | ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__cur_state)) 
                                       & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_clr) 
                                              ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req))) 
                                          & (~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_clr) 
                                                ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req)))))) 
                                   << 2U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pkg_vld) 
                                               << 1U) 
                                              | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_req)) 
                                                  & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_req))) 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_push_empty) 
                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_push_empty))))) 
                      << 4U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__layer_done) 
                                 << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__dp2reg_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__cur_state))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__nxt_state 
        = Vsim__ConstPool__TABLE_hd955bcb9_0[__Vtableidx46];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_ready 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_req) 
           & (((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pop_cnt)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_ready)) 
              | ((3U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_data 
                                >> 0x0000001fU))) == 
                 (3U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_data 
                        >> 0x00000012U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_ready 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_req) 
            & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pop_cnt))) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_ready) 
              & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_req)) 
                 | ((3U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_data 
                                   >> 0x0000001fU))) 
                    != (3U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_data 
                              >> 0x00000012U))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req_w 
        = ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__nxt_state)) 
           | ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__nxt_state)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_req)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req_w 
        = ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__nxt_state)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_bank_change) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_clr_w 
        = (((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__cur_state)) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_ack)) 
           | ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__nxt_state)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_clr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_clr_w 
        = (((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__cur_state)) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_ack)) 
           | ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__nxt_state)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pending_clr)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4044 = (0x000001ffU 
                                                   & (((3U 
                                                        != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__cur_state)) 
                                                       & (3U 
                                                          == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__nxt_state)))
                                                       ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__flush_cycles)
                                                       : 
                                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__sg_dn_cnt) 
                                                       - (IData)(1U))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_ready) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_max_cycles 
            = (((1U >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_cycles)) 
                & (1U >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pop_cnt)))
                ? 2U : (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_cycles) 
                         > (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pop_cnt))
                         ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_cycles)
                         : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pop_cnt)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_popping 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_req;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_max_cycles = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_popping = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_cnt_dec 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_ready) 
            & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_data 
                       >> 0x0000001bU))) ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_impact_cnt)
            : 0U);
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_ready) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_max_cycles 
            = ((0x0aU > (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_stripe_length))
                ? 0x0aU : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_stripe_length));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_popping 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_req;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_max_cycles = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_popping = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_busy_next 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_popping)) 
           & (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count_next_no_wr_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT____VdfgRegularize_h196c53ff_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_popping) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__ram_we 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_reserving) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_popping)) 
              | (0U < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_popping) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_count_next 
                = (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_count));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count_next 
                = (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_count_next 
                = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_count) 
                         - (IData)(1U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count_next 
                = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_count_next 
            = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_count) 
                     + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_reserving)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count_next 
            = (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_cnt_w 
        = (0x000001ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_cnt) 
                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_cnt_add)) 
                          - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__credit_cnt_dec)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pop_cnt_w 
        = (0x0000003fU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_ready) 
                           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_ready))
                           ? (0x000000ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_max_cycles) 
                                              >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_max_cycles))
                                              ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_max_cycles) 
                                                 - (IData)(1U))
                                              : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_max_cycles) 
                                                 - (IData)(1U))))
                           : ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pop_cnt))
                               ? 0U : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pop_cnt) 
                                       - (IData)(1U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_busy_next 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_popping)) 
           & (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count_next_no_wr_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT____VdfgRegularize_h5cc6d539_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_popping) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__ram_we 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_reserving) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_popping)) 
              | (0U < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_popping) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_count_next 
                = (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_count));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count_next 
                = (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_count_next 
                = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_count) 
                         - (IData)(1U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count_next 
                = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_count_next 
            = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_count) 
                     + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_reserving)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count_next 
            = (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count_next_no_wr_popping));
    }
}

void Vsim___024root___nba_comb__TOP__510(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__510\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_adr 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2626)
            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2627)
                ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2628)
                         ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2629)
                                  ? ((0x00000200U & 
                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                                      ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head9))
                                  : ((0x00000100U & 
                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                                      ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head8)))))
            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2627)
                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2628)
                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2629)
                        ? ((0x00000080U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head7))
                        : ((0x00000040U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head6)))
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2629)
                        ? ((0x00000020U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head5))
                        : ((0x00000010U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head4))))
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2628)
                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2629)
                        ? ((8U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head3))
                        : ((4U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head2)))
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2629)
                        ? ((2U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head1))
                        : ((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__head0))))));
}

void Vsim___024root___nba_comb__TOP__511(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__511\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_adr 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2640)
            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2641)
                ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2642)
                         ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2643)
                                  ? ((0x00000200U & 
                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                                      ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head9))
                                  : ((0x00000100U & 
                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                                      ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head8)))))
            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2641)
                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2642)
                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2643)
                        ? ((0x00000080U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head7))
                        : ((0x00000040U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head6)))
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2643)
                        ? ((0x00000020U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head5))
                        : ((0x00000010U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head4))))
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2642)
                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2643)
                        ? ((8U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head3))
                        : ((4U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head2)))
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2643)
                        ? ((2U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head1))
                        : ((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__rd_take_n_dly) 
                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__update_head)))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__head0))))));
}

void Vsim___024root___nba_comb__TOP__512(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__512\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_rd_en_w 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_267) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_269) 
              | ((((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_rd_ch2ch3)) 
                   & ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_cur_ch)) 
                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3885))) 
                  | ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_cur_ch)) 
                     & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_rd_ch2ch3) 
                        & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__ch2_cnt))))) 
                 | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_rd_ch2ch3)) 
                     & ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_cur_ch)) 
                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3885))) 
                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_273) 
                       & ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__ch2_cnt)) 
                          & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__ch3_cnt))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cbuf_wr_hsel_w 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__is_w_cnt_div8) 
             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_w_cnt) 
                >> 2U)) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__is_w_cnt_div4) 
                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_w_cnt) 
                              >> 1U))) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__is_w_cnt_div2) 
                                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_w_cnt)) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_264)) 
                                          | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_263) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_280))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__idx_w_offset_add 
        = (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__is_w_cnt_div8)
                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_w_cnt) 
                              >> 3U) : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__is_w_cnt_div4)
                                         ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_w_cnt) 
                                            >> 2U) : 
                                        ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__is_w_cnt_div2)
                                          ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_w_cnt) 
                                             >> 1U)
                                          : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_w_cnt)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p1_rd_en_w 
        = ((~ (((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_cur_ch)) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_w_one_left) 
                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_263))) 
               | (((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_cur_ch)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_264)) 
                  | (((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_cur_ch)) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_data_shrink_w)) 
                     & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_ch_cnt) 
                         >> 2U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_rd_ch2ch3)))))) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_rd_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__ch3_cnt_sub 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_rd_en_w) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_273));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__ch0_rd_addr_cnt_reg_en 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_rd_ch2ch3)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_rd_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__ch1_cnt_sub 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_rd_en_w) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_rd_ch2ch3)) 
              & (2U <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_cur_ch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__ch2_cnt_sub 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_rd_en_w) 
           & ((3U <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_cur_ch)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__rsp_rd_ch2ch3)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cbuf_idx_inc 
        = (0x00001fffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__idx_base) 
                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__idx_grain_offset)) 
                          + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__idx_h_offset) 
                             + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__idx_w_offset_add))));
}

void Vsim___024root___nba_comb__TOP__513(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__513\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_vld) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_rd_mask) 
              >> 1U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_rd_mask));
}

void Vsim___024root___nba_comb__TOP__514(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__514\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_busy_in_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_busy_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_req_in));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_reserving 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_busy_int)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_req_in));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__we_f 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_adr)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_count_next_no_wr_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_count) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_reserving)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__use_buff_d_next 
        = ((((0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_adr_p) 
                             >> 1U)) == (0x0000003fU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__buff_wa) 
                                            >> 1U))) 
            & ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__buff_wa)) 
               >= (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_adr_p)))) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_reserving) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_enable) 
                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_adr_p) 
                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_adr)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_busy_next 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_popping)) 
           & (0x80U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_count_next_no_wr_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_count_next 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_popping)
                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_reserving)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_count)
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_count) 
                                  - (IData)(1U))) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_count_next_no_wr_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__re_f 
        = ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__use_buff_d_next) 
               | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_adr_p) 
                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__did_re_f)))) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_enable));
}

void Vsim___024root___nba_comb__TOP__515(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__515\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_303;
    __VdfgRegularize_h6e95ff9d_0_303 = 0;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_req 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_valid_d2) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_req_rdy) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_dummy_d2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_ready_d2 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_busy_in)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_req_rdy) 
              | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_dummy_d2) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_valid_d2))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_req_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_req_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_ram_type));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_req_vld 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_ram_type)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_req_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_di 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_w_set_di) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_sub_w_cnt) 
              == (0x00001ff8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_width))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__wg_en) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cur_state)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_ready_d1 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_valid_d2)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_ready_d2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_valid_d2_w 
        = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cur_state)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_valid_d1) 
              | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_ready_d2)) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_valid_d2))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_req_vld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_req_vld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_size 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_lp)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__last_lp)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_rp)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__last_rp)
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_di)
                                   ? ((IData)(1U) + 
                                      (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_width)))
                                   : 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_sub_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_lp) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_di) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_rp)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_sub_cube_cnt_w 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
            | (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_sub_cube_cnt)))
            ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_sub_cube_cnt))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_298 = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
                                                   | (3U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_sub_h_cnt)))
                                                   ? 0U
                                                   : 
                                                  (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_sub_h_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_surf_cnt_w 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_surf))
            ? 0U : (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_surf_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_y_std_cnt_w 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_y_std))
            ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_y_std_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_w_set_cnt_w 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_w_set))
            ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_w_set_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_x_std_cnt_w 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_rsp_last_x_std))
            ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_x_std_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_width_cnt_w 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_rsp_last_width))
            ? 0U : (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_width_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_y_std_cnt_w 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_rsp_last_y_std))
            ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_y_std_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_surf_cnt_w 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_rsp_last_surf))
            ? 0U : (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_surf_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_h_ext_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_325) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_rsp_last_surf)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_rsp_done_w 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st)) 
           & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_en_d1) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_layer_done_d1)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_rsp_done)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_valid_d1_w 
        = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cur_state)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_valid) 
              | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_ready_d1)) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_valid_d1))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_adv 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_valid) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_valid_d1)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_ready_d1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_sub_w_cnt_w 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_sub_w))
            ? 0U : (0x00001fffU & ((IData)(8U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_sub_w_cnt))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_done_w 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st)) 
           & ((((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_sub_h_cnt)) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_sub_w)) 
               & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_w_set) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_y_std)) 
                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_surf) 
                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_h_ext)))) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_done)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_width 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_sub_w) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_w_set));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_300 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_adv) 
                                                  & (3U 
                                                     == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_sub_h_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_sub_h_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_adv));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3869 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_width) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_sub_h_cnt)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_h_ext_cnt_w = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_h_ext_cnt_w = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_311 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_320 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_321 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_326 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_327 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_319 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_304 
            = (0x0000ffffU & (0x00007fffU & (- ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                 ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.pad_top)
                                                 : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.pad_top)))));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_h_ext_cnt_w 
            = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_h_ext_cnt)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_h_ext_cnt_w 
            = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_h_ext_cnt)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_311 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_line)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_320 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rd_sub_cnt)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_321 
            = ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rd_cube_cnt));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_326 
            = (0x00001fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_addr_offset) 
                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__data_entries)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_327 
            = (0x00001fffU & ((7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_sub_cube_cnt))
                               ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_rsp_last_x_std)
                                   ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_rsp_last_width)
                                       ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_rsp_last_y_std)
                                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_rsp_last_surf)
                                               ? 0U
                                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_ch_surf_base) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_data_shrink_d1)
                                                       ? 
                                                      VL_SHIFTL_III(12,12,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__data_width_ext), 1U)
                                                       : 
                                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_data_normal_d1)
                                                        ? 
                                                       VL_SHIFTL_III(12,12,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__data_width_ext), 2U)
                                                        : 
                                                       VL_SHIFTL_III(12,12,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__data_width_ext), 3U))))))
                                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_ch_y_std_base) 
                                              + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_data_shrink_d1)
                                                  ? 
                                                 ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__h_ext_surf) 
                                                  << 1U)
                                                  : 
                                                 ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_data_normal_d1)
                                                   ? 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__h_ext_surf) 
                                                      << 2U))
                                                   : 
                                                  (0x00000ff8U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__h_ext_surf) 
                                                      << 3U))))))
                                       : ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_ch_w_base)))
                                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_ch_x_std_base) 
                                      + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_data_shrink_d1)
                                          ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__w_ext_surf) 
                                             << 1U)
                                          : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_data_normal_d1)
                                              ? (0x00000ffcU 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__w_ext_surf) 
                                                    << 2U))
                                              : (0x00000ff8U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__w_ext_surf) 
                                                    << 3U))))))
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_ch_offset) 
                                  + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__data_width_ext))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_319 
            = (0x0000001fU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_avl_cube) 
                               + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_cube_inc_en_d1)
                                   ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_cube_inc_size_d1)
                                   : 0U)) - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_avl_cube_sub)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_304 
            = (0x0000ffffU & ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_sub_h_cnt))
                               ? (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_width)) 
                                   & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_sub_h_cnt)))
                                   ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__h_coord_sub_h)
                                   : (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_y_std)) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3869))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__h_coord_sub_h))
                                       : ((((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_surf)) 
                                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_y_std)) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3869))
                                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__h_coord_surf)
                                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__h_coord_surf) 
                                              + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__conv_y_stride) 
                                                 << 2U)))))
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__h_coord) 
                                  + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__conv_y_stride))));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_301 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_300) 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_sub_w));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_302 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_301) 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_w_set));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_y_std_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_302));
    __VdfgRegularize_h6e95ff9d_0_303 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_302) 
                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_y_std));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_surf_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_303));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_h_ext_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__layer_st) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_303) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_last_surf)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_cbuf_ready_w 
        = ((~ ((2U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cur_state)) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_h_ext_en))) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_cbuf_ready) 
              | ((0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__data_entries_add) 
                                 + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__wg_entry_onfly))) 
                 <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_free_entries))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3872 = (
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_req_done)) 
                                                   & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_cbuf_ready)) 
                                                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_cbuf_ready_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__wg_entry_onfly_add 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3872)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__data_entries)
            : 0U);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__wg_entry_onfly_w 
        = (0x00000fffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__wg_entry_onfly) 
                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__wg_entry_onfly_add)) 
                          - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__wg_entry_onfly_sub)));
}

void Vsim___024root___nba_comb__TOP__516(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__516\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_00 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_00) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_00) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_00)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_01 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_01) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_00) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_01)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_02 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_02) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_00) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_02)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_03 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_03) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_00) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_03)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_00 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_00) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_00) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_00)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_01 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_01) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_00) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_01)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_02 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_02) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_00) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_02)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_03 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_03) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_00) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_03)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_04 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_04) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_04) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_04)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_05 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_05) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_04) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_05)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_06 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_06) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_04) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_06)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_07 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_07) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_04) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_07)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_04 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_04) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_04) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_04)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_05 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_05) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_04) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_05)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_06 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_06) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_04) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_06)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_07 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_07) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_04) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_07)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_08 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_08) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_08) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_08)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_09 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_09) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_08) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_09)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_10 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_10) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_08) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_10)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_11 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_11) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_08) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_11)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_08 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_08) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_08) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_08)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_09 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_09) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_08) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_09)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_10 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_10) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_08) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_10)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_11 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_11) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_08) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_11)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_12 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_12) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_12) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_12)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_13 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_13) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_12) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_13)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_14 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_14) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_12) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_14)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_15 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_15) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_rd_sel_12) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_15)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_12 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_12) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_12) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_12)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_13 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_13) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_12) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_13)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_14 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_14) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_12) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_14)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_15 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_15) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_rd_sel_12) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_15)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_00 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_00) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_00));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_01 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_01) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_01));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_02 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_02) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_02));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_03 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_03) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_03));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_04 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_04) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_04));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_05 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_05) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_05));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_06 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_06) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_06));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_07 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_07) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_07));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_08 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_08) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_08));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_09 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_09) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_09));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_10 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_10) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_10));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_11 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_11) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_11));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_12 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_12) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_12));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_13 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_13) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_13));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_14 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_14) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_14));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_15 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_15) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p1_re_15));
}

void Vsim___024root___nba_comb__TOP__517(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__517\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__re_q)
             : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__ram_Inst_64X10__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__ram_Inst_64X10__DOT__WD));
}

void Vsim___024root___nba_comb__TOP__518(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__518\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__WA 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ig2cq_adr));
}

void Vsim___024root___nba_comb__TOP__519(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__519\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__we_q))))
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__wr_reserving));
}

void Vsim___024root___nba_comb__TOP__520(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__520\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__19__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (0x13U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__18__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (0x12U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__17__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (0x11U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__16__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__15__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (0x0fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__14__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (0x0eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__13__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (0x0dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__12__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (0x0cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__11__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (0x0bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__10__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (0x0aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__9__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__8__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__7__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__6__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__5__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__4__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__3__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__2__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__1__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__0__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WA)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row19_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__19__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row19_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row18_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__18__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row18_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row17_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__17__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row17_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row16_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__16__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row16_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row15_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__15__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row15_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row14_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__14__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row14_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row13_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__13__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row13_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row12_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__12__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row12_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row11_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__11__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row11_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row10_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__10__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row10_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row9_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__9__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row9_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row8_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__8__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row8_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row7_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__7__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row7_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row6_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__6__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row6_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row5_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__5__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row5_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row4_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__4__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row4_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row3_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__3__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row3_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row2_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__2__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row2_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row1_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__1__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row1_0_288)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row0_0_288_d 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__Wa_decode_0_288__BRA__0__KET__)
                  ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                     >> 0x0000001aU) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__FlopArray_row0_0_288)));
}

extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_h9a2fc1c8_0;
extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_h52851b67_0;

void Vsim___024root___nba_comb__TOP__521(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__521\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<9>/*287:0*/ __Vtemp_2;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000120U, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a)) {
        if ((0x13U >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__ra_lat))) {
            __Vtemp_2[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__ra_lat][0U];
            __Vtemp_2[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__ra_lat][1U];
            __Vtemp_2[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__ra_lat][2U];
            __Vtemp_2[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__ra_lat][3U];
            __Vtemp_2[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__ra_lat][4U];
            __Vtemp_2[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__ra_lat][5U];
            __Vtemp_2[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__ra_lat][6U];
            __Vtemp_2[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__ra_lat][7U];
            __Vtemp_2[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__ra_lat][8U];
        } else {
            __Vtemp_2[0U] = Vsim__ConstPool__CONST_h9a2fc1c8_0[0U];
            __Vtemp_2[1U] = Vsim__ConstPool__CONST_h9a2fc1c8_0[1U];
            __Vtemp_2[2U] = Vsim__ConstPool__CONST_h9a2fc1c8_0[2U];
            __Vtemp_2[3U] = Vsim__ConstPool__CONST_h9a2fc1c8_0[3U];
            __Vtemp_2[4U] = Vsim__ConstPool__CONST_h9a2fc1c8_0[4U];
            __Vtemp_2[5U] = Vsim__ConstPool__CONST_h9a2fc1c8_0[5U];
            __Vtemp_2[6U] = Vsim__ConstPool__CONST_h9a2fc1c8_0[6U];
            __Vtemp_2[7U] = Vsim__ConstPool__CONST_h9a2fc1c8_0[7U];
            __Vtemp_2[8U] = Vsim__ConstPool__CONST_h9a2fc1c8_0[8U];
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT____Vlvbound_ha108f860__0 
            = ((1U & (~ (((0x011fU >= (0x000001ffU 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a)) 
                          && (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__collision_ff[
                                    (0x0000000fU & 
                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a 
                                      >> 5U))] >> (0x0000001fU 
                                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a)))) 
                         | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__ra_lat) 
                              == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__wa_lat)) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__weclk)) 
                            & ((0x011fU >= (0x000001ffU 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a)) 
                               && (1U & (Vsim__ConstPool__CONST_h52851b67_0[
                                         (0x0000000fU 
                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a 
                                             >> 5U))] 
                                         >> (0x0000001fU 
                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a)))))))) 
               && ((0x011fU >= (0x000001ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a)) 
                   && (1U & (__Vtemp_2[(0x0000000fU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a 
                                           >> 5U))] 
                             >> (0x0000001fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a)))));
        if (VL_LIKELY(((0x011fU >= (0x000001ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[(0x0000000fU 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a))) 
                    & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[
                    (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a 
                                    >> 5U))]) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT____Vlvbound_ha108f860__0) 
                                                 << 
                                                 (0x0000001fU 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a 
            = ((IData)(1U) + vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__io__DOT__a);
    }
}

void Vsim___024root___nba_comb__TOP__522(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__522\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__channel_up_cnt_inc 
        = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__channel_up_cnt) 
                          + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_conv_mode)
                              ? 4U : 0x40U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_reuse_release 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4056) 
           & (((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_data_reuse)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_data_reuse))) 
               | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__last_mode) 
                  != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__cur_mode))) 
              & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__last_slices))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__is_last_channel 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__channel_up_cnt_inc) 
           >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__weight_channel));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__cur_channel 
        = (0x0000007fU & ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__is_last_channel)) 
                                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__is_winograd_d1)))
                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_conv_mode)
                               ? 4U : 0x40U) : ((IData)(1U) 
                                                + (0x0000003fU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_weight_channel_ext)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pkg_channel_end_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__is_last_block) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__is_last_channel));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__op_do_h_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__is_img_d1) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__op_channel_en) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__is_last_channel) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__is_last_stripe))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__op_stripe_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__op_channel_en) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__is_last_channel));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pkg_group_end_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pkg_channel_end_w) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4440));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__op_group_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__op_stripe_en) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4440));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_release 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__op_s_en) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_skip_weight_rls)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pkg_group_end_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pkg_layer_end_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pkg_group_end_w) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__is_last_group));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__op_layer_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__op_group_en) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__is_last_group));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_release 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__op_s_en) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_skip_data_rls)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__pkg_layer_end_w)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4057 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_pending_req)
                                                    ? 0U
                                                    : 
                                                   (0x00003fffU 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__slices_avl) 
                                                        + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_slice_avl_add)) 
                                                       - 
                                                       (0x00000fffU 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_release)
                                                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__rls_slices)
                                                            : 
                                                           ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__dat_reuse_release)
                                                             ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__last_slices)
                                                             : 0U))))));
}

void Vsim___024root___nba_comb__TOP__523(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__523\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_cnt_w 
        = (0x00003fffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_stripe_end) 
                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dl_pd 
                                 >> 0x0000001cU))) ? 
                          ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_conv_mode)
                            ? 0U : (- ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer)
                                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pad_top)
                                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pad_top))))
                           : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4410)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_ori)
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_w_end)
                                   ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_cnt) 
                                      + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__conv_y_stride))
                                   : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_h_cnt)))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt_w 
            = (0x00003fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt_st));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_cnt_w 
            = (0x00001fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cmp_w) 
                              - (IData)(1U)));
    } else if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4410) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt_w 
            = (0x00003fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_ori));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_cnt_w 
            = (0x00001fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_ori));
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_w_end) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt_w 
            = (0x00003fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt_st));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_cnt_w 
            = (0x00001fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cmp_w) 
                              - (IData)(1U)));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt_w 
            = (0x00003fffU & (0x00007fffU & ((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1)
                                              ? ((IData)(2U) 
                                                 + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt))
                                              : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__datain_w_cnt) 
                                                 + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__conv_x_stride)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_cnt_w 
            = (0x00001fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dataout_w_cnt) 
                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_cmp_g1)));
    }
}

void Vsim___024root___nba_sequent__TOP__1507(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1507\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_sel_w)) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_pvld))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_sel 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_sel_w;
        } else if (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_sel_w)) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_pvld))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_sel = 0U;
        }
        if (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_sel_w)) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_pvld))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_sel 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_sel_w;
        } else if (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_sel_w)) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_pvld))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_sel = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_sel = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_sel = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_b_sel_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sc2mac_out_a_sel_w)));
}

void Vsim___024root___nba_comb__TOP__524(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__524\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__spt2cvt_dat_ready) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__gnt_busy 
        = (1U & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__arb2spt_cmd_ready) 
                     & (1U >= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__arb2spt_dat_count)))) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__sticky)));
}

void Vsim___024root___nba_comb__TOP__525(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__525\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving) 
           & ((0U == (7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])) 
              & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_credits)) 
                 & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_credit)) 
                    & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly)) 
                       | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid0_0_vld))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving) 
           & ((1U == (7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])) 
              & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_credits)) 
                 & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_credit) 
                        >> 1U)) & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                                       >> 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid1_0_vld))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving) 
           & ((2U == (7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])) 
              & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_credits)) 
                 & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_credit) 
                        >> 2U)) & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                                       >> 2U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid2_0_vld))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving) 
           & ((3U == (7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])) 
              & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd3_credits)) 
                 & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_credit) 
                        >> 3U)) & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                                       >> 3U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid3_0_vld))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving) 
           & ((4U == (7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])) 
              & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd4_credits)) 
                 & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_credit) 
                        >> 4U)) & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                                       >> 4U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid4_0_vld))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid0_0_vld) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_bypassing0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing0) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly)) 
              & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid0_2_vld)) 
                 | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid0_1_vld)) 
                    | (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_prdy_d)) 
                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid0_0_vld) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid0_1_vld))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid1_0_vld) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_bypassing1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing1) 
           & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                  >> 1U)) & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid1_2_vld)) 
                             | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid1_1_vld)) 
                                | (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_prdy_d)) 
                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid1_0_vld) 
                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid1_1_vld))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid2_0_vld) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_bypassing2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing2) 
           & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                  >> 2U)) & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid2_2_vld)) 
                             | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid2_1_vld)) 
                                | (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_prdy_d)) 
                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid2_0_vld) 
                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid2_1_vld))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd3_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid3_0_vld) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_bypassing3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing3) 
           & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                  >> 3U)) & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid3_2_vld)) 
                             | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid3_1_vld)) 
                                | (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd3_prdy_d)) 
                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid3_0_vld) 
                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid3_1_vld))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd4_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid4_0_vld) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_bypassing4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pre_bypassing4) 
           & ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_n_dly) 
                  >> 4U)) & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid4_2_vld)) 
                             | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid4_1_vld)) 
                                | (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd4_prdy_d)) 
                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid4_0_vld) 
                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_skid4_1_vld))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_eg__DOT__cq_vld 
        = (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_pvld)) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_prdy)) 
           | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_pvld)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_prdy)) 
              | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_pvld)) 
                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_prdy)) 
                 | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd3_pvld)) 
                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd3_prdy)) 
                    | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd4_pvld)) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd4_prdy))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing 
        = ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_bypassing0) 
               | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_bypassing1) 
                  | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_bypassing2) 
                     | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_bypassing3) 
                        | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_bypassing4)))))) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask[7U];
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (1U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfffffffeU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (2U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfffffffdU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (4U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfffffffbU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (8U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfffffff7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00000010U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xffffffefU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00000020U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xffffffdfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00000040U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xffffffbfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00000080U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xffffff7fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00000100U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfffffeffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00000200U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfffffdffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x0aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00000400U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x0aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfffffbffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x0bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00000800U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x0bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfffff7ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x0cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00001000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x0cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xffffefffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x0dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00002000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x0dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xffffdfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x0eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00004000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x0eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xffffbfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x0fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00008000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x0fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xffff7fffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x10U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00010000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x10U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfffeffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x11U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00020000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x11U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfffdffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x12U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00040000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x12U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfffbffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x13U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00080000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x13U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfff7ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x14U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00100000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x14U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xffefffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x15U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00200000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x15U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xffdfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x16U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00400000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x16U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xffbfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x17U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x00800000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x17U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xff7fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x18U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x01000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x18U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfeffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x19U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x02000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x19U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfdffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x1aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x04000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x1aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xfbffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x1bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x08000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x1bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xf7ffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x1cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x10000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x1cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xefffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x1dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x20000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x1dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xdfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x1eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x40000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x1eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0xbfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x1fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x80000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x1fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U] 
            = (0x7fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[0U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x20U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (1U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x20U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfffffffeU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x21U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (2U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x21U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfffffffdU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x22U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (4U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x22U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfffffffbU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x23U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (8U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x23U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfffffff7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x24U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00000010U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x24U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xffffffefU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x25U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00000020U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x25U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xffffffdfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x26U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00000040U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x26U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xffffffbfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x27U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00000080U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x27U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xffffff7fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x28U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00000100U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x28U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfffffeffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x29U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00000200U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x29U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfffffdffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x2aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00000400U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x2aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfffffbffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x2bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00000800U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x2bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfffff7ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x2cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00001000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x2cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xffffefffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x2dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00002000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x2dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xffffdfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x2eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00004000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x2eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xffffbfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x2fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00008000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x2fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xffff7fffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x30U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00010000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x30U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfffeffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x31U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00020000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x31U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfffdffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x32U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00040000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x32U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfffbffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x33U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00080000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x33U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfff7ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x34U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00100000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x34U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xffefffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x35U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00200000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x35U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xffdfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x36U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00400000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x36U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xffbfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x37U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x00800000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x37U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xff7fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x38U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x01000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x38U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfeffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x39U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x02000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x39U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfdffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x3aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x04000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x3aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xfbffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x3bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x08000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x3bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xf7ffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x3cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x10000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x3cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xefffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x3dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x20000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x3dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xdfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x3eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x40000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x3eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0xbfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x3fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x80000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x3fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U] 
            = (0x7fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[1U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x40U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (1U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x40U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfffffffeU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x41U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (2U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x41U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfffffffdU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x42U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (4U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x42U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfffffffbU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x43U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (8U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x43U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfffffff7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x44U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00000010U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x44U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xffffffefU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x45U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00000020U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x45U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xffffffdfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x46U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00000040U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x46U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xffffffbfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x47U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00000080U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x47U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xffffff7fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x48U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00000100U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x48U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfffffeffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x49U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00000200U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x49U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfffffdffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x4aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00000400U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x4aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfffffbffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x4bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00000800U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x4bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfffff7ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x4cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00001000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x4cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xffffefffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x4dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00002000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x4dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xffffdfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x4eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00004000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x4eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xffffbfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x4fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00008000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x4fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xffff7fffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x50U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00010000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x50U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfffeffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x51U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00020000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x51U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfffdffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x52U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00040000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x52U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfffbffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x53U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00080000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x53U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfff7ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x54U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00100000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x54U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xffefffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x55U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00200000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x55U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xffdfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x56U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00400000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x56U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xffbfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x57U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x00800000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x57U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xff7fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x58U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x01000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x58U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfeffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x59U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x02000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x59U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfdffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x5aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x04000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x5aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xfbffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x5bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x08000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x5bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xf7ffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x5cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x10000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x5cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xefffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x5dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x20000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x5dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xdfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x5eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x40000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x5eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0xbfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x5fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x80000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x5fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U] 
            = (0x7fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x60U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (1U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x60U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfffffffeU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x61U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (2U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x61U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfffffffdU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x62U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (4U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x62U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfffffffbU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x63U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (8U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x63U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfffffff7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x64U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00000010U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x64U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xffffffefU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x65U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00000020U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x65U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xffffffdfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x66U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00000040U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x66U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xffffffbfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x67U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00000080U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x67U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xffffff7fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x68U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00000100U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x68U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfffffeffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x69U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00000200U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x69U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfffffdffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x6aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00000400U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x6aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfffffbffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x6bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00000800U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x6bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfffff7ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x6cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00001000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x6cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xffffefffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x6dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00002000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x6dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xffffdfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x6eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00004000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x6eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xffffbfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x6fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00008000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x6fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xffff7fffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x70U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00010000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x70U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfffeffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x71U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00020000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x71U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfffdffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x72U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00040000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x72U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfffbffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x73U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00080000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x73U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfff7ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x74U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00100000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x74U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xffefffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x75U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00200000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x75U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xffdfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x76U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00400000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x76U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xffbfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x77U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x00800000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x77U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xff7fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x78U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x01000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x78U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfeffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x79U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x02000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x79U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfdffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x7aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x04000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x7aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xfbffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x7bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x08000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x7bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xf7ffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x7cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x10000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x7cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xefffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x7dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x20000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x7dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xdfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x7eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x40000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x7eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0xbfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x7fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x80000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x7fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U] 
            = (0x7fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[3U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x80U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (1U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x80U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfffffffeU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x81U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (2U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x81U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfffffffdU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x82U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (4U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x82U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfffffffbU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x83U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (8U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x83U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfffffff7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x84U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00000010U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x84U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xffffffefU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x85U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00000020U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x85U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xffffffdfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x86U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00000040U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x86U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xffffffbfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x87U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00000080U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x87U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xffffff7fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x88U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00000100U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x88U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfffffeffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x89U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00000200U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x89U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfffffdffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x8aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00000400U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x8aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfffffbffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x8bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00000800U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x8bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfffff7ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x8cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00001000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x8cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xffffefffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x8dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00002000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x8dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xffffdfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x8eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00004000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x8eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xffffbfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x8fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00008000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x8fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xffff7fffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x90U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00010000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x90U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfffeffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x91U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00020000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x91U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfffdffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x92U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00040000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x92U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfffbffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x93U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00080000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x93U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfff7ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x94U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00100000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x94U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xffefffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x95U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00200000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x95U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xffdfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x96U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00400000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x96U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xffbfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x97U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x00800000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x97U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xff7fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x98U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x01000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x98U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfeffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x99U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x02000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x99U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfdffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x9aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x04000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x9aU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xfbffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x9bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x08000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x9bU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xf7ffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x9cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x10000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x9cU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xefffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x9dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x20000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x9dU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xdfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x9eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x40000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x9eU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0xbfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0x9fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x80000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0x9fU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U] 
            = (0x7fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[4U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xa0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (1U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xa0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfffffffeU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xa1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (2U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xa1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfffffffdU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xa2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (4U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xa2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfffffffbU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xa3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (8U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xa3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfffffff7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xa4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00000010U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xa4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xffffffefU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xa5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00000020U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xa5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xffffffdfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xa6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00000040U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xa6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xffffffbfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xa7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00000080U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xa7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xffffff7fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xa8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00000100U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xa8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfffffeffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xa9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00000200U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xa9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfffffdffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xaaU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00000400U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xaaU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfffffbffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xabU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00000800U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xabU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfffff7ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xacU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00001000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xacU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xffffefffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xadU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00002000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xadU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xffffdfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xaeU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00004000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xaeU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xffffbfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xafU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00008000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xafU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xffff7fffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xb0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00010000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xb0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfffeffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xb1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00020000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xb1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfffdffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xb2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00040000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xb2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfffbffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xb3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00080000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xb3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfff7ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xb4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00100000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xb4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xffefffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xb5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00200000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xb5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xffdfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xb6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00400000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xb6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xffbfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xb7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x00800000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xb7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xff7fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xb8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x01000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xb8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfeffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xb9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x02000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xb9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfdffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xbaU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x04000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xbaU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xfbffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xbbU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x08000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xbbU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xf7ffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xbcU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x10000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xbcU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xefffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xbdU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x20000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xbdU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xdfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xbeU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x40000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xbeU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0xbfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xbfU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x80000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xbfU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U] 
            = (0x7fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[5U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xc0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (1U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xc0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfffffffeU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xc1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (2U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xc1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfffffffdU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xc2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (4U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xc2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfffffffbU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xc3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (8U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xc3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfffffff7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xc4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00000010U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xc4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xffffffefU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xc5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00000020U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xc5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xffffffdfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xc6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00000040U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xc6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xffffffbfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xc7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00000080U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xc7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xffffff7fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xc8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00000100U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xc8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfffffeffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xc9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00000200U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xc9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfffffdffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xcaU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00000400U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xcaU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfffffbffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xcbU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00000800U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xcbU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfffff7ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xccU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00001000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xccU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xffffefffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xcdU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00002000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xcdU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xffffdfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xceU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00004000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xceU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xffffbfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xcfU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00008000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xcfU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xffff7fffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xd0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00010000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xd0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfffeffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xd1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00020000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xd1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfffdffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xd2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00040000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xd2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfffbffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xd3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00080000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xd3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfff7ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xd4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00100000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xd4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xffefffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xd5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00200000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xd5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xffdfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xd6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00400000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xd6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xffbfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xd7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x00800000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xd7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xff7fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xd8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x01000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xd8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfeffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xd9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x02000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xd9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfdffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xdaU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x04000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xdaU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xfbffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xdbU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x08000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xdbU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xf7ffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xdcU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x10000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xdcU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xefffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xddU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x20000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xddU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xdfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xdeU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x40000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xdeU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0xbfffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xdfU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x80000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xdfU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U] 
            = (0x7fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[6U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xe0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (1U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xe0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7ffffffeU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xe1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (2U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xe1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7ffffffdU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xe2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (4U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xe2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7ffffffbU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xe3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (8U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xe3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7ffffff7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xe4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00000010U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xe4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7fffffefU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xe5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00000020U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xe5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7fffffdfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xe6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00000040U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xe6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7fffffbfU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xe7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00000080U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xe7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7fffff7fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xe8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00000100U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xe8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7ffffeffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xe9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00000200U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xe9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7ffffdffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xeaU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00000400U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xeaU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7ffffbffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xebU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00000800U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xebU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7ffff7ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xecU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00001000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xecU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7fffefffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xedU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00002000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xedU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7fffdfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xeeU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00004000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xeeU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7fffbfffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xefU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00008000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xefU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7fff7fffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xf0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00010000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xf0U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7ffeffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xf1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00020000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xf1U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7ffdffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xf2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00040000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xf2U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7ffbffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xf3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00080000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xf3U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7ff7ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xf4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00100000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xf4U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7fefffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xf5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00200000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xf5U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7fdfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xf6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00400000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xf6U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7fbfffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xf7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x00800000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xf7U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7f7fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xf8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x01000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xf8U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7effffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xf9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x02000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xf9U])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7dffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xfaU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x04000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xfaU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x7bffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xfbU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x08000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xfbU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x77ffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xfcU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x10000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xfcU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x6fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xfdU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x20000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xfdU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x5fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly) 
         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_0
         [0xfeU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x40000000U | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT____VdfgBinToOneHot_Tab_h2dd61af6_0_1
                [0xfeU])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U] 
            = (0x3fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__free_adr_mask_next[7U]);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pushing0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
           & (0U == (7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pushing1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
           & (1U == (7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pushing2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
           & (2U == (7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pushing3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
           & (3U == (7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pushing4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
           & (4U == (7U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_count_next_no_wr_popping 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_wr_count) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_enable 
        = ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])
            ? ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U] 
                   >> 1U)) & ((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U]) 
                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                                 & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count4)))))
            : ((2U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])
                ? ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])
                    ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                       & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count3)))
                    : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                       & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count2))))
                : ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__cmd_vld_pd[0U])
                    ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                       & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count1)))
                    : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing) 
                       & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count0))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_count0_next 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pushing0)
                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take0)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count0)
                               : ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count0)))
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count0) 
                              - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take0))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_count1_next 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pushing1)
                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take1)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count1)
                               : ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count1)))
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count1) 
                              - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take1))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_count2_next 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pushing2)
                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take2)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count2)
                               : ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count2)))
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count2) 
                              - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take2))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_count3_next 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pushing3)
                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take3)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count3)
                               : ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count3)))
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count3) 
                              - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take3))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_count4_next 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_pushing4)
                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take4)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count4)
                               : ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count4)))
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_count4) 
                              - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take4))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_count_next 
        = (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly)
                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_wr_count)
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_wr_count) 
                                  - (IData)(1U))) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_count_next_no_wr_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_count_next_is_256 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly)) 
           & (0x0100U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_count_next_no_wr_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__E 
        = ((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__rd_take_dly)) 
             | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_take_elig))) 
            | (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_credit))) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_wr_busy_int) 
              != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_count_next_is_256)));
}

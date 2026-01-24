// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_sequent__TOP__834(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__834\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim___024root___nba_comb__TOP__41(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__41\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_pushing 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT____Vcellout__NV_AFIFO_wr_pushing_sync2__DST_Q) 
             << 2U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT____Vcellout__NV_AFIFO_wr_pushing_sync1__DST_Q) 
                        << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT____Vcellout__NV_AFIFO_wr_pushing_sync0__DST_Q))) 
           != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_pushing_gray_cntr));
}

void Vsim___024root___nba_sequent__TOP__835(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__835\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_busy_next));
}

extern const VlUnpacked<CData/*2:0*/, 128> Vsim__ConstPool__TABLE_hbddb2eae_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vsim__ConstPool__TABLE_h6ee694b7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hfad8ee96_0;

void Vsim___024root___nba_sequent__TOP__836(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__836\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr;
    __Vtableidx3 = (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping)
                                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping) 
                                            << 2U) 
                                           | (((0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__src_dat_gnts)) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx3])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_count 
            = Vsim__ConstPool__TABLE_h6ee694b7_0[__Vtableidx3];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx3])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__spt_dat_vld 
            = Vsim__ConstPool__TABLE_hfad8ee96_0[__Vtableidx3];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx3])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_pvld_int 
            = Vsim__ConstPool__TABLE_hfad8ee96_0[__Vtableidx3];
    }
}

void Vsim___024root___nba_sequent__TOP__837(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__837\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr;
    __Vtableidx4 = (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping)
                                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping) 
                                            << 2U) 
                                           | (((0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__src_dat_gnts)) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx4])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_count 
            = Vsim__ConstPool__TABLE_h6ee694b7_0[__Vtableidx4];
    }
    if ((2U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx4])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__spt_dat_vld 
            = Vsim__ConstPool__TABLE_hfad8ee96_0[__Vtableidx4];
    }
    if ((4U & Vsim__ConstPool__TABLE_hbddb2eae_0[__Vtableidx4])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_pvld_int 
            = Vsim__ConstPool__TABLE_hfad8ee96_0[__Vtableidx4];
    }
}

void Vsim___024root___nba_comb__TOP__42(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__42\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_pushing 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT____Vcellout__NV_AFIFO_wr_pushing_sync1__DST_Q) 
             << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT____Vcellout__NV_AFIFO_wr_pushing_sync0__DST_Q)) 
           != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_pushing_gray_cntr));
}

void Vsim___024root___nba_sequent__TOP__838(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__838\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__op_done_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__op_done_wr_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__rd_popping));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__op_done_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__wr_count_next_is_4));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__rd_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__op_done_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__rd_adr_next_popping;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__op_done_rd_adr = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__op_done_rd_adr)));
}

void Vsim___024root___nba_sequent__TOP__839(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__839\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_falcon_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_busy_next));
}

void Vsim___024root___nba_sequent__TOP__840(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__840\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__intr_fifo_rd_pvld_int_o 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__rd_req_next_o));
}

void Vsim___024root___nba_sequent__TOP__841(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__841\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__st2gate_slcg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__st2csb_idle))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__ld2gate_slcg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__ld2csb_idle))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_prdy_d 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_rsp_complete));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_busy_in 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_pvld)
                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_busy_next)
                : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_pvld_in) 
                   & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_reserving)) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_busy_next)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_pvld_in 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_pvld_in;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_rsp_complete 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_rdy 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_id) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_wr_rsp_complete) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_pending))) 
           | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_id)) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_wr_rsp_complete) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_pending))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_rdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_vld)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT____VdfgRegularize_h17cef6fc_0_2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_rsp_complete) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_raw_rdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_vld)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_rdy)));
}

void Vsim___024root___nba_sequent__TOP__842(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__842\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__u_NV_NVDLA_SDP_WDMA_DAT_DMAIF_intr_fifo__DOT__intr_fifo_rd_pvld_int_o 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__u_NV_NVDLA_SDP_WDMA_DAT_DMAIF_intr_fifo__DOT__rd_req_next_o));
}

void Vsim___024root___nba_sequent__TOP__843(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__843\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__intr_fifo_rd_pvld_int_o 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__rd_req_next_o));
}

void Vsim___024root___nba_comb__TOP__43(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__43\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_clk_dft_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_clk_wr_dft_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__dft_rst_gated_clk 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_clk_strict_rcv_gated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_clk_rcv_gate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_clk_strict_rcv_gated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_clk_rcv_gate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_clk_rd_mgated_strict_snd_gated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_clk_rd_mgated_snd_gate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_clk_rd_mgated_strict_snd_gated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_clk_rd_mgated_snd_gate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_clk_wr_mgated_strict_snd_gated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_clk_wr_mgated_snd_gate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_clk_wr_mgated_strict_snd_gated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_clk_wr_mgated_snd_gate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__la_bist_clkw0 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__nvdla_core_clk_mgated_skid 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__nvdla_core_clk_rd_mgate_skid__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__nvdla_core_clk_mgated_skid 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__nvdla_core_clk_rd_mgate_skid__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__nvdla_core_clk_mgated_skid 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__nvdla_core_clk_rd_mgate_skid__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__nvdla_core_clk_mgated_skid 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__nvdla_core_clk_rd_mgate_skid__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_clk_rd_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_clk_rd_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_clk_wr_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_clk_wr_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_clk_rd_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__rd_clk_rd_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_clk_wr_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_clk_wr_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_wdma 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_slcg_wdma__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_slcg_wdma__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_0 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_slcg_op_0__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_slcg_op_2__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__nvdla_gated_clk 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_gate__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_0 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_slcg_op_0__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_2 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_slcg_op_2__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_slcg_op_1__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__nvdla_op_gated_clk_1 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_slcg_op_1__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__nvdla_op_gated_clk_2 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_slcg_op_2__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_mux 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_slcg_mux__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_cvt 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_slcg_cvt__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__nvdla_op_gated_clk_0 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_slcg_op_0__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_slcg_wt__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_slcg_buffer__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__nvdla_gated_clk 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_gate__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__u_NV_NVDLA_SDP_WDMA_DAT_DMAIF_intr_fifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__u_NV_NVDLA_SDP_WDMA_DAT_DMAIF_intr_fifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__nvdla_gated_clk 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_gate__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__nvdla_gated_ecore_clk 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_gate__DOT__nvdla_core_clk_slcg_2__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_slcg_dc__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wg 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_slcg_wg__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_img 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_slcg_img__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__gated_clk_core_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__clk) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim___024root___nba_sequent__TOP__844(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__844\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__mbist_ce_r0_0_0_1p = 0U;
}

void Vsim___024root___nba_sequent__TOP__845(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__845\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__updateDR_sync = 0U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__updateDR_sync));
}

void Vsim___024root___nba_sequent__TOP__846(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__846\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim___024root___nba_sequent__TOP__847(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__847\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int_o 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__rd_req_next_o));
}

void Vsim___024root___nba_sequent__TOP__848(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__848\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim___024root___nba_sequent__TOP__849(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__849\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__updateDR_sync = 0U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__updateDR_sync));
}

void Vsim___024root___nba_sequent__TOP__850(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__850\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim___024root___nba_sequent__TOP__851(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__851\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT____VdfgRegularize_h398ac72f_0_1 
        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT____VdfgRegularize_hf04f37a5_0_1 
        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT____VdfgRegularize_h9492617c_0_1 
        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT____VdfgRegularize_h9ce5183e_0_1 
        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim___024root___nba_sequent__TOP__852(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__852\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim___024root___nba_sequent__TOP__853(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__853\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim___024root___nba_sequent__TOP__854(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__854\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim___024root___nba_sequent__TOP__855(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__855\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim___024root___nba_sequent__TOP__856(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__856\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
}

void Vsim___024root___nba_sequent__TOP__857(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__857\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim___024root___nba_sequent__TOP__858(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__858\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim___024root___nba_sequent__TOP__859(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__859\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_busy_next));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_popping));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_req_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_req_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT____VdfgRegularize_h9ecdb5ec_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_req_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_req_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_req_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_adr_next 
        = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__860(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__860\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim___024root___nba_sequent__TOP__861(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__861\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
}

void Vsim___024root___nba_sequent__TOP__862(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__862\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim___024root___nba_sequent__TOP__863(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__863\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
}

void Vsim___024root___nba_sequent__TOP__864(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__864\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__dma_fifo_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__dma_fifo_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__dma_fifo_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_dfifo__DOT__wr_count_next_is_4));
}

void Vsim___024root___nba_sequent__TOP__865(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__865\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__spt_fifo_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__spt_fifo_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__spt_fifo_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_count_next_is_4));
}

void Vsim___024root___nba_sequent__TOP__866(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__866\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo0__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo0__DOT__pfifo_wr_count))
            ? 3U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo0__DOT__pfifo_rd_adr));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo0__DOT__pfifo_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo0__DOT__pfifo_wr_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo0__DOT__pfifo_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo0__DOT__pfifo_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo0__DOT____VdfgRegularize_h5f819b07_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo0__DOT__pfifo_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo0__DOT__wr_count_next_is_3));
}

void Vsim___024root___nba_sequent__TOP__867(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__867\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo1__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo1__DOT__pfifo_wr_count))
            ? 3U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo1__DOT__pfifo_rd_adr));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo1__DOT__pfifo_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo1__DOT__pfifo_wr_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo1__DOT__pfifo_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo1__DOT__pfifo_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo1__DOT____VdfgRegularize_h5f819b07_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo1__DOT__pfifo_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo1__DOT__wr_count_next_is_3));
}

void Vsim___024root___nba_sequent__TOP__868(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__868\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo2__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo2__DOT__pfifo_wr_count))
            ? 3U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo2__DOT__pfifo_rd_adr));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo2__DOT__pfifo_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo2__DOT__pfifo_wr_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo2__DOT__pfifo_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo2__DOT__pfifo_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo2__DOT____VdfgRegularize_h5f819b07_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo2__DOT__pfifo_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo2__DOT__wr_count_next_is_3));
}

void Vsim___024root___nba_sequent__TOP__869(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__869\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo3__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo3__DOT__pfifo_wr_count))
            ? 3U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo3__DOT__pfifo_rd_adr));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo3__DOT__pfifo_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo3__DOT__pfifo_wr_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo3__DOT__pfifo_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo3__DOT__pfifo_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo3__DOT____VdfgRegularize_h5f819b07_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo3__DOT__pfifo_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo3__DOT__wr_count_next_is_3));
}

void Vsim___024root___nba_sequent__TOP__870(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__870\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim___024root___nba_sequent__TOP__871(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__871\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_count))
            ? 4U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_rd_adr));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__wr_count_next_is_4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT____VdfgRegularize_h1e1273f2_0_2)));
}

void Vsim___024root___nba_sequent__TOP__872(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__872\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_count))
            ? 4U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_rd_adr));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__wr_count_next_is_4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT____VdfgRegularize_h1e1273f2_0_2)));
}

void Vsim___024root___nba_sequent__TOP__873(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__873\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_wr_count))
            ? 4U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_rd_adr));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_wr_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__wr_count_next_is_4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT____VdfgRegularize_h1e1273f2_0_2)));
}

void Vsim___024root___nba_sequent__TOP__874(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__874\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_wr_count))
            ? 4U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_rd_adr));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_wr_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__wr_count_next_is_4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT____VdfgRegularize_h1e1273f2_0_2)));
}

void Vsim___024root___nba_sequent__TOP__875(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__875\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_in_count))
            ? 8U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_out_adr));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_in_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_in_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_in_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__wr_count_next_is_8));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_out_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_out_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT____VdfgRegularize_h7d56882e_0_2)));
}

void Vsim___024root___nba_sequent__TOP__876(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__876\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_count_next_is_32));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT____VdfgRegularize_h5bed58b6_0_1)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_pvld_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping)
                    ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping))
                    : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping)));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_pvld_p = 0U;
    }
}

void Vsim___024root___nba_sequent__TOP__877(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__877\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__ig2cq_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__ig2cq_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__ig2cq_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__wr_count_next_is_16));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT____VdfgRegularize_hf194c145_0_1)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_pvld_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping)
                    ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping))
                    : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping)));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_adr_next_popping 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_adr)));
}

void Vsim___024root___nba_comb__TOP__44(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__44\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__re_0_0_q));
}

void Vsim___024root___nba_comb__TOP__45(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__45\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__access_en_r 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__re_q));
}

void Vsim___024root___nba_comb__TOP__46(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__46\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__access_en_r 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__re_q));
}

void Vsim___024root___nba_comb__TOP__47(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__47\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__access_en_r 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__re_q));
}

void Vsim___024root___nba_comb__TOP__48(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__48\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__access_en_r 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__re_q));
}

void Vsim___024root___nba_comb__TOP__49(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__49\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__access_en_r 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__re_q));
}

void Vsim___024root___nba_comb__TOP__50(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__50\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__access_en_r 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__re_q));
}

void Vsim___024root___nba_comb__TOP__51(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__51\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__access_en_r 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__re_q));
}

void Vsim___024root___nba_comb__TOP__52(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__52\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__access_en_r 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__re_q));
}

void Vsim___024root___nba_comb__TOP__53(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__53\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__re_q));
}

void Vsim___024root___nba_comb__TOP__54(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__54\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<8>/*255:0*/ __Vtemp_24;
    // Body
    __Vtemp_24[0U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                          >> 7U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_7[0U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_6[0U])) 
                      | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                             >> 5U)))) 
                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_5[0U]) 
                          | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 4U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_4[0U])) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 3U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_3[0U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                  >> 2U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_2[0U]) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                >> 1U)))) 
                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_1[0U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5)))) 
                                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_0[0U]))))));
    __Vtemp_24[1U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                          >> 7U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_7[1U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_6[1U])) 
                      | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                             >> 5U)))) 
                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_5[1U]) 
                          | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 4U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_4[1U])) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 3U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_3[1U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                  >> 2U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_2[1U]) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                >> 1U)))) 
                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_1[1U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5)))) 
                                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_0[1U]))))));
    __Vtemp_24[2U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                          >> 7U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_7[2U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_6[2U])) 
                      | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                             >> 5U)))) 
                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_5[2U]) 
                          | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 4U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_4[2U])) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 3U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_3[2U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                  >> 2U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_2[2U]) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                >> 1U)))) 
                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_1[2U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5)))) 
                                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_0[2U]))))));
    __Vtemp_24[3U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                          >> 7U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_7[3U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_6[3U])) 
                      | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                             >> 5U)))) 
                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_5[3U]) 
                          | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 4U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_4[3U])) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 3U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_3[3U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                  >> 2U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_2[3U]) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                >> 1U)))) 
                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_1[3U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5)))) 
                                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_0[3U]))))));
    __Vtemp_24[4U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                          >> 7U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_7[4U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_6[4U])) 
                      | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                             >> 5U)))) 
                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_5[4U]) 
                          | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 4U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_4[4U])) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 3U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_3[4U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                  >> 2U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_2[4U]) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                >> 1U)))) 
                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_1[4U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5)))) 
                                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_0[4U]))))));
    __Vtemp_24[5U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                          >> 7U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_7[5U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_6[5U])) 
                      | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                             >> 5U)))) 
                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_5[5U]) 
                          | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 4U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_4[5U])) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 3U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_3[5U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                  >> 2U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_2[5U]) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                >> 1U)))) 
                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_1[5U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5)))) 
                                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_0[5U]))))));
    __Vtemp_24[6U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                          >> 7U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_7[6U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_6[6U])) 
                      | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                             >> 5U)))) 
                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_5[6U]) 
                          | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 4U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_4[6U])) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 3U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_3[6U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                  >> 2U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_2[6U]) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                >> 1U)))) 
                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_1[6U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5)))) 
                                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_0[6U]))))));
    __Vtemp_24[7U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                          >> 7U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_7[7U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_6[7U])) 
                      | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                             >> 5U)))) 
                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_5[7U]) 
                          | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 4U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_4[7U])) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                               >> 3U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_3[7U]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                  >> 2U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_2[7U]) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5) 
                                                >> 1U)))) 
                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_1[7U]) 
                                  | ((- (IData)((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5)))) 
                                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_data_0[7U]))))));
    if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_cvt_en))) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_out_int8) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d5) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0U] 
                    = __Vtemp_24[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[1U] 
                    = __Vtemp_24[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[2U] 
                    = __Vtemp_24[2U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[3U] 
                    = __Vtemp_24[3U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[4U] 
                    = __Vtemp_24[4U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[5U] 
                    = __Vtemp_24[5U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[6U] 
                    = __Vtemp_24[6U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[7U] 
                    = __Vtemp_24[7U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[8U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[8U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[9U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[9U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000aU] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000aU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000bU] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000bU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000cU] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000cU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000dU] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000dU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000eU] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000eU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000fU] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000fU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000010U] 
                    = __Vtemp_24[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000011U] 
                    = __Vtemp_24[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000012U] 
                    = __Vtemp_24[2U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000013U] 
                    = __Vtemp_24[3U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000014U] 
                    = __Vtemp_24[4U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000015U] 
                    = __Vtemp_24[5U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000016U] 
                    = __Vtemp_24[6U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000017U] 
                    = __Vtemp_24[7U];
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[1U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[2U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[2U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[3U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[3U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[4U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[4U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[5U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[5U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[6U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[6U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[7U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[7U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[8U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[8U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[9U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[9U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000aU] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000aU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000bU] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000bU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000cU] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000cU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000dU] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000dU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000eU] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000eU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000fU] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000fU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000010U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000011U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000012U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[2U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000013U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[3U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000014U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[4U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000015U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[5U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000016U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[6U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000017U] 
                    = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3129[7U];
            }
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000018U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000019U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b[0x0000000fU];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x0000000fU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000010U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x00000010U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000011U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x00000011U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000012U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x00000012U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000013U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x00000013U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000014U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x00000014U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000015U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x00000015U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000016U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x00000016U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000017U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x00000017U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000018U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x00000018U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000019U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x00000019U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x0000001aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x0000001bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x0000001cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x0000001dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x0000001eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_16b[0x0000001fU];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000000fU];
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_bypass_sel_half_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000010U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000011U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000012U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000013U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000014U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000015U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000016U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000017U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000018U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000019U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000000fU];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000010U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x00000010U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000011U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x00000011U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000012U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x00000012U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000013U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x00000013U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000014U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x00000014U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000015U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x00000015U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000016U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x00000016U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000017U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x00000017U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000018U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x00000018U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000019U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x00000019U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000001aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000001bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000001cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000001dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000001eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_data_d1[0x0000001fU];
        }
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b_masked[0U] 
        = ((((0x0000ff00U & (((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                                             >> 0x00000018U))
                               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_3.__VdfgRegularize_h6e95ff9d_0_3197)) 
                             << 8U)) | (0x000000ffU 
                                        & ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                                                  >> 0x00000010U))
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_2.__VdfgRegularize_h6e95ff9d_0_3196)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                                                    >> 8U))
                                                 : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_1.__VdfgRegularize_h6e95ff9d_0_3195)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U]
                                                  : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0.__VdfgRegularize_h6e95ff9d_0_3194)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b_masked[1U] 
        = ((((0x0000ff00U & (((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                                             >> 0x00000018U))
                               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_7.__VdfgRegularize_h6e95ff9d_0_3201)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000040U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                                                  >> 0x00000010U))
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_6.__VdfgRegularize_h6e95ff9d_0_3200)))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00000020U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                                                    >> 8U))
                                                 : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_5.__VdfgRegularize_h6e95ff9d_0_3199)) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00000010U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U]
                                                  : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_4.__VdfgRegularize_h6e95ff9d_0_3198)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b_masked[2U] 
        = ((((0x0000ff00U & (((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                                             >> 0x00000018U))
                               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_11.__VdfgRegularize_h6e95ff9d_0_3205)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000400U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                                                  >> 0x00000010U))
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_10.__VdfgRegularize_h6e95ff9d_0_3204)))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00000200U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                                                    >> 8U))
                                                 : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_9.__VdfgRegularize_h6e95ff9d_0_3203)) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00000100U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U]
                                                  : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_8.__VdfgRegularize_h6e95ff9d_0_3202)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b_masked[3U] 
        = ((((0x0000ff00U & (((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                                             >> 0x00000018U))
                               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_15.__VdfgRegularize_h6e95ff9d_0_3209)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00004000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                                                  >> 0x00000010U))
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_14.__VdfgRegularize_h6e95ff9d_0_3208)))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00002000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                                                    >> 8U))
                                                 : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_13.__VdfgRegularize_h6e95ff9d_0_3207)) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00001000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U]
                                                  : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_12.__VdfgRegularize_h6e95ff9d_0_3206)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b_masked[4U] 
        = ((((0x0000ff00U & (((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                                             >> 0x00000018U))
                               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_19.__VdfgRegularize_h6e95ff9d_0_3213)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00040000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                                                  >> 0x00000010U))
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_18.__VdfgRegularize_h6e95ff9d_0_3212)))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00020000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                                                    >> 8U))
                                                 : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_17.__VdfgRegularize_h6e95ff9d_0_3211)) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00010000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U]
                                                  : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__VdfgRegularize_h6e95ff9d_0_3210)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b_masked[5U] 
        = ((((0x0000ff00U & (((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                                             >> 0x00000018U))
                               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_23.__VdfgRegularize_h6e95ff9d_0_3217)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00400000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                                                  >> 0x00000010U))
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_22.__VdfgRegularize_h6e95ff9d_0_3216)))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00200000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                                                    >> 8U))
                                                 : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_21.__VdfgRegularize_h6e95ff9d_0_3215)) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00100000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U]
                                                  : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_20.__VdfgRegularize_h6e95ff9d_0_3214)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b_masked[6U] 
        = ((((0x0000ff00U & (((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                                             >> 0x00000018U))
                               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_27.__VdfgRegularize_h6e95ff9d_0_3221)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x04000000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                                                  >> 0x00000010U))
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_26.__VdfgRegularize_h6e95ff9d_0_3220)))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x02000000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                                                    >> 8U))
                                                 : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_25.__VdfgRegularize_h6e95ff9d_0_3219)) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x01000000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U]
                                                  : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_24.__VdfgRegularize_h6e95ff9d_0_3218)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_data_cell_8b_masked[7U] 
        = ((((0x0000ff00U & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U] 
                               >> 0x0000001fU) ? ((
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                                                   << 8U) 
                                                  | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                                                     >> 0x00000018U))
                               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_31.__VdfgRegularize_h6e95ff9d_0_3225)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x40000000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                                                  >> 0x00000010U))
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_30.__VdfgRegularize_h6e95ff9d_0_3224)))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x20000000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                                                    >> 8U))
                                                 : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_29.__VdfgRegularize_h6e95ff9d_0_3223)) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x10000000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U]
                                                  : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_28.__VdfgRegularize_h6e95ff9d_0_3222)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3669[0U] 
        = ((((0x0000ff00U & (((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3669[1U] 
        = ((((0x0000ff00U & (((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[1U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[1U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000040U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[1U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[1U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00000020U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[1U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[1U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00000010U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[1U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3669[2U] 
        = ((((0x0000ff00U & (((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[2U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[2U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000400U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[2U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[2U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00000200U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[2U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[2U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00000100U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[2U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3669[3U] 
        = ((((0x0000ff00U & (((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[3U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[3U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00004000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[3U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[3U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00002000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[3U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[3U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00001000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[3U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3669[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3669[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3669[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3669[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[4U] 
        = ((((0x0000ff00U & (((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[4U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[4U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00040000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[4U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[4U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00020000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[4U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[4U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00010000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[4U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[5U] 
        = ((((0x0000ff00U & (((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[5U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[5U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00400000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[5U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[5U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00200000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[5U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[5U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00100000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[5U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[6U] 
        = ((((0x0000ff00U & (((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[6U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[6U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x04000000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[6U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[6U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x02000000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[6U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[6U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x01000000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[6U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[7U] 
        = ((((0x0000ff00U & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U] 
                               >> 0x0000001fU) ? ((
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                                                   << 8U) 
                                                  | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                                                     >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[7U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[7U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x40000000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[7U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[7U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x20000000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[7U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[7U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x10000000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[7U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[6U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[7U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[8U] 
        = ((((0x0000ff00U & (((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[8U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[8U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[8U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[8U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[8U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[8U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[8U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[8U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[8U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[8U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[8U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[8U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[8U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[8U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[9U] 
        = ((((0x0000ff00U & (((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[9U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[9U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[9U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[9U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000040U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[9U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[9U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[9U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[9U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00000020U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[9U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[9U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[9U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[9U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00000010U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[9U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[9U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[0x0000000aU] 
        = ((((0x0000ff00U & (((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000aU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000aU] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000aU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000aU] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000400U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000aU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000aU] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000aU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000aU] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00000200U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000aU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000aU] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000aU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000aU] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00000100U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000aU]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000aU]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[0x0000000bU] 
        = ((((0x0000ff00U & (((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000bU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000bU] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000bU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000bU] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00004000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000bU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000bU] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000bU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000bU] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00002000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000bU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000bU] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000bU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000bU] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00001000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000bU]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000bU]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[6U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[7U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[8U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[8U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[9U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000aU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[0x0000000aU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000bU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[0x0000000bU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000cU] 
        = ((((0x0000ff00U & (((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000cU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000cU] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000cU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000cU] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00040000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000cU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000cU] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000cU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000cU] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00020000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000cU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000cU] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000cU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000cU] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00010000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000cU]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000cU]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000dU] 
        = ((((0x0000ff00U & (((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000dU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000dU] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000dU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000dU] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00400000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000dU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000dU] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000dU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000dU] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00200000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000dU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000dU] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000dU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000dU] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00100000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000dU]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000dU]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000eU] 
        = ((((0x0000ff00U & (((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000eU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000eU] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000eU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000eU] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x04000000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000eU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000eU] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000eU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000eU] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x02000000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000eU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000eU] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000eU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000eU] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x01000000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000eU]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000eU]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000fU] 
        = ((((0x0000ff00U & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U] 
                               >> 0x0000001fU) ? ((
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000fU] 
                                                   << 8U) 
                                                  | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000fU] 
                                                     >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000fU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000fU] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x40000000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000fU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000fU] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000fU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000fU] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x20000000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000fU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000fU] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000fU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000fU] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x10000000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000fU]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000000fU]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[6U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[7U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[8U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[8U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[9U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x0000000aU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000aU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x0000000bU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000bU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x0000000cU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000cU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x0000000dU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000dU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x0000000eU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000eU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x0000000fU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000fU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x00000010U] 
        = ((((0x0000ff00U & (((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000010U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000010U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000010U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000010U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000010U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000010U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000010U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000010U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000010U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000010U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000010U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000010U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000010U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000010U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x00000011U] 
        = ((((0x0000ff00U & (((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000011U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000011U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000011U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000011U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000040U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000011U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000011U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000011U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000011U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00000020U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000011U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000011U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000011U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000011U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00000010U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000011U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000011U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x00000012U] 
        = ((((0x0000ff00U & (((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000012U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000012U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000012U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000012U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000400U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000012U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000012U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000012U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000012U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00000200U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000012U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000012U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000012U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000012U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00000100U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000012U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000012U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x00000013U] 
        = ((((0x0000ff00U & (((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000013U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000013U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000013U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000013U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00004000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000013U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000013U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000013U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000013U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00002000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000013U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000013U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000013U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000013U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00001000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000013U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000013U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[6U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[7U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[8U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[8U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[9U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x0000000aU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x0000000aU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x0000000bU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x0000000bU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x0000000cU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x0000000cU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x0000000dU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x0000000dU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x0000000eU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x0000000eU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x0000000fU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x0000000fU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000010U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x00000010U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000011U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x00000011U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000012U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x00000012U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000013U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x00000013U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000014U] 
        = ((((0x0000ff00U & (((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000014U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000014U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000014U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000014U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00040000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000014U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000014U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000014U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000014U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00020000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000014U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000014U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000014U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000014U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00010000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000014U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000014U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000015U] 
        = ((((0x0000ff00U & (((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000015U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000015U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000015U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000015U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00400000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000015U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000015U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000015U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000015U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00200000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000015U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000015U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000015U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000015U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00100000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000015U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000015U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000016U] 
        = ((((0x0000ff00U & (((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000016U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000016U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000016U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000016U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x04000000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000016U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000016U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000016U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000016U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x02000000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000016U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000016U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000016U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000016U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x01000000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000016U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000016U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000017U] 
        = ((((0x0000ff00U & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U] 
                               >> 0x0000001fU) ? ((
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000017U] 
                                                   << 8U) 
                                                  | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000017U] 
                                                     >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000017U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000017U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x40000000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000017U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000017U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000017U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000017U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x20000000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000017U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000017U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000017U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000017U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x10000000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000017U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000017U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[6U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[7U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[8U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[8U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[9U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000000aU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x0000000aU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000000bU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x0000000bU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000000cU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x0000000cU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000000dU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x0000000dU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000000eU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x0000000eU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000000fU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x0000000fU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000010U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000010U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000011U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000011U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000012U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000012U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000013U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000013U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000014U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000014U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000015U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000015U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000016U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000016U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000017U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000017U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000018U] 
        = ((((0x0000ff00U & (((8U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000018U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000018U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000018U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000018U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((4U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000018U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000018U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000018U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000018U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000018U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000018U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000018U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000018U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000018U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000018U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000019U] 
        = ((((0x0000ff00U & (((0x00000080U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000019U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000019U] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000019U] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000019U] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000040U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000019U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000019U] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000019U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000019U] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00000020U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000019U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000019U] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000019U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000019U] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00000010U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000019U]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x00000019U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000001aU] 
        = ((((0x0000ff00U & (((0x00000800U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001aU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001aU] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001aU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001aU] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000400U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001aU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001aU] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001aU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001aU] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00000200U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001aU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001aU] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001aU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001aU] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00000100U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001aU]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001aU]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000001bU] 
        = ((((0x0000ff00U & (((0x00008000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001bU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001bU] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001bU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001bU] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00004000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001bU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001bU] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001bU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001bU] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00002000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001bU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001bU] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001bU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001bU] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00001000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001bU]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001bU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[8U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[9U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000000aU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000000aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000000bU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000000cU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000000dU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000000dU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000000eU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000000eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000000fU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000000fU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x00000010U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000010U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x00000011U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000011U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x00000012U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000012U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x00000013U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000013U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x00000014U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000014U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x00000015U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000015U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x00000016U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000016U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x00000017U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000017U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x00000018U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000018U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x00000019U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000019U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000001aU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000001aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000001bU] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000001bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000001cU] 
        = ((((0x0000ff00U & (((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001cU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001cU] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001cU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001cU] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00040000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001cU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001cU] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001cU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001cU] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00020000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001cU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001cU] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001cU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001cU] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00010000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001cU]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001cU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000001dU] 
        = ((((0x0000ff00U & (((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001dU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001dU] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001dU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001dU] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00400000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001dU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001dU] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001dU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001dU] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x00200000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001dU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001dU] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001dU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001dU] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x00100000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001dU]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001dU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000001eU] 
        = ((((0x0000ff00U & (((0x08000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                               ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001eU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001eU] 
                                             >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001eU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001eU] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x04000000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001eU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001eU] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001eU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001eU] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x02000000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001eU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001eU] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001eU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001eU] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x01000000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001eU]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001eU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000001fU] 
        = ((((0x0000ff00U & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U] 
                               >> 0x0000001fU) ? ((
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001fU] 
                                                   << 8U) 
                                                  | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001fU] 
                                                     >> 0x00000018U))
                               : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001fU] 
                                   << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001fU] 
                                             >> 0x00000018U))) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x40000000U 
                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                            ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001fU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001fU] 
                                                  >> 0x00000010U))
                                            : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001fU] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001fU] 
                                                  >> 0x00000010U))))) 
            << 0x00000010U) | ((0x0000ff00U & (((0x20000000U 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                 ? 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001fU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001fU] 
                                                    >> 8U))
                                                 : 
                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001fU] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001fU] 
                                                    >> 8U))) 
                                               << 8U)) 
                               | (0x000000ffU & ((0x10000000U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U])
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001fU]
                                                  : 
                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_mix[0x0000001fU]))));
}

void Vsim___024root___nba_sequent__TOP__878(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__878\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_sfifo__DOT__spt_fifo_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_sfifo__DOT__spt_fifo_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_sfifo__DOT__spt_fifo_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_sfifo__DOT__wr_count_next_is_4));
}

void Vsim___024root___nba_sequent__TOP__879(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__879\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_dfifo__DOT__dma_fifo_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_dfifo__DOT__dma_fifo_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_dfifo__DOT__dma_fifo_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_dfifo__DOT__wr_count_next_is_4));
}

void Vsim___024root___nba_sequent__TOP__880(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__880\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__muxed_Data_r0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__mbist_Do_r0_int_net 
        = ((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
               << 4U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                          << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                    << 2U))) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q))) 
            << 5U) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U))) 
                      | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                          << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
}

void Vsim___024root___nba_sequent__TOP__881(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__881\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_r0_OutputMuxDataOut));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__sync2ocvt_pd 
        = (((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000bU) | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q))) 
                                << 7U)) | ((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

void Vsim___024root___nba_sequent__TOP__882(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__882\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_we_w0)));
    }
}

void Vsim___024root___nba_sequent__TOP__883(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__883\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__muxed_we_w0)));
    }
}

void Vsim___024root___nba_sequent__TOP__884(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__884\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_wr_count))
            ? 2U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_rd_adr));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_wr_adr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_wr_adr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT____VdfgRegularize_h8a978f3b_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__wr_count_next_is_2));
}

void Vsim___024root___nba_sequent__TOP__885(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__885\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__ig2eg_size 
        = (((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q))) 
             << 9U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                        << 8U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                   << 7U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                             << 6U)))) 
           | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                << 5U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                           << 4U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U))) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

void Vsim___024root___nba_sequent__TOP__886(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__886\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_we_w0_0_432)));
    }
}

void Vsim___024root___nba_sequent__TOP__887(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__887\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__muxed_we_w0)));
    }
}

void Vsim___024root___nba_comb__TOP__55(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__55\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_8b[0x0000000fU];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_16b[0x0000001fU];
    }
    if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001fU];
    } else if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000fU];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_data[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data[0x0000001fU];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_mask_int8 
        = (((QData)((IData)((((((((((0U != (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000fU] 
                                            >> 0x00000018U)) 
                                    << 3U) | ((0U != 
                                               (0x000000ffU 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000fU] 
                                                   >> 0x00000010U))) 
                                              << 2U)) 
                                  | (((0U != (0x000000ffU 
                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000fU] 
                                                 >> 8U))) 
                                      << 1U) | (0U 
                                                != 
                                                (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000fU])))) 
                                 << 0x0000000cU) | 
                                (((((0U != (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000eU] 
                                            >> 0x00000018U)) 
                                    << 3U) | ((0U != 
                                               (0x000000ffU 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000eU] 
                                                   >> 0x00000010U))) 
                                              << 2U)) 
                                  | (((0U != (0x000000ffU 
                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000eU] 
                                                 >> 8U))) 
                                      << 1U) | (0U 
                                                != 
                                                (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000eU])))) 
                                 << 8U)) | ((((((0U 
                                                 != 
                                                 (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000dU] 
                                                  >> 0x00000018U)) 
                                                << 3U) 
                                               | ((0U 
                                                   != 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000dU] 
                                                       >> 0x00000010U))) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000dU] 
                                                       >> 8U))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (0x000000ffU 
                                                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000dU])))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != 
                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000cU] 
                                                   >> 0x00000018U)) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000cU] 
                                                        >> 0x00000010U))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000cU] 
                                                        >> 8U))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (0x000000ffU 
                                                      & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000cU])))))) 
                              << 0x00000010U) | (((
                                                   ((((0U 
                                                       != 
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000bU] 
                                                        >> 0x00000018U)) 
                                                      << 3U) 
                                                     | ((0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000bU] 
                                                             >> 0x00000010U))) 
                                                        << 2U)) 
                                                    | (((0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000bU] 
                                                             >> 8U))) 
                                                        << 1U) 
                                                       | (0U 
                                                          != 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000bU])))) 
                                                   << 0x0000000cU) 
                                                  | (((((0U 
                                                         != 
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000aU] 
                                                          >> 0x00000018U)) 
                                                        << 3U) 
                                                       | ((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000aU] 
                                                               >> 0x00000010U))) 
                                                          << 2U)) 
                                                      | (((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000aU] 
                                                               >> 8U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000aU])))) 
                                                     << 8U)) 
                                                 | ((((((0U 
                                                         != 
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[9U] 
                                                          >> 0x00000018U)) 
                                                        << 3U) 
                                                       | ((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[9U] 
                                                               >> 0x00000010U))) 
                                                          << 2U)) 
                                                      | (((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[9U] 
                                                               >> 8U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[9U])))) 
                                                     << 4U) 
                                                    | ((((0U 
                                                          != 
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[8U] 
                                                           >> 0x00000018U)) 
                                                         << 3U) 
                                                        | ((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[8U] 
                                                                >> 0x00000010U))) 
                                                           << 2U)) 
                                                       | (((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[8U] 
                                                                >> 8U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != 
                                                             (0x000000ffU 
                                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[8U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   ((((0U 
                                                       != 
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[7U] 
                                                        >> 0x00000018U)) 
                                                      << 3U) 
                                                     | ((0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[7U] 
                                                             >> 0x00000010U))) 
                                                        << 2U)) 
                                                    | (((0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[7U] 
                                                             >> 8U))) 
                                                        << 1U) 
                                                       | (0U 
                                                          != 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[7U])))) 
                                                   << 0x0000000cU) 
                                                  | (((((0U 
                                                         != 
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[6U] 
                                                          >> 0x00000018U)) 
                                                        << 3U) 
                                                       | ((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[6U] 
                                                               >> 0x00000010U))) 
                                                          << 2U)) 
                                                      | (((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[6U] 
                                                               >> 8U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[6U])))) 
                                                     << 8U)) 
                                                 | ((((((0U 
                                                         != 
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[5U] 
                                                          >> 0x00000018U)) 
                                                        << 3U) 
                                                       | ((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[5U] 
                                                               >> 0x00000010U))) 
                                                          << 2U)) 
                                                      | (((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[5U] 
                                                               >> 8U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[5U])))) 
                                                     << 4U) 
                                                    | ((((0U 
                                                          != 
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[4U] 
                                                           >> 0x00000018U)) 
                                                         << 3U) 
                                                        | ((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[4U] 
                                                                >> 0x00000010U))) 
                                                           << 2U)) 
                                                       | (((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[4U] 
                                                                >> 8U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != 
                                                             (0x000000ffU 
                                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[4U])))))) 
                                                << 0x00000010U) 
                                               | (((((((0U 
                                                        != 
                                                        (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[3U] 
                                                         >> 0x00000018U)) 
                                                       << 3U) 
                                                      | ((0U 
                                                          != 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[3U] 
                                                              >> 0x00000010U))) 
                                                         << 2U)) 
                                                     | (((0U 
                                                          != 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[3U] 
                                                              >> 8U))) 
                                                         << 1U) 
                                                        | (0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[3U])))) 
                                                    << 0x0000000cU) 
                                                   | (((((0U 
                                                          != 
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[2U] 
                                                           >> 0x00000018U)) 
                                                         << 3U) 
                                                        | ((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[2U] 
                                                                >> 0x00000010U))) 
                                                           << 2U)) 
                                                       | (((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[2U] 
                                                                >> 8U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != 
                                                             (0x000000ffU 
                                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[2U])))) 
                                                      << 8U)) 
                                                  | ((((((0U 
                                                          != 
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[1U] 
                                                           >> 0x00000018U)) 
                                                         << 3U) 
                                                        | ((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[1U] 
                                                                >> 0x00000010U))) 
                                                           << 2U)) 
                                                       | (((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[1U] 
                                                                >> 8U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != 
                                                             (0x000000ffU 
                                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[1U])))) 
                                                      << 4U) 
                                                     | ((((0U 
                                                           != 
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0U] 
                                                            >> 0x00000018U)) 
                                                          << 3U) 
                                                         | ((0U 
                                                             != 
                                                             (0x000000ffU 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0U] 
                                                                 >> 0x00000010U))) 
                                                            << 2U)) 
                                                        | (((0U 
                                                             != 
                                                             (0x000000ffU 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0U] 
                                                                 >> 8U))) 
                                                            << 1U) 
                                                           | (0U 
                                                              != 
                                                              (0x000000ffU 
                                                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0U]))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_mask_fp16[0U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (0x00007fffU 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[7U] 
                                                      >> 0x00000010U))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00007fffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[7U])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[6U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x00007fffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[6U])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[5U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[5U])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[4U] 
                                                                    >> 0x00000010U))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x00007fffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[4U])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[3U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[3U])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[2U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[2U])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[1U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[1U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_mask_fp16[1U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (0x00007fffU 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000fU] 
                                                      >> 0x00000010U))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00007fffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000fU])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000eU] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x00007fffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000eU])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000dU] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000dU])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000cU] 
                                                                    >> 0x00000010U))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x00007fffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000cU])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000bU] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000bU])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000aU] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000aU])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[9U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[9U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[8U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[8U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_mask_fp16[2U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (0x00007fffU 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000017U] 
                                                      >> 0x00000010U))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00007fffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000017U])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000016U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x00007fffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000016U])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000015U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000015U])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000014U] 
                                                                    >> 0x00000010U))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x00007fffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000014U])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000013U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000013U])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000012U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000012U])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000011U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000011U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000010U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000010U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_mask_fp16[3U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (0x00007fffU 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001fU] 
                                                      >> 0x00000010U))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00007fffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001fU])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001eU] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x00007fffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001eU])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001dU] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001dU])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001cU] 
                                                                    >> 0x00000010U))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x00007fffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001cU])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001bU] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001bU])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001aU] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001aU])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000019U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000019U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000018U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000018U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_mask_int16[0U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[7U] 
                                                   >> 0x00000010U)))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000ffffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[7U])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[6U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x0000ffffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[6U])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[5U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[5U])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[4U] 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x0000ffffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[4U])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[3U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[3U])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[2U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[2U])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[1U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x0000ffffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[1U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_mask_int16[1U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000fU] 
                                                   >> 0x00000010U)))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000ffffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000fU])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000eU] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x0000ffffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000eU])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000dU] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000dU])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000cU] 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x0000ffffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000cU])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000bU] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000bU])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000aU] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000000aU])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[9U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x0000ffffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[9U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[8U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[8U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_mask_int16[2U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000017U] 
                                                   >> 0x00000010U)))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000ffffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000017U])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000016U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x0000ffffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000016U])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000015U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000015U])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000014U] 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x0000ffffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000014U])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000013U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000013U])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000012U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000012U])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000011U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x0000ffffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000011U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000010U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000010U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_mask_int16[3U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001fU] 
                                                   >> 0x00000010U)))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000ffffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001fU])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001eU] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x0000ffffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001eU])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001dU] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001dU])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001cU] 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x0000ffffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001cU])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001bU] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001bU])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001aU] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x0000001aU])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000019U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x0000ffffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000019U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000018U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_wg_data[0x00000018U])))))))));
}

void Vsim___024root___nba_sequent__TOP__888(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__888\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__dma_fifo_pd 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__cmd_cube_end) 
            << 0x0000000eU) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__cmd_dma_size));
}

void Vsim___024root___nba_sequent__TOP__889(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__889\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U];
    }
}

void Vsim___024root___nba_sequent__TOP__890(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__890\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__RADR 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__D_Ra_reg_r0;
    }
}

void Vsim___024root___nba_comb__TOP__56(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__56\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__57(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__57\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b0c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__58(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__58\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__59(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__59\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b1c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__60(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__60\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__61(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__61\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b2c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__62(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__62\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__63(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__63\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b3c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__64(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__64\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__65(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__65\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b4c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__66(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__66\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__67(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__67\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b5c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__68(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__68\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__69(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__69\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b6c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__70(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__70\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__71(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__71\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b7c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__72(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__72\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__73(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__73\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__74(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__74\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__75(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__75\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__76(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__76\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__77(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__77\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__78(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__78\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__79(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__79\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__80(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__80\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__81(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__81\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__82(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__82\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__83(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__83\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__84(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__84\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__85(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__85\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__86(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__86\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_comb__TOP__87(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__87\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[1U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[2U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[3U] 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[4U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0.__PVT__ITOP__DOT__dout[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[5U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[6U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[7U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[2U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[8U] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[3U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[9U] 
        = (((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]) 
            | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144.__PVT__ITOP__DOT__dout[4U] 
               >> 0x00000010U)) | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0x0000000aU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0x0000000bU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0x0000000cU] 
        = ((0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]) 
           | (0xffff0000U & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0x0000000dU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            << 0x00000010U) | (0x0000ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288.__PVT__ITOP__DOT__dout[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0x0000000eU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[0U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
                               << 0x00000010U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0x0000000fU] 
        = ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[1U] 
            >> 0x00000010U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout[2U] 
                               << 0x00000010U));
}

void Vsim___024root___nba_sequent__TOP__891(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__891\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wgs_pop_data 
        = (((((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__testInst_Data_reg_r0.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
}

void Vsim___024root___nba_comb__TOP__88(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__88\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_pd_p 
        = ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
            ? ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                ? ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                    ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff31)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff30))
                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff29)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff28)))
                    : ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff27)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff26))
                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff25)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff24))))
                : ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                    ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff23)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff22))
                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff21)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff20)))
                    : ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff19)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff18))
                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff17)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff16)))))
            : ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                ? ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                    ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff15)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff14))
                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff13)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff12)))
                    : ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff11)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff10))
                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff9)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff8))))
                : ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                    ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff7)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff6))
                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff5)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff4)))
                    : ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff3)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff2))
                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr))
                            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff1)
                            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__ram__DOT__ram_ff0))))));
}

void Vsim___024root___nba_sequent__TOP__892(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__892\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0][4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0][5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__iow0__DOT__arr__v0[5U];
    }
}

void Vsim___024root___nba_sequent__TOP__893(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__893\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__RADR 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__D_Ra_reg_r0;
    }
}

void Vsim___024root___nba_sequent__TOP__894(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__894\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__muxed_we_w0)));
    }
}

void Vsim___024root___nba_comb__TOP__89(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__89\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<8>/*255:0*/ __Vtemp_70;
    VlWide<8>/*255:0*/ __Vtemp_72;
    VlWide<8>/*255:0*/ __Vtemp_74;
    VlWide<8>/*255:0*/ __Vtemp_75;
    VlWide<8>/*255:0*/ __Vtemp_117;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363 = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 9U) 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364 = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 0x0000000aU) 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362 = (1U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                     | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q)) 
                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_planar))));
    __Vtemp_70[6U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                         >> 7U)))) 
                       & (IData)((((QData)((IData)(
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                     << 0x0000001eU) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                       >> 2U)))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                      << 0x0000001eU) 
                                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                        >> 2U))))))) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 8U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0x0000000eU]) 
                         | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0x0000000eU]) 
                            | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                               & (IData)((((QData)((IData)(
                                                           ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                             << 0x00000010U) 
                                                            | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                               >> 0x00000010U)))) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                              << 0x00000010U) 
                                                             | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                                >> 0x00000010U))))))))));
    __Vtemp_70[7U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                         >> 7U)))) 
                       & (IData)(((((QData)((IData)(
                                                    ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                      << 0x0000001eU) 
                                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                        >> 2U)))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                       << 0x0000001eU) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                         >> 2U))))) 
                                  >> 0x00000020U))) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 8U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0x0000000fU]) 
                         | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0x0000000fU]) 
                            | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                               & (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                              << 0x00000010U) 
                                                             | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                                >> 0x00000010U)))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                               << 0x00000010U) 
                                                              | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                                 >> 0x00000010U))))) 
                                          >> 0x00000020U))))));
    __Vtemp_72[0U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                         >> 5U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[8U]) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[8U]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 7U)))) 
                             & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                 >> 2U))) | (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                             >> 8U)))) 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[8U]) 
                                             | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[8U]) 
                                                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                                       << 0x00000010U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                                         >> 0x00000010U))))))));
    __Vtemp_72[1U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                         >> 5U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[9U]) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[9U]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 7U)))) 
                             & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                 >> 2U))) | (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                             >> 8U)))) 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[9U]) 
                                             | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[9U]) 
                                                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                                       << 0x00000010U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                                         >> 0x00000010U))))))));
    __Vtemp_72[2U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                         >> 5U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0x0000000aU]) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0x0000000aU]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 7U)))) 
                             & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                 >> 2U))) | (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                             >> 8U)))) 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0x0000000aU]) 
                                             | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0x0000000aU]) 
                                                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                                       << 0x00000010U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                                         >> 0x00000010U))))))));
    __Vtemp_72[3U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                         >> 5U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0x0000000bU]) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0x0000000bU]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 7U)))) 
                             & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                 >> 2U))) | (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                             >> 8U)))) 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0x0000000bU]) 
                                             | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0x0000000bU]) 
                                                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                                       << 0x00000010U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                                         >> 0x00000010U))))))));
    __Vtemp_72[4U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                         >> 5U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0x0000000cU]) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0x0000000cU]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 7U)))) 
                             & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                 >> 2U))) | (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                             >> 8U)))) 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0x0000000cU]) 
                                             | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0x0000000cU]) 
                                                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                                       << 0x00000010U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                                         >> 0x00000010U))))))));
    __Vtemp_72[5U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                         >> 5U)))) 
                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0x0000000dU]) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 6U)))) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0x0000000dU]) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 7U)))) 
                             & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                 >> 2U))) | (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                             >> 8U)))) 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0x0000000dU]) 
                                             | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0x0000000dU]) 
                                                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                                       << 0x00000010U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                                         >> 0x00000010U))))))));
    __Vtemp_74[6U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                         >> 3U)))) 
                       & (IData)((((QData)((IData)(
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                     << 0x00000018U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                       >> 8U)))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                        >> 8U))))))) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 4U)))) 
                          & (IData)((((QData)((IData)(
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU]))) 
                                      << 0x00000030U) 
                                     | (0x0000ffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU])) 
                                            << 0x00000010U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU])) 
                                              >> 0x00000010U)))))) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0x0000000eU]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0x0000000eU]) 
                               | __Vtemp_70[6U]))));
    __Vtemp_74[7U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                         >> 3U)))) 
                       & (IData)(((((QData)((IData)(
                                                    ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                        >> 8U)))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                         >> 8U))))) 
                                  >> 0x00000020U))) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 4U)))) 
                          & (IData)(((((QData)((IData)(
                                                       (0x0000ffffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU]))) 
                                       << 0x00000030U) 
                                      | (0x0000ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU])) 
                                               >> 0x00000010U)))) 
                                     >> 0x00000020U))) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 5U)))) 
                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0x0000000fU]) 
                            | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                  >> 6U)))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0x0000000fU]) 
                               | __Vtemp_70[7U]))));
    __Vtemp_75[0U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 1U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[8U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 2U)))) 
                          & ((0xffff0000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U]) 
                             | (0x0000ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U])))) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 3U)))) 
                          & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                              << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                                 >> 8U))) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 4U)))) 
                             & (IData)((((QData)((IData)(
                                                         (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U]))) 
                                         << 0x00000030U) 
                                        | (0x0000ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U])) 
                                                 >> 0x00000010U)))))) 
                            | __Vtemp_72[0U])));
    __Vtemp_75[1U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 1U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[9U]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 2U)))) 
                          & ((0xffff0000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U]) 
                             | (0x0000ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U])))) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 3U)))) 
                          & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                              << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                                 >> 8U))) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 4U)))) 
                             & (IData)(((((QData)((IData)(
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U]))) 
                                          << 0x00000030U) 
                                         | (0x0000ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U))) 
                            | __Vtemp_72[1U])));
    __Vtemp_75[2U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 1U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0x0000000aU]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 2U)))) 
                          & ((0xffff0000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU]) 
                             | (0x0000ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU])))) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 3U)))) 
                          & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                              << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                                 >> 8U))) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 4U)))) 
                             & (IData)((((QData)((IData)(
                                                         (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU]))) 
                                         << 0x00000030U) 
                                        | (0x0000ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU])) 
                                                 >> 0x00000010U)))))) 
                            | __Vtemp_72[2U])));
    __Vtemp_75[3U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 1U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0x0000000bU]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 2U)))) 
                          & ((0xffff0000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU]) 
                             | (0x0000ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU])))) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 3U)))) 
                          & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                              << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                                 >> 8U))) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 4U)))) 
                             & (IData)(((((QData)((IData)(
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU]))) 
                                          << 0x00000030U) 
                                         | (0x0000ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U))) 
                            | __Vtemp_72[3U])));
    __Vtemp_75[4U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 1U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0x0000000cU]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 2U)))) 
                          & ((0xffff0000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU]) 
                             | (0x0000ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU])))) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 3U)))) 
                          & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                              << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                                 >> 8U))) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 4U)))) 
                             & (IData)((((QData)((IData)(
                                                         (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU]))) 
                                         << 0x00000030U) 
                                        | (0x0000ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU])) 
                                                 >> 0x00000010U)))))) 
                            | __Vtemp_72[4U])));
    __Vtemp_75[5U] = ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 1U)))) 
                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0x0000000dU]) 
                       | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 2U)))) 
                          & ((0xffff0000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU]) 
                             | (0x0000ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU])))) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                            >> 3U)))) 
                          & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                              << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                                 >> 8U))) 
                         | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                               >> 4U)))) 
                             & (IData)(((((QData)((IData)(
                                                          (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU]))) 
                                          << 0x00000030U) 
                                         | (0x0000ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U))) 
                            | __Vtemp_72[5U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_w[0U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U]) 
           | __Vtemp_75[0U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_w[1U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U]) 
           | __Vtemp_75[1U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_w[2U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU]) 
           | __Vtemp_75[2U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_w[3U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU]) 
           | __Vtemp_75[3U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_w[4U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU]) 
           | __Vtemp_75[4U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_w[5U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU]) 
           | __Vtemp_75[5U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_w[6U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU]) 
           | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                  >> 1U)))) & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0x0000000eU]) 
               | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                    >> 2U)))) & (IData)(
                                                        (((QData)((IData)(
                                                                          ((0xffff0000U 
                                                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU]) 
                                                                           | (0x0000ffffU 
                                                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU])))) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(
                                                                           ((0xffff0000U 
                                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU]) 
                                                                            | (0x0000ffffU 
                                                                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU])))))))) 
              | __Vtemp_74[6U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_w[7U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU]) 
           | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                  >> 1U)))) & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0x0000000fU]) 
               | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                    >> 2U)))) & (IData)(
                                                        ((((QData)((IData)(
                                                                           ((0xffff0000U 
                                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU]) 
                                                                            | (0x0000ffffU 
                                                                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU])))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((0xffff0000U 
                                                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU]) 
                                                                             | (0x0000ffffU 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU]))))) 
                                                         >> 0x00000020U)))) 
              | __Vtemp_74[7U]));
    __Vtemp_117[0U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 3U)))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[0U]) 
                       | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                             >> 4U)))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[0U]) 
                          | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                >> 5U)))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[0U]) 
                             | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 6U)))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[0U]) 
                                | (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 7U)))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[0U]) 
                                   | (((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                      >> 8U)))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[0U]) 
                                      | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[0U]) 
                                         | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[0U]))))))));
    __Vtemp_117[1U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 3U)))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[1U]) 
                       | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                             >> 4U)))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[1U]) 
                          | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                >> 5U)))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[1U]) 
                             | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 6U)))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[1U]) 
                                | (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 7U)))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[1U]) 
                                   | (((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                      >> 8U)))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[1U]) 
                                      | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[1U]) 
                                         | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[1U]))))))));
    __Vtemp_117[2U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 3U)))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[2U]) 
                       | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                             >> 4U)))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[2U]) 
                          | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                >> 5U)))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[2U]) 
                             | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 6U)))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[2U]) 
                                | (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 7U)))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[2U]) 
                                   | (((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                      >> 8U)))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[2U]) 
                                      | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[2U]) 
                                         | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[2U]))))))));
    __Vtemp_117[3U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 3U)))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[3U]) 
                       | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                             >> 4U)))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[3U]) 
                          | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                >> 5U)))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[3U]) 
                             | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 6U)))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[3U]) 
                                | (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 7U)))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[3U]) 
                                   | (((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                      >> 8U)))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[3U]) 
                                      | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[3U]) 
                                         | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[3U]))))))));
    __Vtemp_117[4U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 3U)))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[4U]) 
                       | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                             >> 4U)))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[4U]) 
                          | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                >> 5U)))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[4U]) 
                             | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 6U)))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[4U]) 
                                | (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 7U)))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[4U]) 
                                   | (((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                      >> 8U)))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[4U]) 
                                      | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[4U]) 
                                         | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[4U]))))))));
    __Vtemp_117[5U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 3U)))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[5U]) 
                       | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                             >> 4U)))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[5U]) 
                          | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                >> 5U)))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[5U]) 
                             | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 6U)))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[5U]) 
                                | (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 7U)))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[5U]) 
                                   | (((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                      >> 8U)))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[5U]) 
                                      | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[5U]) 
                                         | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[5U]))))))));
    __Vtemp_117[6U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 3U)))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[6U]) 
                       | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                             >> 4U)))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[6U]) 
                          | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                >> 5U)))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[6U]) 
                             | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 6U)))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[6U]) 
                                | (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 7U)))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[6U]) 
                                   | (((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                      >> 8U)))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[6U]) 
                                      | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[6U]) 
                                         | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[6U]))))))));
    __Vtemp_117[7U] = (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                          >> 3U)))) 
                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[7U]) 
                       | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                             >> 4U)))) 
                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[7U]) 
                          | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                >> 5U)))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[7U]) 
                             | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 6U)))) 
                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[7U]) 
                                | (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                   >> 7U)))) 
                                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[7U]) 
                                   | (((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                                      >> 8U)))) 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[7U]) 
                                      | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_363))) 
                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[7U]) 
                                         | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_364))) 
                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[7U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_w[0U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U]) 
           | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                  >> 1U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[0U]) 
               | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                    >> 2U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[0U])) 
              | __Vtemp_117[0U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_w[1U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U]) 
           | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                  >> 1U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[1U]) 
               | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                    >> 2U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[1U])) 
              | __Vtemp_117[1U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_w[2U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U]) 
           | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                  >> 1U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[2U]) 
               | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                    >> 2U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[2U])) 
              | __Vtemp_117[2U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_w[3U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U]) 
           | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                  >> 1U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[3U]) 
               | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                    >> 2U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[3U])) 
              | __Vtemp_117[3U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_w[4U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U]) 
           | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                  >> 1U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[4U]) 
               | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                    >> 2U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[4U])) 
              | __Vtemp_117[4U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_w[5U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U]) 
           | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                  >> 1U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[5U]) 
               | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                    >> 2U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[5U])) 
              | __Vtemp_117[5U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_w[6U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U]) 
           | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                  >> 1U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[6U]) 
               | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                    >> 2U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[6U])) 
              | __Vtemp_117[6U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_w[7U] 
        = (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_362))) 
            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U]) 
           | ((((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                  >> 1U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[7U]) 
               | ((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__pixel_order) 
                                    >> 2U)))) & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[7U])) 
              | __Vtemp_117[7U]));
}

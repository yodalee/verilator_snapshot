// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_comb__TOP__128(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__128\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_end_inc 
        = (0x00001fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_entry_end) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__incr_wt_entries_d3)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req0 
        = ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_req_done_d3) 
               | ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__cur_state)) 
                  & (0x0400U < (0x000007ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_onfly) 
                                               + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_avl) 
                                                  + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_data_stored)))))))) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_req_vld_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req1 
        = ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_req_done_d3) 
               | ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__cur_state)) 
                  & ((0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_onfly) 
                                     + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_avl) 
                                        + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_data_stored)))) 
                     > ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__weight_bank) 
                        << 0x0000000aU))))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_req_vld_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_in_vld 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req1) 
            << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req0));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req1) 
             & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_weight_wt))) 
            << 1U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req0) 
                      & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_weight_wmb))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wt_left_nxt 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wt_left;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__gnt_pre = 0U;
    if ((1U & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wt_left)) 
               | (~ (0U != ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req) 
                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wrr_gnt))))))) {
        if ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wrr_gnt))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wt_left_nxt 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_weight_wmb) 
                                      - (IData)(1U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__gnt_pre = 1U;
            } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wt_left_nxt 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_weight_wt) 
                                      - (IData)(1U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__gnt_pre = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wrr_gnt))) {
            if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wt_left_nxt 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_weight_wt) 
                                      - (IData)(1U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__gnt_pre = 2U;
            } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wt_left_nxt 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_weight_wmb) 
                                      - (IData)(1U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__gnt_pre = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wrr_gnt))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wt_left_nxt 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_weight_wmb) 
                                      - (IData)(1U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__gnt_pre = 1U;
            } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__req))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wt_left_nxt 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_weight_wt) 
                                      - (IData)(1U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__gnt_pre = 2U;
            }
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wt_left_nxt = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__gnt_pre = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wt_left_nxt 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wt_left) 
                              - (IData)(1U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__gnt_pre 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__wrr_gnt;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_in_rdy 
        = ((- (IData)((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_out_back_vld))))) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wrr_arb__DOT__gnt_pre));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_out_package_w[0U] 
        = (((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_in_rdy)))) 
            & (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_req_size_out_d3)) 
                        << 0x0000003bU) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_req_addr_d3))) 
           | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_in_rdy) 
                                 >> 1U)))) & (IData)(
                                                     (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_req_size_out_d3)) 
                                                       << 0x0000003bU) 
                                                      | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_req_addr_d3))) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_out_back_vld))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_out_back_package[0U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_out_package_w[1U] 
        = (((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_in_rdy)))) 
            & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_req_size_d3) 
                << 0x0000001eU) | (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_req_size_out_d3)) 
                                             << 0x0000003bU) 
                                            | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_req_addr_d3) 
                                           >> 0x00000020U)))) 
           | (((- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_in_rdy) 
                                 >> 1U)))) & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_req_size_d3) 
                                               << 0x0000001eU) 
                                              | (IData)(
                                                        ((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_req_size_out_d3)) 
                                                           << 0x0000003bU) 
                                                          | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_req_addr_d3) 
                                                         >> 0x00000020U)))) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_out_back_vld))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_out_back_package[1U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_out_package_w[2U] 
        = (((- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_in_rdy)))) 
            & (4U | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_req_size_d3) 
                     >> 2U))) | (((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_in_rdy) 
                                               >> 1U)))) 
                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_req_size_d3) 
                                     >> 2U)) | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_out_back_vld))) 
                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__arb_wrr_out_back_package[2U])));
}

void Vsim___024root___nba_comb__TOP__129(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__129\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__is_cbuf_enough 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_free_entries) 
           >= (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cur_required_entry) 
                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__img_entry_onfly))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3838 = (
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__req_is_done)) 
                                                   & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__is_cbuf_ready)) 
                                                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__is_cbuf_enough)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__img_entry_onfly_add 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3838)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cur_required_entry)
            : 0U);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__img_entry_onfly_w 
        = (0x00000fffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__img_entry_onfly) 
                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__img_entry_onfly_add)) 
                          - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__img_entry_onfly_sub)));
}

void Vsim___024root___nba_sequent__TOP__1089(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1089\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__accu2sc_credit_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d3) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__cacc2sdp_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__cacc2csb_resp_src_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg_wr_en) 
                & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                           >> 0x00000037U))) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg_rd_en)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__cacc_done_intr 
            = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__cacc_done) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__intr_sel)) 
                << 1U) | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__intr_sel)) 
                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__cacc_done)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d2;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cacc__DOT__csb2cacc_req_pvld_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cacc__DOT__csb2cacc_req_pd_d3;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__cacc_done_intr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_mask_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd = 0ULL;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_pvld_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_RT_cmac_b2cacc__DOT__mac2accu_pvld_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d3_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__intr_sel 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__intr_sel_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg_rd_en 
        = ((~ (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                       >> 0x00000036U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__select_d0 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_producer)) 
           & (8U <= (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                    << 2U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__select_d1 
        = ((8U <= (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_producer));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3650 = (
                                                   ((0x001cU 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x002cU 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x0034U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x0018U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x0028U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x0010U 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x0014U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0020U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pvld) 
           & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                      >> 0x00000036U)));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3650) {
        if ((0x001cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_batches;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_batches;
        } else if ((0x002cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_clip_truncate;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_clip_truncate;
        } else if ((0x0034U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_cya;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_cya;
        } else if ((0x0018U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_addr 
                   << 5U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_addr 
                   << 5U);
        } else if ((0x0028U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_surf_packed) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_line_packed));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_surf_packed) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_line_packed));
        } else if ((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_height) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_width));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_height) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_width));
        } else if ((0x0014U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_dataout_channel;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_dataout_channel;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_line_stride 
                   << 5U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_line_stride 
                   << 5U);
        }
    } else if ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_proc_precision) 
                << 0x0000000cU) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_conv_mode));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_proc_precision) 
                << 0x0000000cU) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_conv_mode));
    } else if ((8U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                      << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en;
    } else if ((0x0030U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_d0_sat_count;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_d1_sat_count;
    } else if ((0x0024U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_surf_stride 
               << 5U);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_surf_stride 
               << 5U);
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__s_reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg_wr_en) 
           & (8U > (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                   << 2U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg_wr_en) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__select_d0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg_wr_en) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__select_d1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_cacc_d_dataout_map_0_wren 
        = ((0x0028U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_cacc_d_dataout_size_0_0_wren 
        = ((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_cacc_d_misc_cfg_0_wren 
        = ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en_w 
        = (1U & (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en)) 
                  & ((8U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                            << 2U))) 
                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en)))
                  ? (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                             >> 0x00000016U)) : ((~ 
                                                  ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dp2reg_done))) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d0_op_en))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_cacc_d_dataout_map_0_wren 
        = ((0x0028U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_cacc_d_dataout_size_0_0_wren 
        = ((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_cacc_d_misc_cfg_0_wren 
        = ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en_w 
        = (1U & (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en)) 
                  & ((8U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd) 
                                            << 2U))) 
                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en)))
                  ? (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__req_pd 
                             >> 0x00000016U)) : ((~ 
                                                  ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__dp2reg_done) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__dp2reg_consumer))) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_regfile__DOT__reg2dp_d1_op_en))));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hd520ac73_0;
extern const VlUnpacked<CData/*5:0*/, 64> Vsim__ConstPool__TABLE_hedd3f3db_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_hcc9c22ae_0;
extern const VlUnpacked<CData/*4:0*/, 32> Vsim__ConstPool__TABLE_h48e730dc_0;

void Vsim___024root___nba_sequent__TOP__1090(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1090\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    CData/*5:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_en_d5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_c1_valid_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d4) 
                     >> 2U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_c0_valid_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d4) 
                     >> 2U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_c1_valid_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d4) 
                     >> 1U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_c0_valid_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d4) 
                     >> 1U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cacc__DOT__csb2cacc_req_pvld_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csb2cacc__DOT__csb2cacc_req_pvld_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_en_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d4) 
                     >> 1U)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_dilation_ext_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_x_dilation_ext 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_dilation_ext_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_x_dilation_ext 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_conv_stride_ext_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_conv_y_stride_ext 
                = (7U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_conv_stride_ext_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_conv_y_stride_ext 
                = (7U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000026U)));
        }
        if (((0x0058U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pad_value 
                = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0058U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pad_value 
                = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_op_en_reg 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_op_en_reg_w;
        if (((0x0034U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_bytes 
                = (0x01ffffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001dU)));
        }
        if (((0x0034U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_bytes 
                = (0x01ffffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001dU)));
        }
        if (((0x0038U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_wmb_bytes 
                = (0x001fffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001dU)));
        }
        if (((0x0038U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_wmb_bytes 
                = (0x001fffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001dU)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__dp2reg_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer_w;
        }
        if (((0x0028U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_format 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (((0x0028U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_format 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg_w;
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_pvld) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_pvld_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_mask[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_mask[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_mask[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_mask[3U];
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_wt_b_src_pvld) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_pvld_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U] = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_dat_b_src_pvld) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_pvld_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_dat_b_src_mask[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_dat_b_src_mask[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_dat_b_src_mask[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_dat_b_src_mask[3U];
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2mac_dat_b_src_pvld) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_pvld_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U] = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_fsm_switch) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_consumer_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__csb2csc_req_pvld) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                = ((0x00ffffffffc00000ULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__csb2csc_req_pd_tmp 
                                             << 6U)) 
                   | (QData)((IData)((0x0000ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__csb2csc_req_pd_tmp)))));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d4 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d3;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d1 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2buf_dat_rd_en) 
                << 2U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2buf_wt_rd_en) 
                           << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2buf_wmb_rd_en)));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_x_dilation_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_x_dilation_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_conv_y_stride_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_conv_y_stride_ext = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pad_value = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pad_value = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_op_en_reg = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_bytes = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_bytes = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_wmb_bytes = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_wmb_bytes = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_format = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_format = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_wt_mask_d1[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_RT_csc2cmac_b__DOT__sc2mac_dat_mask_d1[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rd_en_d1 = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer_w 
        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_weight_height_ext 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_height_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_proc_precision 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_proc_precision;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_datain_width_ext 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_width_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_entries 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_entries;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_pra_truncate 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pra_truncate;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_datain_height_ext 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_height_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_rls_slices 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_rls_slices;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_op_en_ori 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_op_en;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_datain_channel_ext 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_channel_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_weight_channel_ext 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_channel_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_batches 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_batches;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_y_extension 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_y_extension;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_weight_bank 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_bank;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_data_bank 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_data_bank;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_weight_kernel 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_kernel;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_datain_format 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_format;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_weight_height_ext 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_height_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_proc_precision 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_proc_precision;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_datain_width_ext 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_width_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_entries 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_entries;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_pra_truncate 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pra_truncate;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_datain_height_ext 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_height_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_rls_slices 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_rls_slices;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_op_en_ori 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_op_en;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_datain_channel_ext 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_channel_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_weight_channel_ext 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_channel_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_batches 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_batches;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_y_extension 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_y_extension;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_weight_bank 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_bank;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_data_bank 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_data_bank;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_weight_kernel 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_kernel;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_datain_format 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_format;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_consumer_w 
        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_datain_width_ext 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.datain_width_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_dma_en 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.dma_en;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_entries 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.entries;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_skip_data_rls 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.skip_data_rls;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_line_stride 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.line_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_bytes 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.weight_bytes;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_wmb_bytes 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.wmb_bytes;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.pad_value;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_addr_low 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.weight_addr_low;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_wmb_addr_low 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.wmb_addr_low;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_batch_stride 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.batch_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_bank 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.weight_bank;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_surf_stride 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.surf_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__reg2dp_pad_right 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.pad_right;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__reg2dp_pixel_x_offset 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.pixel_x_offset;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_ram_type 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.weight_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_data_reuse 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.data_reuse;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_channel 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.datain_channel;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_conv_x_stride 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.conv_x_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_batches 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.batches;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__reg2dp_pad_left 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.pad_left;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_conv_y_stride 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.conv_y_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_format 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.weight_format;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_width 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.datain_width;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_ram_type 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.datain_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_format 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.datain_format;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_conv_mode 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.conv_mode;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.in_precision;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ry;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_cvt_en 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_en;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_nan_to_zero 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.nan_to_zero;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_ori 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_kernel 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.weight_kernel;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.proc_precision;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_data_bank 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.data_bank;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_datain_width_ext 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.datain_width_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_dma_en 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.dma_en;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_entries 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.entries;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_skip_data_rls 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.skip_data_rls;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_line_stride 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.line_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_bytes 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.weight_bytes;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_wmb_bytes 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.wmb_bytes;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.pad_value;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_addr_low 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.weight_addr_low;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_wmb_addr_low 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.wmb_addr_low;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_batch_stride 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.batch_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_bank 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.weight_bank;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_surf_stride 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.surf_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__reg2dp_pad_right 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.pad_right;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__reg2dp_pixel_x_offset 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.pixel_x_offset;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_ram_type 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.weight_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_data_reuse 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.data_reuse;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_channel 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.datain_channel;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_conv_x_stride 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.conv_x_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_batches 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.batches;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__reg2dp_pad_left 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.pad_left;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_conv_y_stride 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.conv_y_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_format 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.weight_format;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_width 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.datain_width;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_ram_type 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.datain_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_format 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.datain_format;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_conv_mode 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.conv_mode;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.in_precision;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ry;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_cvt_en 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_en;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_nan_to_zero 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.nan_to_zero;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_ori 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_kernel 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.weight_kernel;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.proc_precision;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_data_bank 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.data_bank;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232 = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                    ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.line_packed)
                                                    : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.line_packed))
                                                   ? 
                                                  (0x00001fffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                        ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.grains)
                                                        : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.grains))))
                                                   : 1U);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__req_addr_ori 
        = (((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                              ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.datain_addr_high_0
                              : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.datain_addr_high_0))) 
            << 0x0000001bU) | (QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.datain_addr_low_0
                                                : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.datain_addr_low_0))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_533 = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                                                   >> 2U) 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3655 = (
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)) 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                                                      >> 2U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_fsm_switch 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__op_en_w) 
               & ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__wt2status_state)) 
                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__dat2status_done))));
    __Vtableidx35 = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__reg2dp_pad_right;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mon_rp_end_w 
        = Vsim__ConstPool__TABLE_hd520ac73_0[__Vtableidx35];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rp_end_w 
        = Vsim__ConstPool__TABLE_hedd3f3db_0[__Vtableidx35];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__pixel_element_sft_w 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__reg2dp_pixel_x_offset) 
                          - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__reg2dp_pad_left)));
    __Vtableidx34 = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__reg2dp_pad_left;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mon_lp_end_w 
        = Vsim__ConstPool__TABLE_hcc9c22ae_0[__Vtableidx34];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__lp_end_w 
        = Vsim__ConstPool__TABLE_h48e730dc_0[__Vtableidx34];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_0 
        = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__reg2dp_pad_left) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_width)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__wg_en 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
            >> 2U) & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_format)) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_conv_mode)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3909 = (
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_conv_mode)) 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                                                      >> 2U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5 
        = (((QData)((IData)(((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_bv)
                                : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_bv)) 
                              << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                  ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_gu)
                                                  : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_gu))))) 
            << 0x00000010U) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry)));
    if ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__group_op 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_kernel) 
                              >> 5U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__data_surface_inc 
            = (0x000003ffU & ((IData)(1U) + (0x000000ffU 
                                             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_channel) 
                                                >> 5U))));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__group_op 
            = (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_weight_kernel) 
                              >> 4U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__data_surface_inc 
            = (0x000003ffU & ((IData)(1U) + (0x000001ffU 
                                             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_channel) 
                                                >> 4U))));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_data_expand_w 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision)) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__is_data_normal 
        = (1U & (~ ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision)) 
                    ^ (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_data_shrink_w 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision)) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3924 = (
                                                   ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                                                    >> 2U) 
                                                   & (2U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__real_bank_reg_en 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
            >> 2U) & ((0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_data_bank))) 
                      != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__real_bank)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg_rd_en 
        = ((~ (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                       >> 0x00000036U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__select_d0 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_producer)) 
           & (8U <= (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                    << 2U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__select_d1 
        = ((8U <= (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_producer));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4446 = (
                                                   ((0x0048U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x0034U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x0028U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x002cU 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x0030U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x0038U 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x0054U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0058U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4447 = (
                                                   ((0x003cU 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x0040U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x0050U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x0024U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x000cU 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((8U 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x0020U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0060U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4448 = (
                                                   ((0x0044U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x005cU 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x001cU 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x004cU 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x0064U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x0010U 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x0014U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0018U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pvld) 
           & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd 
                      >> 0x00000036U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__pixel_store_width 
        = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_0) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__reg2dp_pad_right)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__img_en 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3909) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_format));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc_en 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_format)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3909));
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_datain_channel))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0U] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[1U] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[2U] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[3U] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[4U] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[5U] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[6U] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[7U] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[8U] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[9U] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000000aU] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000000bU] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000000cU] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000000dU] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000000eU] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000000fU] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000010U] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000011U] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000012U] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000013U] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000014U] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000015U] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000016U] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000017U] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000018U] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000019U] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000001aU] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000001bU] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000001cU] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000001dU] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000001eU] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                        << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000001fU] 
            = (IData)(((((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.mean_ax)
                                           : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.mean_ax)))) 
                         << 0x00000030U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                       >> 0x00000020U));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[1U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[2U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[3U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[4U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[5U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[6U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[7U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[8U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[9U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000000aU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000000bU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000000cU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000000dU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000000eU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000000fU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000010U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000011U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000012U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000013U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000014U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000015U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000016U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000017U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000018U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x00000019U] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000001aU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000001bU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000001cU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000001dU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000001eU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_ch1_4[0x0000001fU] 
            = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__reg2dp_mean_ry) 
                                      >> 0x00000010U)));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__req_addr_ch_base_add 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_data_shrink_w)
            ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_surf_stride 
               << 2U) : (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__reg2dp_surf_stride 
                         << 1U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__layer_end_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_fsm_switch) 
           | ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                  >> 2U)) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_status__DOT__layer_end)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_fsm_switch)
            ? 0U : ((6U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                           << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_ori)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__op_en_w 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_fsm_switch)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
              >> 2U));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4448) {
        if ((0x0044U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_atomics;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_atomics;
        } else if ((0x005cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_bank) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_data_bank));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_bank) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_data_bank));
        } else if ((0x001cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_batches;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_batches;
        } else if ((0x004cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_conv_y_stride_ext) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_conv_x_stride_ext));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_conv_y_stride_ext) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_conv_x_stride_ext));
        } else if ((0x0064U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_cya;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_cya;
        } else if ((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_format;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_format;
        } else if ((0x0014U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_height_ext) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_width_ext));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_height_ext) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_width_ext));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_datain_channel_ext;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_datain_channel_ext;
        }
    } else if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4447) {
        if ((0x003cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_dataout_height) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_dataout_width));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_dataout_height) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_dataout_width));
        } else if ((0x0040U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_dataout_channel;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_dataout_channel;
        } else if ((0x0050U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_y_dilation_ext) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_x_dilation_ext));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_y_dilation_ext) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_x_dilation_ext));
        } else if ((0x0024U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_entries;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_entries;
        } else if ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_skip_weight_rls) 
                    << 0x0000001cU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_skip_data_rls) 
                                        << 0x00000018U) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_reuse) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_data_reuse) 
                                              << 0x00000010U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_proc_precision) 
                                                 << 0x0000000cU) 
                                                | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_in_precision) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_conv_mode)))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_skip_weight_rls) 
                    << 0x0000001cU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_skip_data_rls) 
                                        << 0x00000018U) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_reuse) 
                                           << 0x00000014U) 
                                          | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_data_reuse) 
                                              << 0x00000010U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_proc_precision) 
                                                 << 0x0000000cU) 
                                                | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_in_precision) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_conv_mode)))))));
        } else if ((8U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                          << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_op_en;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_op_en;
        } else if ((0x0020U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_y_extension;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_y_extension;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pra_truncate;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pra_truncate;
        }
    } else if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4446) {
        if ((0x0048U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_rls_slices;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_rls_slices;
        } else if ((0x0034U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_bytes 
                   << 7U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_bytes 
                   << 7U);
        } else if ((0x0028U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_format;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_format;
        } else if ((0x002cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_height_ext) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_width_ext));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_height_ext) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_width_ext));
        } else if ((0x0030U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_kernel) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_channel_ext));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_kernel) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_channel_ext));
        } else if ((0x0038U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_wmb_bytes 
                   << 7U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_wmb_bytes 
                   << 7U);
        } else if ((0x0054U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pad_top) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pad_left));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pad_top) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pad_left));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_pad_value;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_pad_value;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_rd_data = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_rd_data = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__s_reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg_wr_en) 
           & (8U > (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                   << 2U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg_wr_en) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_op_en)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__select_d0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg_wr_en) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_op_en)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__select_d1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_bank_0_wren 
        = ((0x005cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_conv_stride_ext_0_wren 
        = ((0x004cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_datain_size_ext_0_0_wren 
        = ((0x0014U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_dataout_size_0_0_wren 
        = ((0x003cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_dilation_ext_0_wren 
        = ((0x0050U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_misc_cfg_0_wren 
        = ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_weight_size_ext_0_0_wren 
        = ((0x002cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_weight_size_ext_1_0_wren 
        = ((0x0030U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_csc_d_zero_padding_0_wren 
        = ((0x0054U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_bank_0_wren 
        = ((0x005cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_conv_stride_ext_0_wren 
        = ((0x004cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_datain_size_ext_0_0_wren 
        = ((0x0014U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_dataout_size_0_0_wren 
        = ((0x003cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_dilation_ext_0_wren 
        = ((0x0050U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_misc_cfg_0_wren 
        = ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_weight_size_ext_0_0_wren 
        = ((0x002cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_weight_size_ext_1_0_wren 
        = ((0x0030U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_csc_d_zero_padding_0_wren 
        = ((0x0054U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
}

void Vsim___024root___nba_sequent__TOP__1091(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1091\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__csb2cdma_req_pvld) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                = ((0x00ffffffffc00000ULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__csb2cdma_req_pd_tmp 
                                             << 6U)) 
                   | (QData)((IData)((0x0000ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__csb2cdma_req_pd_tmp)))));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd = 0ULL;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg_rd_en 
        = ((~ (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                       >> 0x00000036U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__select_d0 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_producer)) 
           & (0x0010U <= (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__select_d1 
        = ((0x0010U <= (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_producer));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pvld) 
           & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                      >> 0x00000036U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__s_reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg_wr_en) 
           & (0x0010U > (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_single_reg__DOT__nvdla_cdma_s_arbiter_0_wren 
        = ((8U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__s_reg_wr_en));
}

void Vsim___024root___nba_sequent__TOP__1092(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1092\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en_w 
        = (1U & (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en)) 
                  & ((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U))) 
                     & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.reg_wr_en)))
                  ? (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                             >> 0x00000016U)) : ((~ 
                                                  ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_fsm_switch))) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en_w 
        = (1U & (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en)) 
                  & ((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U))) 
                     & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.reg_wr_en)))
                  ? (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                             >> 0x00000016U)) : ((~ 
                                                  ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__status2dma_fsm_switch))) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_reg 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en) 
           ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_set 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en_w)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_clr 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_reg 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en) 
           ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_set 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en_w)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_clr 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en_w));
}

void Vsim___024root___nba_comb__TOP__130(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__130\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_req_addr_sum 
        = (0x00001fffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_st) 
                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__c_bias_d1)) 
                          + ((0x00000fffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_0_d1) 
                                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_1_d1)) 
                                             + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_2_d1) 
                                                + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__h_bias_3_d1)))) 
                             + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__w_bias_d1))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_valid_d6) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d6)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_valid_d6) 
           & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d6)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_valid_d6) 
           & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d6)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_valid_d6) 
           & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d6)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rls 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2dl_reuse_rls) 
            & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__last_slices))) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_rls) 
              & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rls_slices))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_adv 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_rd_valid_d6) 
           & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pipe_pd_d6 
                  >> 0x00000012U)) & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                      >> 0x0000000bU)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_dummy_w 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_en)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_dummy_l0_en) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_dummy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l0_inc 
        = (0x000000ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l0) 
                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_byte_stride)) 
                          - ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_en)
                              ? 0x80U : 0U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_dummy_w 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_en)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_dummy_l2_en) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_dummy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l2_inc 
        = (0x000000ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l2) 
                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_byte_stride)) 
                          - ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_en)
                              ? 0x80U : 0U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_en 
        = ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                    >> 0x0000000fU)) & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_dummy)) 
                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_dummy_w 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_en)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_dummy_l3_en) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_dummy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l3_inc 
        = (0x000000ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l3) 
                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_byte_stride)) 
                          - ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_en)
                              ? 0x80U : 0U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_en 
        = ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                    >> 0x00000010U)) & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_dummy)) 
                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_dummy_w 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_en)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_dummy_l1_en) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_dummy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l1_inc 
        = (0x000000ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l1) 
                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__pixel_x_byte_stride)) 
                          - ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_en)
                              ? 0x80U : 0U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4399 = (
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_dummy)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_avl_sub 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rls)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc2cdma_dat_entries_w)
            : 0U);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_en 
        = (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d6)) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_adv)) 
           | ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                       >> 0x0000000cU)) & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_dummy)) 
                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_en))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_dummy_w 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_en)) 
           & ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_en) 
                | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_dummy_l2_en)) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g2) 
                  >> 1U)) ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_dummy)
               : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_dummy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_dummy_w 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_en)) 
           & ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_en) 
                | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_dummy_l3_en)) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g2) 
                  >> 1U)) ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_dummy)
               : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_dummy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_en 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_adv) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_exec_sub_h_d6)) 
           | ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                       >> 0x0000000dU)) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4399)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_st_inc 
        = (0x00001fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_st) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_entry_avl_sub)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_dummy_w 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_en)) 
           & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_en) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_dummy_l0_en))
               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_dummy)
               : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_dummy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_dummy_w 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_en)) 
           & ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_en) 
                | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_dummy_l1_en)) 
               & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g2)))
               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_dummy)
               : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_dummy)));
}

extern const VlWide<72>/*2303:0*/ Vsim__ConstPool__CONST_h522daad2_0;
extern const VlWide<32>/*1023:0*/ Vsim__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<64>/*2047:0*/ Vsim__ConstPool__CONST_h6be9aa18_0;
extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h93e1b771_0;

void Vsim___024root___nba_comb__TOP__131(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__131\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<32>/*1023:0*/ __Vtemp_37;
    VlWide<32>/*1023:0*/ __Vtemp_50;
    VlWide<32>/*1023:0*/ __Vtemp_63;
    VlWide<64>/*2047:0*/ __Vtemp_111;
    VlWide<16>/*511:0*/ __Vtemp_136;
    VlWide<16>/*511:0*/ __Vtemp_139;
    VlWide<4>/*127:0*/ __Vtemp_185;
    VlWide<4>/*127:0*/ __Vtemp_186;
    VlWide<4>/*127:0*/ __Vtemp_187;
    VlWide<4>/*127:0*/ __Vtemp_188;
    VlWide<4>/*127:0*/ __Vtemp_189;
    VlWide<4>/*127:0*/ __Vtemp_190;
    VlWide<4>/*127:0*/ __Vtemp_191;
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_dummy) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_lo[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c0_hi[0x0000000fU];
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_dummy) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_hi[0x0000000fU];
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_dummy) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_hi[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c0_lo[0x0000000fU];
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_dummy) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_hi[0x0000000fU];
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_dummy) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_hi[0x0000000fU];
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_dummy) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_hi[0x0000000fU];
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_dummy) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0x0000000fU];
    }
    if ((0x00001000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_lo[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000020U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000021U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000022U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000023U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000024U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000025U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000026U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000027U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000028U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000029U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c0_hi[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000030U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000031U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000032U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000033U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000034U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000035U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000036U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000037U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000038U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000039U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000003aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000003bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000003cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000003dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000003eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000003fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000040U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000041U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000042U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000043U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000044U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000045U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000046U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000047U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c0_lo[0x0000000fU];
    } else {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x00000047U)) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[__Vilp1] 
                = Vsim__ConstPool__CONST_h522daad2_0[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                       >> 0x0000001dU)))) {
        if ((3U == (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l2) 
                          >> 6U)))) {
            __Vtemp_37[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0U];
            __Vtemp_37[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[1U];
            __Vtemp_37[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[2U];
            __Vtemp_37[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[3U];
            __Vtemp_37[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[4U];
            __Vtemp_37[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[5U];
            __Vtemp_37[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[6U];
            __Vtemp_37[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[7U];
            __Vtemp_37[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[8U];
            __Vtemp_37[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[9U];
            __Vtemp_37[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000aU];
            __Vtemp_37[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000bU];
            __Vtemp_37[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000cU];
            __Vtemp_37[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000dU];
            __Vtemp_37[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000eU];
            __Vtemp_37[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000fU];
            __Vtemp_37[0x00000010U] = 0U;
            __Vtemp_37[0x00000011U] = 0U;
            __Vtemp_37[0x00000012U] = 0U;
            __Vtemp_37[0x00000013U] = 0U;
            __Vtemp_37[0x00000014U] = 0U;
            __Vtemp_37[0x00000015U] = 0U;
            __Vtemp_37[0x00000016U] = 0U;
            __Vtemp_37[0x00000017U] = 0U;
            __Vtemp_37[0x00000018U] = 0U;
            __Vtemp_37[0x00000019U] = 0U;
            __Vtemp_37[0x0000001aU] = 0U;
            __Vtemp_37[0x0000001bU] = 0U;
            __Vtemp_37[0x0000001cU] = 0U;
            __Vtemp_37[0x0000001dU] = 0U;
            __Vtemp_37[0x0000001eU] = 0U;
            __Vtemp_37[0x0000001fU] = 0U;
        } else if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l2) 
                                 >> 6U)))) {
            __Vtemp_37[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0U];
            __Vtemp_37[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[1U];
            __Vtemp_37[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[2U];
            __Vtemp_37[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[3U];
            __Vtemp_37[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[4U];
            __Vtemp_37[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[5U];
            __Vtemp_37[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[6U];
            __Vtemp_37[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[7U];
            __Vtemp_37[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[8U];
            __Vtemp_37[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[9U];
            __Vtemp_37[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000aU];
            __Vtemp_37[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000bU];
            __Vtemp_37[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000cU];
            __Vtemp_37[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000dU];
            __Vtemp_37[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000eU];
            __Vtemp_37[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000fU];
            __Vtemp_37[0x00000010U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0U];
            __Vtemp_37[0x00000011U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[1U];
            __Vtemp_37[0x00000012U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[2U];
            __Vtemp_37[0x00000013U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[3U];
            __Vtemp_37[0x00000014U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[4U];
            __Vtemp_37[0x00000015U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[5U];
            __Vtemp_37[0x00000016U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[6U];
            __Vtemp_37[0x00000017U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[7U];
            __Vtemp_37[0x00000018U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[8U];
            __Vtemp_37[0x00000019U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[9U];
            __Vtemp_37[0x0000001aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000aU];
            __Vtemp_37[0x0000001bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000bU];
            __Vtemp_37[0x0000001cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000cU];
            __Vtemp_37[0x0000001dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000dU];
            __Vtemp_37[0x0000001eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000eU];
            __Vtemp_37[0x0000001fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_hi[0x0000000fU];
        } else if ((1U == (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l2) 
                                 >> 6U)))) {
            __Vtemp_37[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0U];
            __Vtemp_37[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[1U];
            __Vtemp_37[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[2U];
            __Vtemp_37[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[3U];
            __Vtemp_37[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[4U];
            __Vtemp_37[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[5U];
            __Vtemp_37[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[6U];
            __Vtemp_37[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[7U];
            __Vtemp_37[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[8U];
            __Vtemp_37[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[9U];
            __Vtemp_37[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000aU];
            __Vtemp_37[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000bU];
            __Vtemp_37[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000cU];
            __Vtemp_37[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000dU];
            __Vtemp_37[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000eU];
            __Vtemp_37[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000fU];
            __Vtemp_37[0x00000010U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0U];
            __Vtemp_37[0x00000011U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[1U];
            __Vtemp_37[0x00000012U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[2U];
            __Vtemp_37[0x00000013U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[3U];
            __Vtemp_37[0x00000014U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[4U];
            __Vtemp_37[0x00000015U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[5U];
            __Vtemp_37[0x00000016U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[6U];
            __Vtemp_37[0x00000017U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[7U];
            __Vtemp_37[0x00000018U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[8U];
            __Vtemp_37[0x00000019U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[9U];
            __Vtemp_37[0x0000001aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000aU];
            __Vtemp_37[0x0000001bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000bU];
            __Vtemp_37[0x0000001cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000cU];
            __Vtemp_37[0x0000001dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000dU];
            __Vtemp_37[0x0000001eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000eU];
            __Vtemp_37[0x0000001fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c0_lo[0x0000000fU];
        } else {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_dummy) {
                __Vtemp_37[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
                __Vtemp_37[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
                __Vtemp_37[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
                __Vtemp_37[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
                __Vtemp_37[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
                __Vtemp_37[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
                __Vtemp_37[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
                __Vtemp_37[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
                __Vtemp_37[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
                __Vtemp_37[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
                __Vtemp_37[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
                __Vtemp_37[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
                __Vtemp_37[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
                __Vtemp_37[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
                __Vtemp_37[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
                __Vtemp_37[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
            } else {
                __Vtemp_37[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[0U];
                __Vtemp_37[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[1U];
                __Vtemp_37[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[2U];
                __Vtemp_37[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[3U];
                __Vtemp_37[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[4U];
                __Vtemp_37[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[5U];
                __Vtemp_37[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[6U];
                __Vtemp_37[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[7U];
                __Vtemp_37[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[8U];
                __Vtemp_37[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[9U];
                __Vtemp_37[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[0x0000000aU];
                __Vtemp_37[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[0x0000000bU];
                __Vtemp_37[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[0x0000000cU];
                __Vtemp_37[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[0x0000000dU];
                __Vtemp_37[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[0x0000000eU];
                __Vtemp_37[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l2c1_lo[0x0000000fU];
            }
            __Vtemp_37[0x00000010U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0U];
            __Vtemp_37[0x00000011U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[1U];
            __Vtemp_37[0x00000012U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[2U];
            __Vtemp_37[0x00000013U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[3U];
            __Vtemp_37[0x00000014U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[4U];
            __Vtemp_37[0x00000015U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[5U];
            __Vtemp_37[0x00000016U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[6U];
            __Vtemp_37[0x00000017U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[7U];
            __Vtemp_37[0x00000018U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[8U];
            __Vtemp_37[0x00000019U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[9U];
            __Vtemp_37[0x0000001aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000aU];
            __Vtemp_37[0x0000001bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000bU];
            __Vtemp_37[0x0000001cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000cU];
            __Vtemp_37[0x0000001dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000dU];
            __Vtemp_37[0x0000001eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000eU];
            __Vtemp_37[0x0000001fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2c1_hi[0x0000000fU];
        }
    } else {
        __Vtemp_37[0U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_37[1U] = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_37[2U] = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_37[3U] = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_37[4U] = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_37[5U] = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_37[6U] = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_37[7U] = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_37[8U] = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_37[9U] = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_37[0x0000000aU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        __Vtemp_37[0x0000000bU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        __Vtemp_37[0x0000000cU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        __Vtemp_37[0x0000000dU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        __Vtemp_37[0x0000000eU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        __Vtemp_37[0x0000000fU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        __Vtemp_37[0x00000010U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        __Vtemp_37[0x00000011U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        __Vtemp_37[0x00000012U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        __Vtemp_37[0x00000013U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        __Vtemp_37[0x00000014U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        __Vtemp_37[0x00000015U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        __Vtemp_37[0x00000016U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        __Vtemp_37[0x00000017U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        __Vtemp_37[0x00000018U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        __Vtemp_37[0x00000019U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        __Vtemp_37[0x0000001aU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        __Vtemp_37[0x0000001bU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        __Vtemp_37[0x0000001cU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        __Vtemp_37[0x0000001dU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        __Vtemp_37[0x0000001eU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        __Vtemp_37[0x0000001fU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
    }
    VL_SHIFTR_WWI(1024,1024,9, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4268, __Vtemp_37, 
                  (0x000001f8U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l2) 
                                  << 3U)));
    if ((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                       >> 0x0000001eU)))) {
        if ((3U == (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l3) 
                          >> 6U)))) {
            __Vtemp_50[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0U];
            __Vtemp_50[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[1U];
            __Vtemp_50[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[2U];
            __Vtemp_50[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[3U];
            __Vtemp_50[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[4U];
            __Vtemp_50[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[5U];
            __Vtemp_50[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[6U];
            __Vtemp_50[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[7U];
            __Vtemp_50[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[8U];
            __Vtemp_50[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[9U];
            __Vtemp_50[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000aU];
            __Vtemp_50[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000bU];
            __Vtemp_50[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000cU];
            __Vtemp_50[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000dU];
            __Vtemp_50[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000eU];
            __Vtemp_50[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000fU];
            __Vtemp_50[0x00000010U] = 0U;
            __Vtemp_50[0x00000011U] = 0U;
            __Vtemp_50[0x00000012U] = 0U;
            __Vtemp_50[0x00000013U] = 0U;
            __Vtemp_50[0x00000014U] = 0U;
            __Vtemp_50[0x00000015U] = 0U;
            __Vtemp_50[0x00000016U] = 0U;
            __Vtemp_50[0x00000017U] = 0U;
            __Vtemp_50[0x00000018U] = 0U;
            __Vtemp_50[0x00000019U] = 0U;
            __Vtemp_50[0x0000001aU] = 0U;
            __Vtemp_50[0x0000001bU] = 0U;
            __Vtemp_50[0x0000001cU] = 0U;
            __Vtemp_50[0x0000001dU] = 0U;
            __Vtemp_50[0x0000001eU] = 0U;
            __Vtemp_50[0x0000001fU] = 0U;
        } else if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l3) 
                                 >> 6U)))) {
            __Vtemp_50[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0U];
            __Vtemp_50[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[1U];
            __Vtemp_50[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[2U];
            __Vtemp_50[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[3U];
            __Vtemp_50[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[4U];
            __Vtemp_50[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[5U];
            __Vtemp_50[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[6U];
            __Vtemp_50[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[7U];
            __Vtemp_50[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[8U];
            __Vtemp_50[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[9U];
            __Vtemp_50[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000aU];
            __Vtemp_50[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000bU];
            __Vtemp_50[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000cU];
            __Vtemp_50[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000dU];
            __Vtemp_50[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000eU];
            __Vtemp_50[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000fU];
            __Vtemp_50[0x00000010U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0U];
            __Vtemp_50[0x00000011U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[1U];
            __Vtemp_50[0x00000012U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[2U];
            __Vtemp_50[0x00000013U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[3U];
            __Vtemp_50[0x00000014U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[4U];
            __Vtemp_50[0x00000015U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[5U];
            __Vtemp_50[0x00000016U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[6U];
            __Vtemp_50[0x00000017U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[7U];
            __Vtemp_50[0x00000018U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[8U];
            __Vtemp_50[0x00000019U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[9U];
            __Vtemp_50[0x0000001aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000aU];
            __Vtemp_50[0x0000001bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000bU];
            __Vtemp_50[0x0000001cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000cU];
            __Vtemp_50[0x0000001dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000dU];
            __Vtemp_50[0x0000001eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000eU];
            __Vtemp_50[0x0000001fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_hi[0x0000000fU];
        } else if ((1U == (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l3) 
                                 >> 6U)))) {
            __Vtemp_50[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0U];
            __Vtemp_50[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[1U];
            __Vtemp_50[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[2U];
            __Vtemp_50[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[3U];
            __Vtemp_50[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[4U];
            __Vtemp_50[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[5U];
            __Vtemp_50[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[6U];
            __Vtemp_50[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[7U];
            __Vtemp_50[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[8U];
            __Vtemp_50[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[9U];
            __Vtemp_50[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000aU];
            __Vtemp_50[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000bU];
            __Vtemp_50[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000cU];
            __Vtemp_50[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000dU];
            __Vtemp_50[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000eU];
            __Vtemp_50[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000fU];
            __Vtemp_50[0x00000010U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0U];
            __Vtemp_50[0x00000011U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[1U];
            __Vtemp_50[0x00000012U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[2U];
            __Vtemp_50[0x00000013U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[3U];
            __Vtemp_50[0x00000014U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[4U];
            __Vtemp_50[0x00000015U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[5U];
            __Vtemp_50[0x00000016U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[6U];
            __Vtemp_50[0x00000017U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[7U];
            __Vtemp_50[0x00000018U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[8U];
            __Vtemp_50[0x00000019U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[9U];
            __Vtemp_50[0x0000001aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000aU];
            __Vtemp_50[0x0000001bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000bU];
            __Vtemp_50[0x0000001cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000cU];
            __Vtemp_50[0x0000001dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000dU];
            __Vtemp_50[0x0000001eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000eU];
            __Vtemp_50[0x0000001fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c0_lo[0x0000000fU];
        } else {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_dummy) {
                __Vtemp_50[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
                __Vtemp_50[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
                __Vtemp_50[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
                __Vtemp_50[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
                __Vtemp_50[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
                __Vtemp_50[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
                __Vtemp_50[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
                __Vtemp_50[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
                __Vtemp_50[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
                __Vtemp_50[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
                __Vtemp_50[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
                __Vtemp_50[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
                __Vtemp_50[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
                __Vtemp_50[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
                __Vtemp_50[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
                __Vtemp_50[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
            } else {
                __Vtemp_50[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[0U];
                __Vtemp_50[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[1U];
                __Vtemp_50[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[2U];
                __Vtemp_50[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[3U];
                __Vtemp_50[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[4U];
                __Vtemp_50[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[5U];
                __Vtemp_50[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[6U];
                __Vtemp_50[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[7U];
                __Vtemp_50[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[8U];
                __Vtemp_50[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[9U];
                __Vtemp_50[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[0x0000000aU];
                __Vtemp_50[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[0x0000000bU];
                __Vtemp_50[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[0x0000000cU];
                __Vtemp_50[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[0x0000000dU];
                __Vtemp_50[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[0x0000000eU];
                __Vtemp_50[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l3c1_lo[0x0000000fU];
            }
            __Vtemp_50[0x00000010U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0U];
            __Vtemp_50[0x00000011U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[1U];
            __Vtemp_50[0x00000012U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[2U];
            __Vtemp_50[0x00000013U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[3U];
            __Vtemp_50[0x00000014U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[4U];
            __Vtemp_50[0x00000015U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[5U];
            __Vtemp_50[0x00000016U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[6U];
            __Vtemp_50[0x00000017U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[7U];
            __Vtemp_50[0x00000018U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[8U];
            __Vtemp_50[0x00000019U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[9U];
            __Vtemp_50[0x0000001aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000aU];
            __Vtemp_50[0x0000001bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000bU];
            __Vtemp_50[0x0000001cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000cU];
            __Vtemp_50[0x0000001dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000dU];
            __Vtemp_50[0x0000001eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000eU];
            __Vtemp_50[0x0000001fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l3c1_hi[0x0000000fU];
        }
    } else {
        __Vtemp_50[0U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_50[1U] = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_50[2U] = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_50[3U] = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_50[4U] = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_50[5U] = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_50[6U] = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_50[7U] = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_50[8U] = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_50[9U] = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_50[0x0000000aU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        __Vtemp_50[0x0000000bU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        __Vtemp_50[0x0000000cU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        __Vtemp_50[0x0000000dU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        __Vtemp_50[0x0000000eU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        __Vtemp_50[0x0000000fU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        __Vtemp_50[0x00000010U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        __Vtemp_50[0x00000011U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        __Vtemp_50[0x00000012U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        __Vtemp_50[0x00000013U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        __Vtemp_50[0x00000014U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        __Vtemp_50[0x00000015U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        __Vtemp_50[0x00000016U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        __Vtemp_50[0x00000017U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        __Vtemp_50[0x00000018U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        __Vtemp_50[0x00000019U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        __Vtemp_50[0x0000001aU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        __Vtemp_50[0x0000001bU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        __Vtemp_50[0x0000001cU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        __Vtemp_50[0x0000001dU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        __Vtemp_50[0x0000001eU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        __Vtemp_50[0x0000001fU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
    }
    VL_SHIFTR_WWI(1024,1024,9, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269, __Vtemp_50, 
                  (0x000001f8U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l3) 
                                  << 3U)));
    if ((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                       >> 0x0000001cU)))) {
        if ((3U == (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l1) 
                          >> 6U)))) {
            __Vtemp_63[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0U];
            __Vtemp_63[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[1U];
            __Vtemp_63[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[2U];
            __Vtemp_63[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[3U];
            __Vtemp_63[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[4U];
            __Vtemp_63[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[5U];
            __Vtemp_63[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[6U];
            __Vtemp_63[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[7U];
            __Vtemp_63[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[8U];
            __Vtemp_63[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[9U];
            __Vtemp_63[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000aU];
            __Vtemp_63[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000bU];
            __Vtemp_63[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000cU];
            __Vtemp_63[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000dU];
            __Vtemp_63[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000eU];
            __Vtemp_63[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000fU];
            __Vtemp_63[0x00000010U] = 0U;
            __Vtemp_63[0x00000011U] = 0U;
            __Vtemp_63[0x00000012U] = 0U;
            __Vtemp_63[0x00000013U] = 0U;
            __Vtemp_63[0x00000014U] = 0U;
            __Vtemp_63[0x00000015U] = 0U;
            __Vtemp_63[0x00000016U] = 0U;
            __Vtemp_63[0x00000017U] = 0U;
            __Vtemp_63[0x00000018U] = 0U;
            __Vtemp_63[0x00000019U] = 0U;
            __Vtemp_63[0x0000001aU] = 0U;
            __Vtemp_63[0x0000001bU] = 0U;
            __Vtemp_63[0x0000001cU] = 0U;
            __Vtemp_63[0x0000001dU] = 0U;
            __Vtemp_63[0x0000001eU] = 0U;
            __Vtemp_63[0x0000001fU] = 0U;
        } else if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l1) 
                                 >> 6U)))) {
            __Vtemp_63[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0U];
            __Vtemp_63[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[1U];
            __Vtemp_63[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[2U];
            __Vtemp_63[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[3U];
            __Vtemp_63[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[4U];
            __Vtemp_63[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[5U];
            __Vtemp_63[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[6U];
            __Vtemp_63[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[7U];
            __Vtemp_63[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[8U];
            __Vtemp_63[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[9U];
            __Vtemp_63[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000aU];
            __Vtemp_63[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000bU];
            __Vtemp_63[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000cU];
            __Vtemp_63[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000dU];
            __Vtemp_63[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000eU];
            __Vtemp_63[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000fU];
            __Vtemp_63[0x00000010U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0U];
            __Vtemp_63[0x00000011U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[1U];
            __Vtemp_63[0x00000012U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[2U];
            __Vtemp_63[0x00000013U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[3U];
            __Vtemp_63[0x00000014U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[4U];
            __Vtemp_63[0x00000015U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[5U];
            __Vtemp_63[0x00000016U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[6U];
            __Vtemp_63[0x00000017U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[7U];
            __Vtemp_63[0x00000018U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[8U];
            __Vtemp_63[0x00000019U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[9U];
            __Vtemp_63[0x0000001aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000aU];
            __Vtemp_63[0x0000001bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000bU];
            __Vtemp_63[0x0000001cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000cU];
            __Vtemp_63[0x0000001dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000dU];
            __Vtemp_63[0x0000001eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000eU];
            __Vtemp_63[0x0000001fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_hi[0x0000000fU];
        } else if ((1U == (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l1) 
                                 >> 6U)))) {
            __Vtemp_63[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0U];
            __Vtemp_63[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[1U];
            __Vtemp_63[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[2U];
            __Vtemp_63[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[3U];
            __Vtemp_63[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[4U];
            __Vtemp_63[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[5U];
            __Vtemp_63[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[6U];
            __Vtemp_63[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[7U];
            __Vtemp_63[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[8U];
            __Vtemp_63[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[9U];
            __Vtemp_63[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000aU];
            __Vtemp_63[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000bU];
            __Vtemp_63[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000cU];
            __Vtemp_63[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000dU];
            __Vtemp_63[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000eU];
            __Vtemp_63[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000fU];
            __Vtemp_63[0x00000010U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0U];
            __Vtemp_63[0x00000011U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[1U];
            __Vtemp_63[0x00000012U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[2U];
            __Vtemp_63[0x00000013U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[3U];
            __Vtemp_63[0x00000014U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[4U];
            __Vtemp_63[0x00000015U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[5U];
            __Vtemp_63[0x00000016U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[6U];
            __Vtemp_63[0x00000017U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[7U];
            __Vtemp_63[0x00000018U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[8U];
            __Vtemp_63[0x00000019U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[9U];
            __Vtemp_63[0x0000001aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000aU];
            __Vtemp_63[0x0000001bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000bU];
            __Vtemp_63[0x0000001cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000cU];
            __Vtemp_63[0x0000001dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000dU];
            __Vtemp_63[0x0000001eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000eU];
            __Vtemp_63[0x0000001fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c0_lo[0x0000000fU];
        } else {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_dummy) {
                __Vtemp_63[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
                __Vtemp_63[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
                __Vtemp_63[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
                __Vtemp_63[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
                __Vtemp_63[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
                __Vtemp_63[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
                __Vtemp_63[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
                __Vtemp_63[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
                __Vtemp_63[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
                __Vtemp_63[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
                __Vtemp_63[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
                __Vtemp_63[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
                __Vtemp_63[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
                __Vtemp_63[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
                __Vtemp_63[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
                __Vtemp_63[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
            } else {
                __Vtemp_63[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[0U];
                __Vtemp_63[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[1U];
                __Vtemp_63[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[2U];
                __Vtemp_63[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[3U];
                __Vtemp_63[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[4U];
                __Vtemp_63[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[5U];
                __Vtemp_63[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[6U];
                __Vtemp_63[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[7U];
                __Vtemp_63[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[8U];
                __Vtemp_63[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[9U];
                __Vtemp_63[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[0x0000000aU];
                __Vtemp_63[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[0x0000000bU];
                __Vtemp_63[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[0x0000000cU];
                __Vtemp_63[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[0x0000000dU];
                __Vtemp_63[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[0x0000000eU];
                __Vtemp_63[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l1c1_lo[0x0000000fU];
            }
            __Vtemp_63[0x00000010U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0U];
            __Vtemp_63[0x00000011U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[1U];
            __Vtemp_63[0x00000012U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[2U];
            __Vtemp_63[0x00000013U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[3U];
            __Vtemp_63[0x00000014U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[4U];
            __Vtemp_63[0x00000015U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[5U];
            __Vtemp_63[0x00000016U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[6U];
            __Vtemp_63[0x00000017U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[7U];
            __Vtemp_63[0x00000018U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[8U];
            __Vtemp_63[0x00000019U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[9U];
            __Vtemp_63[0x0000001aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000aU];
            __Vtemp_63[0x0000001bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000bU];
            __Vtemp_63[0x0000001cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000cU];
            __Vtemp_63[0x0000001dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000dU];
            __Vtemp_63[0x0000001eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000eU];
            __Vtemp_63[0x0000001fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1c1_hi[0x0000000fU];
        }
    } else {
        __Vtemp_63[0U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_63[1U] = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_63[2U] = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_63[3U] = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_63[4U] = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_63[5U] = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_63[6U] = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_63[7U] = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_63[8U] = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_63[9U] = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_63[0x0000000aU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        __Vtemp_63[0x0000000bU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        __Vtemp_63[0x0000000cU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        __Vtemp_63[0x0000000dU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        __Vtemp_63[0x0000000eU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        __Vtemp_63[0x0000000fU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        __Vtemp_63[0x00000010U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        __Vtemp_63[0x00000011U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        __Vtemp_63[0x00000012U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        __Vtemp_63[0x00000013U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        __Vtemp_63[0x00000014U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        __Vtemp_63[0x00000015U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        __Vtemp_63[0x00000016U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        __Vtemp_63[0x00000017U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        __Vtemp_63[0x00000018U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        __Vtemp_63[0x00000019U] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        __Vtemp_63[0x0000001aU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        __Vtemp_63[0x0000001bU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        __Vtemp_63[0x0000001cU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        __Vtemp_63[0x0000001dU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        __Vtemp_63[0x0000001eU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        __Vtemp_63[0x0000001fU] = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
    }
    VL_SHIFTR_WWI(1024,1024,9, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267, __Vtemp_63, 
                  (0x000001f8U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l1) 
                                  << 3U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[6U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[7U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[7U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[8U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[8U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[9U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[9U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000aU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000aU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000bU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000bU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000cU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000cU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000dU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000dU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000eU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000eU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000fU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000fU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000010U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000011U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000012U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000013U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000014U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000015U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000016U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[6U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000017U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[7U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000018U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[8U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000019U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[9U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001aU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000aU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001bU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000bU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001cU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000cU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001dU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000dU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001eU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000eU];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001fU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000fU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[4U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001cU])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000018U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[1U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[5U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001dU])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[1U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000019U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[2U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[6U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001eU])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[2U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001aU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[3U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[7U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001fU])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[3U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001bU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[4U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[8U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000020U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[4U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001cU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[5U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[9U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000021U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[5U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001dU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[6U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000000aU]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000022U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[6U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001eU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[7U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000000bU]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000023U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[7U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001fU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[8U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000010U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000028U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000000cU]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000024U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[9U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000011U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000029U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000000dU]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000025U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000aU] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000012U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002aU])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000000eU]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000026U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000bU] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000013U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002bU])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000000fU]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000027U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000cU] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000014U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002cU])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000010U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000028U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000dU] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000015U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002dU])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000011U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000029U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000eU] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000016U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002eU])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000012U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002aU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000fU] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000017U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002fU])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000013U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002bU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000010U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001cU]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000034U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000018U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000030U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000011U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001dU]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000035U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000019U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000031U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000012U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001eU]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000036U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001aU]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000032U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000013U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001fU]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000037U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001bU]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000033U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000014U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000020U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000038U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001cU]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000034U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000015U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000021U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000039U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001dU]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000035U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000016U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000022U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000003aU])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001eU]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000036U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000017U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000023U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000003bU])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000001fU]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000037U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000018U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000028U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000040U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000024U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000003cU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000019U] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000029U]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000041U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000025U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000003dU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001aU] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002aU]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000042U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000026U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000003eU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001bU] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002bU]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000043U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000027U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000003fU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001cU] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002cU]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000044U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000028U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000040U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001dU] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002dU]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000045U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000029U]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000041U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001eU] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002eU]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000046U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002aU]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000042U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001fU] 
        = ((((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lt))) 
             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002fU]) 
            | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_lb))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000047U])) 
           | (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rt))) 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x0000002bU]) 
              | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg_sel_rb))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg[0x00000043U])));
    if ((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                       >> 0x0000001bU)))) {
        if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l0))) {
            __Vtemp_111[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0U];
            __Vtemp_111[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[1U];
            __Vtemp_111[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[2U];
            __Vtemp_111[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[3U];
            __Vtemp_111[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[4U];
            __Vtemp_111[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[5U];
            __Vtemp_111[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[6U];
            __Vtemp_111[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[7U];
            __Vtemp_111[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[8U];
            __Vtemp_111[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[9U];
            __Vtemp_111[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000aU];
            __Vtemp_111[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000bU];
            __Vtemp_111[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000cU];
            __Vtemp_111[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000dU];
            __Vtemp_111[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000eU];
            __Vtemp_111[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000fU];
            __Vtemp_111[0x00000010U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0U];
            __Vtemp_111[0x00000011U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[1U];
            __Vtemp_111[0x00000012U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[2U];
            __Vtemp_111[0x00000013U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[3U];
            __Vtemp_111[0x00000014U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[4U];
            __Vtemp_111[0x00000015U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[5U];
            __Vtemp_111[0x00000016U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[6U];
            __Vtemp_111[0x00000017U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[7U];
            __Vtemp_111[0x00000018U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[8U];
            __Vtemp_111[0x00000019U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[9U];
            __Vtemp_111[0x0000001aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000aU];
            __Vtemp_111[0x0000001bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000bU];
            __Vtemp_111[0x0000001cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000cU];
            __Vtemp_111[0x0000001dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000dU];
            __Vtemp_111[0x0000001eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000eU];
            __Vtemp_111[0x0000001fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000fU];
            __Vtemp_111[0x00000020U] = 0U;
            __Vtemp_111[0x00000021U] = 0U;
            __Vtemp_111[0x00000022U] = 0U;
            __Vtemp_111[0x00000023U] = 0U;
            __Vtemp_111[0x00000024U] = 0U;
            __Vtemp_111[0x00000025U] = 0U;
            __Vtemp_111[0x00000026U] = 0U;
            __Vtemp_111[0x00000027U] = 0U;
            __Vtemp_111[0x00000028U] = 0U;
            __Vtemp_111[0x00000029U] = 0U;
            __Vtemp_111[0x0000002aU] = 0U;
            __Vtemp_111[0x0000002bU] = 0U;
            __Vtemp_111[0x0000002cU] = 0U;
            __Vtemp_111[0x0000002dU] = 0U;
            __Vtemp_111[0x0000002eU] = 0U;
            __Vtemp_111[0x0000002fU] = 0U;
            __Vtemp_111[0x00000030U] = 0U;
            __Vtemp_111[0x00000031U] = 0U;
            __Vtemp_111[0x00000032U] = 0U;
            __Vtemp_111[0x00000033U] = 0U;
            __Vtemp_111[0x00000034U] = 0U;
            __Vtemp_111[0x00000035U] = 0U;
            __Vtemp_111[0x00000036U] = 0U;
            __Vtemp_111[0x00000037U] = 0U;
            __Vtemp_111[0x00000038U] = 0U;
            __Vtemp_111[0x00000039U] = 0U;
            __Vtemp_111[0x0000003aU] = 0U;
            __Vtemp_111[0x0000003bU] = 0U;
            __Vtemp_111[0x0000003cU] = 0U;
            __Vtemp_111[0x0000003dU] = 0U;
            __Vtemp_111[0x0000003eU] = 0U;
            __Vtemp_111[0x0000003fU] = 0U;
        } else {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_dummy) {
                __Vtemp_111[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
                __Vtemp_111[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
                __Vtemp_111[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
                __Vtemp_111[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
                __Vtemp_111[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
                __Vtemp_111[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
                __Vtemp_111[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
                __Vtemp_111[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
                __Vtemp_111[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
                __Vtemp_111[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
                __Vtemp_111[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
                __Vtemp_111[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
                __Vtemp_111[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
                __Vtemp_111[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
                __Vtemp_111[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
                __Vtemp_111[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
                __Vtemp_111[0x00000010U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0U];
                __Vtemp_111[0x00000011U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[1U];
                __Vtemp_111[0x00000012U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[2U];
                __Vtemp_111[0x00000013U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[3U];
                __Vtemp_111[0x00000014U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[4U];
                __Vtemp_111[0x00000015U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[5U];
                __Vtemp_111[0x00000016U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[6U];
                __Vtemp_111[0x00000017U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[7U];
                __Vtemp_111[0x00000018U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[8U];
                __Vtemp_111[0x00000019U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[9U];
                __Vtemp_111[0x0000001aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000aU];
                __Vtemp_111[0x0000001bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000bU];
                __Vtemp_111[0x0000001cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000cU];
                __Vtemp_111[0x0000001dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000dU];
                __Vtemp_111[0x0000001eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000eU];
                __Vtemp_111[0x0000001fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pad_value[0x0000000fU];
            } else {
                __Vtemp_111[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[0U];
                __Vtemp_111[1U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[1U];
                __Vtemp_111[2U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[2U];
                __Vtemp_111[3U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[3U];
                __Vtemp_111[4U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[4U];
                __Vtemp_111[5U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[5U];
                __Vtemp_111[6U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[6U];
                __Vtemp_111[7U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[7U];
                __Vtemp_111[8U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[8U];
                __Vtemp_111[9U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[9U];
                __Vtemp_111[0x0000000aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[0x0000000aU];
                __Vtemp_111[0x0000000bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[0x0000000bU];
                __Vtemp_111[0x0000000cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[0x0000000cU];
                __Vtemp_111[0x0000000dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[0x0000000dU];
                __Vtemp_111[0x0000000eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[0x0000000eU];
                __Vtemp_111[0x0000000fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_lo[0x0000000fU];
                __Vtemp_111[0x00000010U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[0U];
                __Vtemp_111[0x00000011U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[1U];
                __Vtemp_111[0x00000012U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[2U];
                __Vtemp_111[0x00000013U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[3U];
                __Vtemp_111[0x00000014U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[4U];
                __Vtemp_111[0x00000015U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[5U];
                __Vtemp_111[0x00000016U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[6U];
                __Vtemp_111[0x00000017U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[7U];
                __Vtemp_111[0x00000018U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[8U];
                __Vtemp_111[0x00000019U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[9U];
                __Vtemp_111[0x0000001aU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[0x0000000aU];
                __Vtemp_111[0x0000001bU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[0x0000000bU];
                __Vtemp_111[0x0000001cU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[0x0000000cU];
                __Vtemp_111[0x0000001dU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[0x0000000dU];
                __Vtemp_111[0x0000001eU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[0x0000000eU];
                __Vtemp_111[0x0000001fU] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_l0c1_hi[0x0000000fU];
            }
            __Vtemp_111[0x00000020U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0U];
            __Vtemp_111[0x00000021U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[1U];
            __Vtemp_111[0x00000022U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[2U];
            __Vtemp_111[0x00000023U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[3U];
            __Vtemp_111[0x00000024U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[4U];
            __Vtemp_111[0x00000025U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[5U];
            __Vtemp_111[0x00000026U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[6U];
            __Vtemp_111[0x00000027U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[7U];
            __Vtemp_111[0x00000028U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[8U];
            __Vtemp_111[0x00000029U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[9U];
            __Vtemp_111[0x0000002aU] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000aU];
            __Vtemp_111[0x0000002bU] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000bU];
            __Vtemp_111[0x0000002cU] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000cU];
            __Vtemp_111[0x0000002dU] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000dU];
            __Vtemp_111[0x0000002eU] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000eU];
            __Vtemp_111[0x0000002fU] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000fU];
            __Vtemp_111[0x00000030U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000010U];
            __Vtemp_111[0x00000031U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000011U];
            __Vtemp_111[0x00000032U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000012U];
            __Vtemp_111[0x00000033U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000013U];
            __Vtemp_111[0x00000034U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000014U];
            __Vtemp_111[0x00000035U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000015U];
            __Vtemp_111[0x00000036U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000016U];
            __Vtemp_111[0x00000037U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000017U];
            __Vtemp_111[0x00000038U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000018U];
            __Vtemp_111[0x00000039U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000019U];
            __Vtemp_111[0x0000003aU] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001aU];
            __Vtemp_111[0x0000003bU] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001bU];
            __Vtemp_111[0x0000003cU] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001cU];
            __Vtemp_111[0x0000003dU] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001dU];
            __Vtemp_111[0x0000003eU] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001eU];
            __Vtemp_111[0x0000003fU] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001fU];
        }
    } else {
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x0000003fU)) {
            __Vtemp_111[__Vilp2] = Vsim__ConstPool__CONST_h6be9aa18_0[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
    }
    VL_SHIFTR_WWI(2048,2048,10, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266, __Vtemp_111, 
                  (0x000003f8U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__rsp_sft_cnt_l0) 
                                  << 3U)));
    VL_SHIFTR_WWI(512,512,32, __Vtemp_136, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo, 0x00000100U);
    VL_SHIFTR_WWI(512,512,32, __Vtemp_139, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi, 0x00000100U);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0U]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0U]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0U]
                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                             ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[8U]
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0U]
                                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[8U]
                                     : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[0U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[0U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[1U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[1U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[1U]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[1U]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[1U]
                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                             ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[9U]
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[1U]
                                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[9U]
                                     : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[1U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[1U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[1U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[1U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[1U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[1U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[1U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[1U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[1U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[2U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[2U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[2U]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[2U]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[2U]
                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                             ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000aU]
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[2U]
                                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000aU]
                                     : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[2U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[2U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[2U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[2U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[2U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[2U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[2U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[2U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[2U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[3U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[3U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[3U]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[3U]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[3U]
                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                             ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000bU]
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[3U]
                                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000bU]
                                     : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[3U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[3U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[3U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[3U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[3U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[3U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[3U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[3U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[3U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[4U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[4U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[4U]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[4U]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[4U]
                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                             ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000cU]
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[4U]
                                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000cU]
                                     : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[4U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[4U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[4U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[4U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[4U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[4U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[4U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[4U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[4U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[5U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[5U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[5U]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[5U]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[5U]
                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                             ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000dU]
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[5U]
                                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000dU]
                                     : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[5U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[5U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[5U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[5U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[5U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[5U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[5U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[5U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[5U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[6U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[6U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[6U]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[6U]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[6U]
                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                             ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000eU]
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[6U]
                                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000eU]
                                     : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[6U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[6U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[6U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[6U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[6U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[6U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[6U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[6U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[6U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[7U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[7U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[7U]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[7U]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[7U]
                         : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                             ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000fU]
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[7U]
                                 : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000fU]
                                     : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[7U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[7U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[7U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[7U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[7U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[7U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[7U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[7U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[7U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[8U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[8U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[8U]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[8U]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                  ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                           ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[8U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[8U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[8U]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[8U]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[8U]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[8U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[9U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[9U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[9U]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[9U]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                  ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                           ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[9U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[9U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[9U]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[9U]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[9U]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[9U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000000aU] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000aU]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000aU]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                  ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                           ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000aU]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[0x0000000aU]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[0x0000000aU]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000aU]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000aU]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000000bU] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000bU]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000bU]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                  ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                           ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000bU]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[0x0000000bU]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[0x0000000bU]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000bU]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000bU]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000000cU] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000cU]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000cU]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                  ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                           ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000cU]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[0x0000000cU]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[0x0000000cU]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000cU]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000cU]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000000dU] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000dU]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000dU]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                  ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                           ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000dU]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[0x0000000dU]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[0x0000000dU]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000dU]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000dU]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000000eU] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000eU]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000eU]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                  ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                           ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000eU]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[0x0000000eU]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[0x0000000eU]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000eU]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000eU]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000000fU] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000fU]
                 : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                     ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000fU]
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                         ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                  ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                           ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000000fU]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[0x0000000fU]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[0x0000000fU]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000fU]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000fU]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000010U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000010U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[0U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[0U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000011U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000011U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[1U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[1U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[1U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[1U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[1U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[1U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[1U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[1U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000012U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000012U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[2U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[2U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[2U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[2U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[2U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[2U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[2U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[2U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000013U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000013U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[3U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[3U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[3U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[3U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[3U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[3U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[3U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[3U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000014U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000014U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[4U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[4U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[4U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[4U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[4U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[4U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[4U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[4U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000015U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000015U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[5U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[5U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[5U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[5U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[5U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[5U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[5U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[5U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000016U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000016U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[6U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[6U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[6U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[6U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[6U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[6U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[6U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[6U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000017U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000017U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[7U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[7U]
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[7U]
                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                           ? __Vtemp_136[7U] : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                 ? 
                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[7U]
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                  ? 
                                                 __Vtemp_139[7U]
                                                  : 
                                                 ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                       >> 4U) 
                                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            >> 5U))))
                                                   ? 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[7U]
                                                   : 
                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[7U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000018U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000018U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[8U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[8U]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[8U]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[8U]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[8U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000019U] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x00000019U]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[9U]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[9U]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[9U]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[9U]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[9U]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000001aU] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001aU]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[0x0000000aU]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[0x0000000aU]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000aU]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000aU]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000001bU] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001bU]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[0x0000000bU]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[0x0000000bU]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000bU]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000bU]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000001cU] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001cU]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[0x0000000cU]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[0x0000000cU]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000cU]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000cU]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000001dU] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001dU]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[0x0000000dU]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[0x0000000dU]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000dU]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000dU]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000001eU] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001eU]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[0x0000000eU]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[0x0000000eU]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000eU]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000eU]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000001fU] 
        = (((1U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                    >> 9U) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                               >> 0x0000000dU) | (IData)(
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                          >> 0x00000019U)))))
             ? Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU]
             : (((~ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257))
                 ? 0U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4257) 
                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                   ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                              ? 0U : 
                                             vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4265[0x0000001fU]))))))) 
           | ((1U & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                         >> 0x0000000aU)) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_winograd_d1 
                                              >> 0x0000000eU) 
                                             | (IData)(
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                                        >> 0x0000001aU)))))
               ? Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU]
               : (((0x20U >= (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                             >> 7U))) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                      >> 4U)) ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4259)
                                       ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4261)
                                                ? __Vtemp_136[0x0000000fU]
                                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4262)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4264)
                                                     ? 
                                                    __Vtemp_139[0x0000000fU]
                                                     : 
                                                    ((1U 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                          >> 4U) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                               >> 5U))))
                                                      ? 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_hi[0x0000000fU]
                                                      : 
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0c0_lo[0x0000000fU]))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch0[0U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[2U] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[2U])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch0[1U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[6U] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[6U])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[4U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[4U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch0[2U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000aU] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000aU])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[8U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[8U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch0[3U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000eU] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000eU])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000cU] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000cU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch0[4U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000012U] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000012U])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000010U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000010U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch0[5U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000016U] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000016U])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000014U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000014U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch0[6U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001aU] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001aU])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000018U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000018U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch0[7U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001eU] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001eU])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001cU] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001cU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch4[0U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[3U] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[3U])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[1U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[1U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch4[1U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[7U] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[7U])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[5U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[5U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch4[2U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000bU] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000bU])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[9U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[9U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch4[3U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000fU] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000fU])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000dU] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000dU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch4[4U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000013U] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000013U])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000011U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000011U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch4[5U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000017U] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000017U])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000015U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000015U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch4[6U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001bU] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001bU])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000019U] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000019U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch4[7U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001fU] 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001fU])) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001dU] 
                                                              >> 7U)))) 
                                               << 8U)) 
                               | (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001dU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch1[0U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[2U] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[2U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0U] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch1[1U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[6U] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[6U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[4U] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[4U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch1[2U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000aU] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000aU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[8U] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[8U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch1[3U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000eU] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000eU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000cU] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000cU] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch1[4U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000012U] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000012U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000010U] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000010U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch1[5U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000016U] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000016U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000014U] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000014U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch1[6U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001aU] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001aU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000018U] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000018U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch1[7U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001eU] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001eU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001cU] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001cU] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch5[0U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[3U] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[3U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[1U] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[1U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch5[1U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[7U] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[7U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[5U] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[5U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch5[2U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000bU] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000bU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[9U] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[9U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch5[3U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000fU] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000fU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000dU] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000dU] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch5[4U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000013U] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000013U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000011U] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000011U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch5[5U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000017U] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000017U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000015U] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000015U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch5[6U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001bU] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001bU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000019U] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000019U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch5[7U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001fU] 
                                               >> 0x0000000fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001fU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001dU] 
                                                              >> 0x0000000fU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001dU] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch2[0U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[2U] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[2U] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0U] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch2[1U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[6U] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[6U] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[4U] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[4U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch2[2U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000aU] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000aU] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[8U] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[8U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch2[3U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000eU] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000eU] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000cU] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000cU] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch2[4U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000012U] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000012U] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000010U] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000010U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch2[5U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000016U] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000016U] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000014U] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000014U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch2[6U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001aU] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001aU] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000018U] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000018U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch2[7U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001eU] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001eU] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001cU] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001cU] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch6[0U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[3U] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[3U] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[1U] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[1U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch6[1U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[7U] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[7U] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[5U] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[5U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch6[2U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000bU] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000bU] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[9U] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[9U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch6[3U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000fU] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000fU] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000dU] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000dU] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch6[4U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000013U] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000013U] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000011U] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000011U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch6[5U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000017U] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000017U] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000015U] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000015U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch6[6U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001bU] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001bU] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000019U] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000019U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch6[7U] 
        = ((((0x0000ff00U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001fU] 
                                               >> 0x00000017U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001fU] 
                                           >> 0x00000010U))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001dU] 
                                                              >> 0x00000017U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001dU] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch3[0U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[2U] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[2U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0U] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch3[1U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[6U] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[6U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[4U] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[4U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch3[2U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000aU] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000aU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[8U] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[8U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch3[3U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000eU] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000eU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000cU] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000cU] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch3[4U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000012U] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000012U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000010U] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000010U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch3[5U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000016U] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000016U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000014U] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000014U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch3[6U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001aU] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001aU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000018U] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000018U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch3[7U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001eU] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001eU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001cU] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001cU] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch7[0U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[3U] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[3U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[1U] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[1U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch7[1U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[7U] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[7U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[5U] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[5U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch7[2U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000bU] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000bU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[9U] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[9U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch7[3U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000fU] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000fU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000dU] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000000dU] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch7[4U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000013U] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000013U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000011U] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000011U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch7[5U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000017U] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000017U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000015U] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000015U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch7[6U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001bU] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001bU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000019U] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x00000019U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_wg_8b_ch7[7U] 
        = ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001fU] 
                                         >> 0x0000001fU))) 
                             << 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001fU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001dU] 
                                                           >> 0x0000001fU))) 
                                               << 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_wg[0x0000001dU] 
                                  >> 0x00000018U)));
    if ((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                       >> 0x00000021U)))) {
        if ((0x00002000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1)) {
            if ((1U & ((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                >> 0x00000020U)) & 
                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                        >> 0x0000000cU)))) {
                if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g8))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[3U];
                } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g8))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[4U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[5U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[6U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[7U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[4U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[5U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[6U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[7U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[4U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[5U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[6U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[7U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[4U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[5U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[6U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[7U];
                } else {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[4U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[5U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[6U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[7U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[8U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[9U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000aU];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000bU];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000cU];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000dU];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000eU];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000fU];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[3U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[4U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[5U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[6U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[7U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[8U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[9U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000aU];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000bU];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000cU];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000dU];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000eU];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000fU];
                }
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[2U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[3U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[4U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[5U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[6U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[7U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[8U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[9U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[2U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[3U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[4U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[5U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[6U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[7U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[8U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[9U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU] 
                    = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
            }
        } else if ((1U & ((~ (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_img_d1 
                                      >> 0x0000001fU))) 
                          | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1 
                             >> 0x0000000bU)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU] 
                = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
        } else if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g7))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d3[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l1_sft_d3[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l2_sft_d3[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4269[7U];
        } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g7))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_l0_sft_d1[0x0000000fU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4267[0x0000000fU];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000000fU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x00000010U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x00000011U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x00000012U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x00000013U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x00000014U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x00000015U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x00000016U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x00000017U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x00000018U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x00000019U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000001aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000001bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000001cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000001dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000001eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4266[0x0000001fU];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_conv[0x0000001fU];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_int8 
        = (((QData)((IData)((((((((((0U != (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                                            >> 0x00000018U)) 
                                    << 3U) | ((0U != 
                                               (0x000000ffU 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                                                   >> 0x00000010U))) 
                                              << 2U)) 
                                  | (((0U != (0x000000ffU 
                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                                                 >> 8U))) 
                                      << 1U) | (0U 
                                                != 
                                                (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU])))) 
                                 << 0x0000000cU) | 
                                (((((0U != (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                                            >> 0x00000018U)) 
                                    << 3U) | ((0U != 
                                               (0x000000ffU 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                                                   >> 0x00000010U))) 
                                              << 2U)) 
                                  | (((0U != (0x000000ffU 
                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                                                 >> 8U))) 
                                      << 1U) | (0U 
                                                != 
                                                (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU])))) 
                                 << 8U)) | ((((((0U 
                                                 != 
                                                 (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                                                  >> 0x00000018U)) 
                                                << 3U) 
                                               | ((0U 
                                                   != 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                                                       >> 0x00000010U))) 
                                                  << 2U)) 
                                              | (((0U 
                                                   != 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                                                       >> 8U))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (0x000000ffU 
                                                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU])))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != 
                                                  (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                                                   >> 0x00000018U)) 
                                                 << 3U) 
                                                | ((0U 
                                                    != 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                                                        >> 0x00000010U))) 
                                                   << 2U)) 
                                               | (((0U 
                                                    != 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                                                        >> 8U))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     (0x000000ffU 
                                                      & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU])))))) 
                              << 0x00000010U) | (((
                                                   ((((0U 
                                                       != 
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                                                        >> 0x00000018U)) 
                                                      << 3U) 
                                                     | ((0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                                                             >> 0x00000010U))) 
                                                        << 2U)) 
                                                    | (((0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                                                             >> 8U))) 
                                                        << 1U) 
                                                       | (0U 
                                                          != 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU])))) 
                                                   << 0x0000000cU) 
                                                  | (((((0U 
                                                         != 
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                                                          >> 0x00000018U)) 
                                                        << 3U) 
                                                       | ((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                                                               >> 0x00000010U))) 
                                                          << 2U)) 
                                                      | (((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                                                               >> 8U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU])))) 
                                                     << 8U)) 
                                                 | ((((((0U 
                                                         != 
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                                                          >> 0x00000018U)) 
                                                        << 3U) 
                                                       | ((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                                                               >> 0x00000010U))) 
                                                          << 2U)) 
                                                      | (((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                                                               >> 8U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U])))) 
                                                     << 4U) 
                                                    | ((((0U 
                                                          != 
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                                                           >> 0x00000018U)) 
                                                         << 3U) 
                                                        | ((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                                                                >> 0x00000010U))) 
                                                           << 2U)) 
                                                       | (((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                                                                >> 8U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != 
                                                             (0x000000ffU 
                                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   ((((0U 
                                                       != 
                                                       (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                                                        >> 0x00000018U)) 
                                                      << 3U) 
                                                     | ((0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                                                             >> 0x00000010U))) 
                                                        << 2U)) 
                                                    | (((0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                                                             >> 8U))) 
                                                        << 1U) 
                                                       | (0U 
                                                          != 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U])))) 
                                                   << 0x0000000cU) 
                                                  | (((((0U 
                                                         != 
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                                                          >> 0x00000018U)) 
                                                        << 3U) 
                                                       | ((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                                                               >> 0x00000010U))) 
                                                          << 2U)) 
                                                      | (((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                                                               >> 8U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U])))) 
                                                     << 8U)) 
                                                 | ((((((0U 
                                                         != 
                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                                                          >> 0x00000018U)) 
                                                        << 3U) 
                                                       | ((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                                                               >> 0x00000010U))) 
                                                          << 2U)) 
                                                      | (((0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                                                               >> 8U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U])))) 
                                                     << 4U) 
                                                    | ((((0U 
                                                          != 
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                                                           >> 0x00000018U)) 
                                                         << 3U) 
                                                        | ((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                                                                >> 0x00000010U))) 
                                                           << 2U)) 
                                                       | (((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                                                                >> 8U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != 
                                                             (0x000000ffU 
                                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U])))))) 
                                                << 0x00000010U) 
                                               | (((((((0U 
                                                        != 
                                                        (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                                                         >> 0x00000018U)) 
                                                       << 3U) 
                                                      | ((0U 
                                                          != 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                                                              >> 0x00000010U))) 
                                                         << 2U)) 
                                                     | (((0U 
                                                          != 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                                                              >> 8U))) 
                                                         << 1U) 
                                                        | (0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U])))) 
                                                    << 0x0000000cU) 
                                                   | (((((0U 
                                                          != 
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                                                           >> 0x00000018U)) 
                                                         << 3U) 
                                                        | ((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                                                                >> 0x00000010U))) 
                                                           << 2U)) 
                                                       | (((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                                                                >> 8U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != 
                                                             (0x000000ffU 
                                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U])))) 
                                                      << 8U)) 
                                                  | ((((((0U 
                                                          != 
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                                                           >> 0x00000018U)) 
                                                         << 3U) 
                                                        | ((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                                                                >> 0x00000010U))) 
                                                           << 2U)) 
                                                       | (((0U 
                                                            != 
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                                                                >> 8U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != 
                                                             (0x000000ffU 
                                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U])))) 
                                                      << 4U) 
                                                     | ((((0U 
                                                           != 
                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                                                            >> 0x00000018U)) 
                                                          << 3U) 
                                                         | ((0U 
                                                             != 
                                                             (0x000000ffU 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                                                                 >> 0x00000010U))) 
                                                            << 2U)) 
                                                        | (((0U 
                                                             != 
                                                             (0x000000ffU 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                                                                 >> 8U))) 
                                                            << 1U) 
                                                           | (0U 
                                                              != 
                                                              (0x000000ffU 
                                                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U]))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_fp16[0U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (0x00007fffU 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                                                      >> 0x00000010U))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00007fffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x00007fffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                                                                    >> 0x00000010U))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x00007fffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_fp16[1U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (0x00007fffU 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                                                      >> 0x00000010U))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00007fffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x00007fffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                                                                    >> 0x00000010U))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x00007fffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_fp16[2U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (0x00007fffU 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U] 
                                                      >> 0x00000010U))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00007fffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x00007fffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U] 
                                                                    >> 0x00000010U))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x00007fffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_fp16[3U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (0x00007fffU 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU] 
                                                      >> 0x00000010U))))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00007fffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x00007fffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU] 
                                                                    >> 0x00000010U))))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x00007fffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00007fffU 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U] 
                                                                  >> 0x00000010U))))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x00007fffU 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U] 
                                                                   >> 0x00000010U))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x00007fffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_int16[0U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U] 
                                                   >> 0x00000010U)))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000ffffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[7U])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x0000ffffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[6U])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[5U])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U] 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x0000ffffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[4U])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[3U])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[2U])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x0000ffffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[1U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_int16[1U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU] 
                                                   >> 0x00000010U)))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000ffffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000fU])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x0000ffffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000eU])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000dU])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU] 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x0000ffffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000cU])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000bU])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000000aU])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x0000ffffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[9U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[8U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_int16[2U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U] 
                                                   >> 0x00000010U)))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000ffffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000017U])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x0000ffffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000016U])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000015U])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U] 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x0000ffffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000014U])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000013U])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000012U])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x0000ffffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000011U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000010U])))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_int16[3U] 
        = (((((((0x0000000cU & ((- (IData)((0U != (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU] 
                                                   >> 0x00000010U)))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (0U 
                                                            != 
                                                            (0x0000ffffU 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001fU])))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x0000ffffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001eU])))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001dU])))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU] 
                                                                 >> 0x00000010U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x0000ffffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001cU])))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001bU])))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (0U 
                                                      != 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x0000001aU])))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U] 
                                                               >> 0x00000010U)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x0000ffffU 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000019U])))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (0U 
                                                               != 
                                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U] 
                                                                >> 0x00000010U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_data_w[0x00000018U])))))))));
    __Vtemp_185[0U] = 0xffffffffU;
    __Vtemp_185[1U] = 0xffffffffU;
    __Vtemp_185[2U] = 0xffffffffU;
    __Vtemp_185[3U] = 0xffffffffU;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_186, __Vtemp_185, 
                  (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                  >> 7U)));
    __Vtemp_187[0U] = 0xffffffffU;
    __Vtemp_187[1U] = 0xffffffffU;
    __Vtemp_187[2U] = 0xffffffffU;
    __Vtemp_187[3U] = 0xffffffffU;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_188, __Vtemp_187, 
                  (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                  >> 7U)));
    __Vtemp_189[0U] = 0xffffffffU;
    __Vtemp_189[1U] = 0xffffffffU;
    __Vtemp_189[2U] = 0xffffffffU;
    __Vtemp_189[3U] = 0xffffffffU;
    VL_SHIFTL_WWI(128,128,8, __Vtemp_190, __Vtemp_189, 
                  (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                  >> 7U)));
    __Vtemp_191[0U] = (IData)((((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g11))
                                 ? ((((QData)((IData)(
                                                      (0x0000ffffU 
                                                       & (~ 
                                                          __Vtemp_186[0U])))) 
                                      << 0x00000030U) 
                                     | (((QData)((IData)(
                                                         (0x0000ffffU 
                                                          & (~ 
                                                             __Vtemp_186[0U])))) 
                                         << 0x00000020U) 
                                        | (((QData)((IData)(
                                                            (0x0000ffffU 
                                                             & (~ 
                                                                __Vtemp_186[0U])))) 
                                            << 0x00000010U) 
                                           | (QData)((IData)(
                                                             (0x0000ffffU 
                                                              & (~ 
                                                                 __Vtemp_186[0U]))))))) 
                                    & (((QData)((IData)(
                                                        ((((3U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                                >> 0x0000000fU)))
                                                            ? 0x0000ffffU
                                                            : 0U) 
                                                          << 0x00000010U) 
                                                         | ((2U 
                                                             <= 
                                                             (3U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                                 >> 0x0000000fU)))
                                                             ? 0x0000ffffU
                                                             : 0U)))) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         (0xffffU 
                                                          | ((IData)(
                                                                     ((1U 
                                                                       <= 
                                                                       (3U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                                           >> 0x0000000fU)))
                                                                       ? 0xffffffffffffffffULL
                                                                       : 0ULL)) 
                                                             << 0x00000010U))))))
                                 : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g11))
                                     ? ((((QData)((IData)(
                                                          (~ 
                                                           __Vtemp_188[0U]))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           (~ 
                                                            __Vtemp_188[0U])))) 
                                        & (0x00000000ffffffffULL 
                                           | ((QData)((IData)(
                                                              ((1U 
                                                                <= 
                                                                (3U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                                    >> 0x0000000fU)))
                                                                ? 0xffffffffffffffffULL
                                                                : 0ULL))) 
                                              << 0x00000020U)))
                                     : (~ (((QData)((IData)(
                                                            __Vtemp_190[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             __Vtemp_190[0U])))))) 
                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_int8));
    __Vtemp_191[1U] = (IData)(((((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g11))
                                  ? ((((QData)((IData)(
                                                       (0x0000ffffU 
                                                        & (~ 
                                                           __Vtemp_186[0U])))) 
                                       << 0x00000030U) 
                                      | (((QData)((IData)(
                                                          (0x0000ffffU 
                                                           & (~ 
                                                              __Vtemp_186[0U])))) 
                                          << 0x00000020U) 
                                         | (((QData)((IData)(
                                                             (0x0000ffffU 
                                                              & (~ 
                                                                 __Vtemp_186[0U])))) 
                                             << 0x00000010U) 
                                            | (QData)((IData)(
                                                              (0x0000ffffU 
                                                               & (~ 
                                                                  __Vtemp_186[0U]))))))) 
                                     & (((QData)((IData)(
                                                         ((((3U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                                 >> 0x0000000fU)))
                                                             ? 0x0000ffffU
                                                             : 0U) 
                                                           << 0x00000010U) 
                                                          | ((2U 
                                                              <= 
                                                              (3U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                                  >> 0x0000000fU)))
                                                              ? 0x0000ffffU
                                                              : 0U)))) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          (0xffffU 
                                                           | ((IData)(
                                                                      ((1U 
                                                                        <= 
                                                                        (3U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                                            >> 0x0000000fU)))
                                                                        ? 0xffffffffffffffffULL
                                                                        : 0ULL)) 
                                                              << 0x00000010U))))))
                                  : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sub_h_total_g11))
                                      ? ((((QData)((IData)(
                                                           (~ 
                                                            __Vtemp_188[0U]))) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            (~ 
                                                             __Vtemp_188[0U])))) 
                                         & (0x00000000ffffffffULL 
                                            | ((QData)((IData)(
                                                               ((1U 
                                                                 <= 
                                                                 (3U 
                                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_pd 
                                                                     >> 0x0000000fU)))
                                                                 ? 0xffffffffffffffffULL
                                                                 : 0ULL))) 
                                               << 0x00000020U)))
                                      : (~ (((QData)((IData)(
                                                             __Vtemp_190[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              __Vtemp_190[0U])))))) 
                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_int8) 
                               >> 0x00000020U));
    if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_int8_d1)) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[0U] 
            = __Vtemp_191[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[1U] 
            = __Vtemp_191[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[3U] = 0U;
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__is_fp16_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[0U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[0U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_fp16[0U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[1U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[1U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_fp16[1U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[2U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[2U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_fp16[2U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[3U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[3U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_fp16[3U]);
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[0U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[0U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_int16[0U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[1U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[1U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_int16[1U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[2U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[2U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_int16[2U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_out_bypass_mask_w[3U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_16b[3U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__dat_rsp_mask_val_int16[3U]);
    }
}

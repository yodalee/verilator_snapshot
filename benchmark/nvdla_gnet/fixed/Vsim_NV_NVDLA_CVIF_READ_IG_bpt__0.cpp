// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*78:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(79, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__in_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__in_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__in_pd_p[2U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__bdma2cvif_rd_req_ready) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_pipe_valid))) {
        __Vtemp_2[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_pipe_data[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            __Vtemp_4[1U] = vlSelfRef.__PVT__in_pd_p[1U];
            __Vtemp_4[2U] = vlSelfRef.__PVT__in_pd_p[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__in_pd_p[0U];
        } else {
            __Vtemp_4[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            __Vtemp_4[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        }
    } else {
        __Vtemp_4[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_4[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__bpt2arb_ltran)
                                           ? 0U : (0x00001fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0x000000ffU 
                                        & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__bdma2cvif_rd_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                      && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__bdma2cvif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__in_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                  ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                  : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

extern const VlUnpacked<CData/*2:0*/, 128> Vsim__ConstPool__TABLE_h6386fa39_0;

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
    }
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__end_offset = (7U & (((vlSelfRef.__PVT__in_vld_pd[0U] 
                                           << 0x0000001bU) 
                                          | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                             >> 5U)) 
                                         + vlSelfRef.__PVT__in_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00007fffU 
                                                & vlSelfRef.__PVT__in_vld_pd[2U])));
    vlSelfRef.__PVT__ftran_size = (7U & ((IData)(vlSelfRef.__PVT__is_single_tran)
                                          ? vlSelfRef.__PVT__in_vld_pd[2U]
                                          : ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                                   >> 5U)))));
    vlSelfRef.__PVT__mtran_num = (0x00007fffU & ((((IData)(1U) 
                                                   + 
                                                   vlSelfRef.__PVT__in_vld_pd[2U]) 
                                                  - 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__ftran_size)))) 
                                                 - 
                                                 ((IData)(vlSelfRef.__PVT__is_single_tran)
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__end_offset))))));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x00001fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__bpt2arb_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                      == ((IData)(vlSelfRef.__PVT__req_num) 
                                          - (IData)(1U)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__count_req))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__count_req)) 
                & ((IData)(vlSelfRef.__PVT__count_req) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__bpt2arb_ltran) {
        vlSelfRef.__PVT__out_size = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                      ? 0U : (IData)(vlSelfRef.__PVT__end_offset));
    }
    __Vtableidx1 = ((((0U == (IData)(vlSelfRef.__PVT__count_req)) 
                      << 6U) | (((2U & (vlSelfRef.__PVT__in_vld_pd[0U] 
                                        >> 4U)) | (IData)(vlSelfRef.__PVT__bpt2arb_ltran)) 
                                << 4U)) | (((IData)(vlSelfRef.__PVT__out_size) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__is_single_tran)));
    vlSelfRef.__PVT__slot_needed = Vsim__ConstPool__TABLE_h6386fa39_0
        [__Vtableidx1];
    vlSelfRef.__PVT__req_enable = ((IData)(vlSelfRef.__PVT__slot_needed) 
                                   <= (0x000000ffU 
                                       & ((IData)(0xf5U) 
                                          - (IData)(vlSelfRef.__PVT__lat_cnt_cur))));
    vlSelfRef.__PVT__req_rdy = ((IData)(vlSelfRef.__PVT__req_enable) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req0_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | ((IData)(vlSelfRef.__PVT__req_rdy) 
                    & (IData)(vlSelfRef.__PVT__bpt2arb_ltran))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__in_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req0_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__lat_count_inc = ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? (IData)(vlSelfRef.__PVT__slot_needed)
                                       : 0U);
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x000003ffU & (
                                                   ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                                    + (IData)(vlSelfRef.__PVT__lat_count_inc)) 
                                                   - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = (((IData)(vlSelfRef.__PVT__lat_count_inc) 
                                     != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*78:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(79, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__in_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__in_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__in_pd_p[2U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            __Vtemp_2[1U] = vlSelfRef.__PVT__in_pd_p[1U];
            __Vtemp_2[2U] = vlSelfRef.__PVT__in_pd_p[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__in_pd_p[0U];
        } else {
            __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        }
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSelfRef.dma2bpt_req_ready) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_valid))) {
        __Vtemp_5[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[1U];
        __Vtemp_5[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[0U];
    } else {
        __Vtemp_5[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_5[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_5[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__bpt2arb_ltran)
                                           ? 0U : (0x00001fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0x000000ffU 
                                        & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready = 
        ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
         || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                      && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__sdp2cvif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.dma2bpt_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready)));
    vlSelfRef.__PVT__in_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                  ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                  : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
    }
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__end_offset = (7U & (((vlSelfRef.__PVT__in_vld_pd[0U] 
                                           << 0x0000001bU) 
                                          | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                             >> 5U)) 
                                         + vlSelfRef.__PVT__in_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00007fffU 
                                                & vlSelfRef.__PVT__in_vld_pd[2U])));
    vlSelfRef.__PVT__ftran_size = (7U & ((IData)(vlSelfRef.__PVT__is_single_tran)
                                          ? vlSelfRef.__PVT__in_vld_pd[2U]
                                          : ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                                   >> 5U)))));
    vlSelfRef.__PVT__mtran_num = (0x00007fffU & ((((IData)(1U) 
                                                   + 
                                                   vlSelfRef.__PVT__in_vld_pd[2U]) 
                                                  - 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__ftran_size)))) 
                                                 - 
                                                 ((IData)(vlSelfRef.__PVT__is_single_tran)
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__end_offset))))));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x00001fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__bpt2arb_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                      == ((IData)(vlSelfRef.__PVT__req_num) 
                                          - (IData)(1U)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__count_req))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__count_req)) 
                & ((IData)(vlSelfRef.__PVT__count_req) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__bpt2arb_ltran) {
        vlSelfRef.__PVT__out_size = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                      ? 0U : (IData)(vlSelfRef.__PVT__end_offset));
    }
    __Vtableidx2 = ((((0U == (IData)(vlSelfRef.__PVT__count_req)) 
                      << 6U) | (((2U & (vlSelfRef.__PVT__in_vld_pd[0U] 
                                        >> 4U)) | (IData)(vlSelfRef.__PVT__bpt2arb_ltran)) 
                                << 4U)) | (((IData)(vlSelfRef.__PVT__out_size) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__is_single_tran)));
    vlSelfRef.__PVT__slot_needed = Vsim__ConstPool__TABLE_h6386fa39_0
        [__Vtableidx2];
    vlSelfRef.__PVT__req_enable = ((IData)(vlSelfRef.__PVT__slot_needed) 
                                   <= (0x000000ffU 
                                       & ((IData)(0x50U) 
                                          - (IData)(vlSelfRef.__PVT__lat_cnt_cur))));
    vlSelfRef.__PVT__req_rdy = ((IData)(vlSelfRef.__PVT__req_enable) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req1_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | ((IData)(vlSelfRef.__PVT__req_rdy) 
                    & (IData)(vlSelfRef.__PVT__bpt2arb_ltran))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__in_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req1_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__lat_count_inc = ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? (IData)(vlSelfRef.__PVT__slot_needed)
                                       : 0U);
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x000003ffU & (
                                                   ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                                    + (IData)(vlSelfRef.__PVT__lat_count_inc)) 
                                                   - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = (((IData)(vlSelfRef.__PVT__lat_count_inc) 
                                     != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*78:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(79, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__in_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__in_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__in_pd_p[2U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.dma2bpt_req_ready) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_valid))) {
        __Vtemp_2[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[1U];
        __Vtemp_2[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            __Vtemp_4[1U] = vlSelfRef.__PVT__in_pd_p[1U];
            __Vtemp_4[2U] = vlSelfRef.__PVT__in_pd_p[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__in_pd_p[0U];
        } else {
            __Vtemp_4[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            __Vtemp_4[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        }
    } else {
        __Vtemp_4[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_4[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__bpt2arb_ltran)
                                           ? 0U : (0x00001fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0x000000ffU 
                                        & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                      && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__pdp2cvif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.dma2bpt_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)));
    vlSelfRef.__PVT__in_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                  ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                  : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
    }
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__end_offset = (7U & (((vlSelfRef.__PVT__in_vld_pd[0U] 
                                           << 0x0000001bU) 
                                          | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                             >> 5U)) 
                                         + vlSelfRef.__PVT__in_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00007fffU 
                                                & vlSelfRef.__PVT__in_vld_pd[2U])));
    vlSelfRef.__PVT__ftran_size = (7U & ((IData)(vlSelfRef.__PVT__is_single_tran)
                                          ? vlSelfRef.__PVT__in_vld_pd[2U]
                                          : ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                                   >> 5U)))));
    vlSelfRef.__PVT__mtran_num = (0x00007fffU & ((((IData)(1U) 
                                                   + 
                                                   vlSelfRef.__PVT__in_vld_pd[2U]) 
                                                  - 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__ftran_size)))) 
                                                 - 
                                                 ((IData)(vlSelfRef.__PVT__is_single_tran)
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__end_offset))))));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x00001fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__bpt2arb_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                      == ((IData)(vlSelfRef.__PVT__req_num) 
                                          - (IData)(1U)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__count_req))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__count_req)) 
                & ((IData)(vlSelfRef.__PVT__count_req) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__bpt2arb_ltran) {
        vlSelfRef.__PVT__out_size = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                      ? 0U : (IData)(vlSelfRef.__PVT__end_offset));
    }
    __Vtableidx3 = ((((0U == (IData)(vlSelfRef.__PVT__count_req)) 
                      << 6U) | (((2U & (vlSelfRef.__PVT__in_vld_pd[0U] 
                                        >> 4U)) | (IData)(vlSelfRef.__PVT__bpt2arb_ltran)) 
                                << 4U)) | (((IData)(vlSelfRef.__PVT__out_size) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__is_single_tran)));
    vlSelfRef.__PVT__slot_needed = Vsim__ConstPool__TABLE_h6386fa39_0
        [__Vtableidx3];
    vlSelfRef.__PVT__req_enable = ((IData)(vlSelfRef.__PVT__slot_needed) 
                                   <= (0x000000ffU 
                                       & ((IData)(0x3dU) 
                                          - (IData)(vlSelfRef.__PVT__lat_cnt_cur))));
    vlSelfRef.__PVT__req_rdy = ((IData)(vlSelfRef.__PVT__req_enable) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req2_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | ((IData)(vlSelfRef.__PVT__req_rdy) 
                    & (IData)(vlSelfRef.__PVT__bpt2arb_ltran))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__in_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req2_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__lat_count_inc = ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? (IData)(vlSelfRef.__PVT__slot_needed)
                                       : 0U);
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x000003ffU & (
                                                   ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                                    + (IData)(vlSelfRef.__PVT__lat_count_inc)) 
                                                   - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = (((IData)(vlSelfRef.__PVT__lat_count_inc) 
                                     != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*78:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(79, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__in_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__in_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__in_pd_p[2U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__cdp2cvif_rd_req_ready) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p2__DOT__p2_pipe_valid))) {
        __Vtemp_2[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p2__DOT__p2_pipe_data[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            __Vtemp_4[1U] = vlSelfRef.__PVT__in_pd_p[1U];
            __Vtemp_4[2U] = vlSelfRef.__PVT__in_pd_p[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__in_pd_p[0U];
        } else {
            __Vtemp_4[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            __Vtemp_4[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        }
    } else {
        __Vtemp_4[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_4[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__bpt2arb_ltran)
                                           ? 0U : (0x00001fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0x000000ffU 
                                        & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready = 
        ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
         || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                      && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__cdp2cvif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__cdp2cvif_rd_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__in_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                  ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                  : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
    }
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__end_offset = (7U & (((vlSelfRef.__PVT__in_vld_pd[0U] 
                                           << 0x0000001bU) 
                                          | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                             >> 5U)) 
                                         + vlSelfRef.__PVT__in_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00007fffU 
                                                & vlSelfRef.__PVT__in_vld_pd[2U])));
    vlSelfRef.__PVT__ftran_size = (7U & ((IData)(vlSelfRef.__PVT__is_single_tran)
                                          ? vlSelfRef.__PVT__in_vld_pd[2U]
                                          : ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                                   >> 5U)))));
    vlSelfRef.__PVT__mtran_num = (0x00007fffU & ((((IData)(1U) 
                                                   + 
                                                   vlSelfRef.__PVT__in_vld_pd[2U]) 
                                                  - 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__ftran_size)))) 
                                                 - 
                                                 ((IData)(vlSelfRef.__PVT__is_single_tran)
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__end_offset))))));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x00001fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__bpt2arb_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                      == ((IData)(vlSelfRef.__PVT__req_num) 
                                          - (IData)(1U)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__count_req))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__count_req)) 
                & ((IData)(vlSelfRef.__PVT__count_req) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__bpt2arb_ltran) {
        vlSelfRef.__PVT__out_size = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                      ? 0U : (IData)(vlSelfRef.__PVT__end_offset));
    }
    __Vtableidx4 = ((((0U == (IData)(vlSelfRef.__PVT__count_req)) 
                      << 6U) | (((2U & (vlSelfRef.__PVT__in_vld_pd[0U] 
                                        >> 4U)) | (IData)(vlSelfRef.__PVT__bpt2arb_ltran)) 
                                << 4U)) | (((IData)(vlSelfRef.__PVT__out_size) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__is_single_tran)));
    vlSelfRef.__PVT__slot_needed = Vsim__ConstPool__TABLE_h6386fa39_0
        [__Vtableidx4];
    vlSelfRef.__PVT__req_enable = ((IData)(vlSelfRef.__PVT__slot_needed) 
                                   <= (0x000000ffU 
                                       & ((IData)(0x3dU) 
                                          - (IData)(vlSelfRef.__PVT__lat_cnt_cur))));
    vlSelfRef.__PVT__req_rdy = ((IData)(vlSelfRef.__PVT__req_enable) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req3_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | ((IData)(vlSelfRef.__PVT__req_rdy) 
                    & (IData)(vlSelfRef.__PVT__bpt2arb_ltran))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__in_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req3_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__lat_count_inc = ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? (IData)(vlSelfRef.__PVT__slot_needed)
                                       : 0U);
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x000003ffU & (
                                                   ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                                    + (IData)(vlSelfRef.__PVT__lat_count_inc)) 
                                                   - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = (((IData)(vlSelfRef.__PVT__lat_count_inc) 
                                     != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*78:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(79, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__in_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__in_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__in_pd_p[2U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.dma2bpt_req_ready) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_pipe_valid))) {
        __Vtemp_2[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_pipe_data[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            __Vtemp_4[1U] = vlSelfRef.__PVT__in_pd_p[1U];
            __Vtemp_4[2U] = vlSelfRef.__PVT__in_pd_p[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__in_pd_p[0U];
        } else {
            __Vtemp_4[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            __Vtemp_4[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        }
    } else {
        __Vtemp_4[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_4[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__bpt2arb_ltran)
                                           ? 0U : (0x00001fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0x000000ffU 
                                        & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready = 
        ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
         || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.dma2bpt_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                      && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__rbk2cvif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready)));
    vlSelfRef.__PVT__in_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                  ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                  : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
    }
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__end_offset = (7U & (((vlSelfRef.__PVT__in_vld_pd[0U] 
                                           << 0x0000001bU) 
                                          | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                             >> 5U)) 
                                         + vlSelfRef.__PVT__in_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00007fffU 
                                                & vlSelfRef.__PVT__in_vld_pd[2U])));
    vlSelfRef.__PVT__ftran_size = (7U & ((IData)(vlSelfRef.__PVT__is_single_tran)
                                          ? vlSelfRef.__PVT__in_vld_pd[2U]
                                          : ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                                   >> 5U)))));
    vlSelfRef.__PVT__mtran_num = (0x00007fffU & ((((IData)(1U) 
                                                   + 
                                                   vlSelfRef.__PVT__in_vld_pd[2U]) 
                                                  - 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__ftran_size)))) 
                                                 - 
                                                 ((IData)(vlSelfRef.__PVT__is_single_tran)
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__end_offset))))));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x00001fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__bpt2arb_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                      == ((IData)(vlSelfRef.__PVT__req_num) 
                                          - (IData)(1U)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__count_req))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__count_req)) 
                & ((IData)(vlSelfRef.__PVT__count_req) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__bpt2arb_ltran) {
        vlSelfRef.__PVT__out_size = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                      ? 0U : (IData)(vlSelfRef.__PVT__end_offset));
    }
    __Vtableidx5 = ((((0U == (IData)(vlSelfRef.__PVT__count_req)) 
                      << 6U) | (((2U & (vlSelfRef.__PVT__in_vld_pd[0U] 
                                        >> 4U)) | (IData)(vlSelfRef.__PVT__bpt2arb_ltran)) 
                                << 4U)) | (((IData)(vlSelfRef.__PVT__out_size) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__is_single_tran)));
    vlSelfRef.__PVT__slot_needed = Vsim__ConstPool__TABLE_h6386fa39_0
        [__Vtableidx5];
    vlSelfRef.__PVT__req_enable = ((IData)(vlSelfRef.__PVT__slot_needed) 
                                   <= (0x000000ffU 
                                       & ((IData)(0x50U) 
                                          - (IData)(vlSelfRef.__PVT__lat_cnt_cur))));
    vlSelfRef.__PVT__req_rdy = ((IData)(vlSelfRef.__PVT__req_enable) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req4_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | ((IData)(vlSelfRef.__PVT__req_rdy) 
                    & (IData)(vlSelfRef.__PVT__bpt2arb_ltran))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__in_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req4_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__lat_count_inc = ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? (IData)(vlSelfRef.__PVT__slot_needed)
                                       : 0U);
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x000003ffU & (
                                                   ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                                    + (IData)(vlSelfRef.__PVT__lat_count_inc)) 
                                                   - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = (((IData)(vlSelfRef.__PVT__lat_count_inc) 
                                     != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*78:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(79, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__in_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__in_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__in_pd_p[2U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            __Vtemp_2[1U] = vlSelfRef.__PVT__in_pd_p[1U];
            __Vtemp_2[2U] = vlSelfRef.__PVT__in_pd_p[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__in_pd_p[0U];
        } else {
            __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        }
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSelfRef.dma2bpt_req_ready) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_valid))) {
        __Vtemp_5[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[1U];
        __Vtemp_5[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[0U];
    } else {
        __Vtemp_5[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_5[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_5[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__bpt2arb_ltran)
                                           ? 0U : (0x00001fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0x000000ffU 
                                        & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.dma2bpt_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_valid))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                      && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__sdp_b2cvif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)));
    vlSelfRef.__PVT__in_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                  ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                  : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
    }
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__end_offset = (7U & (((vlSelfRef.__PVT__in_vld_pd[0U] 
                                           << 0x0000001bU) 
                                          | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                             >> 5U)) 
                                         + vlSelfRef.__PVT__in_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00007fffU 
                                                & vlSelfRef.__PVT__in_vld_pd[2U])));
    vlSelfRef.__PVT__ftran_size = (7U & ((IData)(vlSelfRef.__PVT__is_single_tran)
                                          ? vlSelfRef.__PVT__in_vld_pd[2U]
                                          : ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                                   >> 5U)))));
    vlSelfRef.__PVT__mtran_num = (0x00007fffU & ((((IData)(1U) 
                                                   + 
                                                   vlSelfRef.__PVT__in_vld_pd[2U]) 
                                                  - 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__ftran_size)))) 
                                                 - 
                                                 ((IData)(vlSelfRef.__PVT__is_single_tran)
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__end_offset))))));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x00001fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__bpt2arb_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                      == ((IData)(vlSelfRef.__PVT__req_num) 
                                          - (IData)(1U)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__count_req))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__count_req)) 
                & ((IData)(vlSelfRef.__PVT__count_req) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__bpt2arb_ltran) {
        vlSelfRef.__PVT__out_size = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                      ? 0U : (IData)(vlSelfRef.__PVT__end_offset));
    }
    __Vtableidx6 = ((((0U == (IData)(vlSelfRef.__PVT__count_req)) 
                      << 6U) | (((2U & (vlSelfRef.__PVT__in_vld_pd[0U] 
                                        >> 4U)) | (IData)(vlSelfRef.__PVT__bpt2arb_ltran)) 
                                << 4U)) | (((IData)(vlSelfRef.__PVT__out_size) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__is_single_tran)));
    vlSelfRef.__PVT__slot_needed = Vsim__ConstPool__TABLE_h6386fa39_0
        [__Vtableidx6];
    vlSelfRef.__PVT__req_enable = ((IData)(vlSelfRef.__PVT__slot_needed) 
                                   <= (0x000000ffU 
                                       & ((IData)(0xa0U) 
                                          - (IData)(vlSelfRef.__PVT__lat_cnt_cur))));
    vlSelfRef.__PVT__req_rdy = ((IData)(vlSelfRef.__PVT__req_enable) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req5_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | ((IData)(vlSelfRef.__PVT__req_rdy) 
                    & (IData)(vlSelfRef.__PVT__bpt2arb_ltran))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__in_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req5_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__lat_count_inc = ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? (IData)(vlSelfRef.__PVT__slot_needed)
                                       : 0U);
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x000003ffU & (
                                                   ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                                    + (IData)(vlSelfRef.__PVT__lat_count_inc)) 
                                                   - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = (((IData)(vlSelfRef.__PVT__lat_count_inc) 
                                     != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*78:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(79, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__in_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__in_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__in_pd_p[2U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            __Vtemp_2[1U] = vlSelfRef.__PVT__in_pd_p[1U];
            __Vtemp_2[2U] = vlSelfRef.__PVT__in_pd_p[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__in_pd_p[0U];
        } else {
            __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        }
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSelfRef.dma2bpt_req_ready) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_valid))) {
        __Vtemp_5[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[1U];
        __Vtemp_5[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[0U];
    } else {
        __Vtemp_5[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_5[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_5[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__bpt2arb_ltran)
                                           ? 0U : (0x00001fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0x000000ffU 
                                        & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.dma2bpt_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_valid))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                      && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__sdp_n2cvif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)));
    vlSelfRef.__PVT__in_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                  ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                  : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
    }
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__end_offset = (7U & (((vlSelfRef.__PVT__in_vld_pd[0U] 
                                           << 0x0000001bU) 
                                          | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                             >> 5U)) 
                                         + vlSelfRef.__PVT__in_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00007fffU 
                                                & vlSelfRef.__PVT__in_vld_pd[2U])));
    vlSelfRef.__PVT__ftran_size = (7U & ((IData)(vlSelfRef.__PVT__is_single_tran)
                                          ? vlSelfRef.__PVT__in_vld_pd[2U]
                                          : ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                                   >> 5U)))));
    vlSelfRef.__PVT__mtran_num = (0x00007fffU & ((((IData)(1U) 
                                                   + 
                                                   vlSelfRef.__PVT__in_vld_pd[2U]) 
                                                  - 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__ftran_size)))) 
                                                 - 
                                                 ((IData)(vlSelfRef.__PVT__is_single_tran)
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__end_offset))))));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x00001fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__bpt2arb_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                      == ((IData)(vlSelfRef.__PVT__req_num) 
                                          - (IData)(1U)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__count_req))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__count_req)) 
                & ((IData)(vlSelfRef.__PVT__count_req) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__bpt2arb_ltran) {
        vlSelfRef.__PVT__out_size = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                      ? 0U : (IData)(vlSelfRef.__PVT__end_offset));
    }
    __Vtableidx7 = ((((0U == (IData)(vlSelfRef.__PVT__count_req)) 
                      << 6U) | (((2U & (vlSelfRef.__PVT__in_vld_pd[0U] 
                                        >> 4U)) | (IData)(vlSelfRef.__PVT__bpt2arb_ltran)) 
                                << 4U)) | (((IData)(vlSelfRef.__PVT__out_size) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__is_single_tran)));
    vlSelfRef.__PVT__slot_needed = Vsim__ConstPool__TABLE_h6386fa39_0
        [__Vtableidx7];
    vlSelfRef.__PVT__req_enable = ((IData)(vlSelfRef.__PVT__slot_needed) 
                                   <= (0x000000ffU 
                                       & ((IData)(0xa0U) 
                                          - (IData)(vlSelfRef.__PVT__lat_cnt_cur))));
    vlSelfRef.__PVT__req_rdy = ((IData)(vlSelfRef.__PVT__req_enable) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req6_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | ((IData)(vlSelfRef.__PVT__req_rdy) 
                    & (IData)(vlSelfRef.__PVT__bpt2arb_ltran))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__in_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req6_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__lat_count_inc = ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? (IData)(vlSelfRef.__PVT__slot_needed)
                                       : 0U);
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x000003ffU & (
                                                   ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                                    + (IData)(vlSelfRef.__PVT__lat_count_inc)) 
                                                   - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = (((IData)(vlSelfRef.__PVT__lat_count_inc) 
                                     != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt7__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*78:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(79, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__in_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__in_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__in_pd_p[2U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            __Vtemp_2[1U] = vlSelfRef.__PVT__in_pd_p[1U];
            __Vtemp_2[2U] = vlSelfRef.__PVT__in_pd_p[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__in_pd_p[0U];
        } else {
            __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        }
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSelfRef.dma2bpt_req_ready) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_valid))) {
        __Vtemp_5[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[1U];
        __Vtemp_5[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_data[0U];
    } else {
        __Vtemp_5[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_5[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_5[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt7__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__bpt2arb_ltran)
                                           ? 0U : (0x00001fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0x000000ffU 
                                        & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.dma2bpt_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_valid))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                      && (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__sdp_e2cvif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)));
    vlSelfRef.__PVT__in_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                  ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                  : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt7__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
    }
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__end_offset = (7U & (((vlSelfRef.__PVT__in_vld_pd[0U] 
                                           << 0x0000001bU) 
                                          | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                             >> 5U)) 
                                         + vlSelfRef.__PVT__in_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00007fffU 
                                                & vlSelfRef.__PVT__in_vld_pd[2U])));
    vlSelfRef.__PVT__ftran_size = (7U & ((IData)(vlSelfRef.__PVT__is_single_tran)
                                          ? vlSelfRef.__PVT__in_vld_pd[2U]
                                          : ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                                   >> 5U)))));
    vlSelfRef.__PVT__mtran_num = (0x00007fffU & ((((IData)(1U) 
                                                   + 
                                                   vlSelfRef.__PVT__in_vld_pd[2U]) 
                                                  - 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__ftran_size)))) 
                                                 - 
                                                 ((IData)(vlSelfRef.__PVT__is_single_tran)
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__end_offset))))));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x00001fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__bpt2arb_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                      == ((IData)(vlSelfRef.__PVT__req_num) 
                                          - (IData)(1U)));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__count_req))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__count_req)) 
                & ((IData)(vlSelfRef.__PVT__count_req) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__bpt2arb_ltran) {
        vlSelfRef.__PVT__out_size = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                      ? 0U : (IData)(vlSelfRef.__PVT__end_offset));
    }
    __Vtableidx8 = ((((0U == (IData)(vlSelfRef.__PVT__count_req)) 
                      << 6U) | (((2U & (vlSelfRef.__PVT__in_vld_pd[0U] 
                                        >> 4U)) | (IData)(vlSelfRef.__PVT__bpt2arb_ltran)) 
                                << 4U)) | (((IData)(vlSelfRef.__PVT__out_size) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__is_single_tran)));
    vlSelfRef.__PVT__slot_needed = Vsim__ConstPool__TABLE_h6386fa39_0
        [__Vtableidx8];
    vlSelfRef.__PVT__req_enable = ((IData)(vlSelfRef.__PVT__slot_needed) 
                                   <= (0x000000ffU 
                                       & ((IData)(0x50U) 
                                          - (IData)(vlSelfRef.__PVT__lat_cnt_cur))));
    vlSelfRef.__PVT__req_rdy = ((IData)(vlSelfRef.__PVT__req_enable) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req7_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | ((IData)(vlSelfRef.__PVT__req_rdy) 
                    & (IData)(vlSelfRef.__PVT__bpt2arb_ltran))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__in_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt7__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req7_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__lat_count_inc = ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? (IData)(vlSelfRef.__PVT__slot_needed)
                                       : 0U);
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x000003ffU & (
                                                   ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                                    + (IData)(vlSelfRef.__PVT__lat_count_inc)) 
                                                   - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = (((IData)(vlSelfRef.__PVT__lat_count_inc) 
                                     != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt8__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*78:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(79, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__in_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__in_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__in_pd_p[2U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            __Vtemp_2[1U] = vlSelfRef.__PVT__in_pd_p[1U];
            __Vtemp_2[2U] = vlSelfRef.__PVT__in_pd_p[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__in_pd_p[0U];
        } else {
            __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        }
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__cdma_dat2cvif_rd_req_ready) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__p2_pipe_valid))) {
        __Vtemp_5[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__p2_pipe_data[1U];
        __Vtemp_5[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__p2_pipe_data[0U];
    } else {
        __Vtemp_5[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_5[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_5[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt8__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt8__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__bpt2arb_ltran)
                                           ? 0U : (0x00001fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0x000000ffU 
                                        & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_count_dec = 0U;
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready = 
        ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
         || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__cdma_dat2cvif_rd_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x000003ffU & ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                                   - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((IData)(vlSelfRef.__PVT__lat_count_dec)
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
    vlSelfRef.__PVT__in_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                  ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                  : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req8_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt8__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
    }
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__end_offset = (7U & (((vlSelfRef.__PVT__in_vld_pd[0U] 
                                           << 0x0000001bU) 
                                          | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                             >> 5U)) 
                                         + vlSelfRef.__PVT__in_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00007fffU 
                                                & vlSelfRef.__PVT__in_vld_pd[2U])));
    vlSelfRef.__PVT__ftran_size = (7U & ((IData)(vlSelfRef.__PVT__is_single_tran)
                                          ? vlSelfRef.__PVT__in_vld_pd[2U]
                                          : ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                                   >> 5U)))));
    vlSelfRef.__PVT__mtran_num = (0x00007fffU & ((((IData)(1U) 
                                                   + 
                                                   vlSelfRef.__PVT__in_vld_pd[2U]) 
                                                  - 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__ftran_size)))) 
                                                 - 
                                                 ((IData)(vlSelfRef.__PVT__is_single_tran)
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__end_offset))))));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x00001fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__bpt2arb_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                      == ((IData)(vlSelfRef.__PVT__req_num) 
                                          - (IData)(1U)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req8_ready) 
                    & (IData)(vlSelfRef.__PVT__bpt2arb_ltran))));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__count_req))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__count_req)) 
                & ((IData)(vlSelfRef.__PVT__count_req) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__bpt2arb_ltran) {
        vlSelfRef.__PVT__out_size = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                      ? 0U : (IData)(vlSelfRef.__PVT__end_offset));
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__in_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    __Vtableidx9 = ((((0U == (IData)(vlSelfRef.__PVT__count_req)) 
                      << 6U) | (((2U & (vlSelfRef.__PVT__in_vld_pd[0U] 
                                        >> 4U)) | (IData)(vlSelfRef.__PVT__bpt2arb_ltran)) 
                                << 4U)) | (((IData)(vlSelfRef.__PVT__out_size) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__is_single_tran)));
    vlSelfRef.__PVT__slot_needed = Vsim__ConstPool__TABLE_h6386fa39_0
        [__Vtableidx9];
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt9__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*78:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    VL_ZERO_W(79, __Vdly__pipe_p2__DOT__p2_skid_data);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
    __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
    __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch) {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__in_pd_p[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__in_pd_p[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__in_pd_p[2U];
    } else {
        __Vdly__pipe_p2__DOT__p2_skid_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        __Vdly__pipe_p2__DOT__p2_skid_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
        __Vdly__pipe_p2__DOT__p2_skid_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
    }
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch) {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    } else {
        __Vtemp_1[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        __Vtemp_1[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U] 
        = __Vtemp_1[2U];
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((((QData)((IData)(
                                                           vlSelfRef.__PVT__in_vld_pd[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__in_vld_pd[0U]))) 
                                         + VL_SHIFTL_QQI(64,64,32, 
                                                         (1ULL 
                                                          + (QData)((IData)(vlSelfRef.__PVT__ftran_size))), 5U))
                                      : (0x0000000000000100ULL 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
         & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))) {
        if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
            __Vtemp_2[1U] = vlSelfRef.__PVT__in_pd_p[1U];
            __Vtemp_2[2U] = vlSelfRef.__PVT__in_pd_p[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__in_pd_p[0U];
        } else {
            __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U];
            __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U];
            vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
                = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U];
        }
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__cdma_wt2cvif_rd_req_ready) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__pipe_p2__DOT__p2_pipe_valid))) {
        __Vtemp_5[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vtemp_5[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__pipe_p2__DOT__p2_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__pipe_p2__DOT__p2_pipe_data[0U];
    } else {
        __Vtemp_5[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_5[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_5[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_skid_data[2U];
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt9__1(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__bpt2arb_ltran)
                                           ? 0U : (0x00001fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0x000000ffU 
                                        & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_count_dec = 0U;
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__cdma_wt2cvif_rd_req_ready)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x000003ffU & ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                                   - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((IData)(vlSelfRef.__PVT__lat_count_dec)
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
    vlSelfRef.__PVT__in_vld_p = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                  ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
                                  : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req9_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt9__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
    }
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__end_offset = (7U & (((vlSelfRef.__PVT__in_vld_pd[0U] 
                                           << 0x0000001bU) 
                                          | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                             >> 5U)) 
                                         + vlSelfRef.__PVT__in_vld_pd[2U]));
    vlSelfRef.__PVT__is_single_tran = (8U > ((7U & 
                                              (vlSelfRef.__PVT__in_vld_pd[0U] 
                                               >> 5U)) 
                                             + (0x00007fffU 
                                                & vlSelfRef.__PVT__in_vld_pd[2U])));
    vlSelfRef.__PVT__ftran_size = (7U & ((IData)(vlSelfRef.__PVT__is_single_tran)
                                          ? vlSelfRef.__PVT__in_vld_pd[2U]
                                          : ((IData)(7U) 
                                             - ((vlSelfRef.__PVT__in_vld_pd[0U] 
                                                 << 0x0000001bU) 
                                                | (vlSelfRef.__PVT__in_vld_pd[0U] 
                                                   >> 5U)))));
    vlSelfRef.__PVT__mtran_num = (0x00007fffU & ((((IData)(1U) 
                                                   + 
                                                   vlSelfRef.__PVT__in_vld_pd[2U]) 
                                                  - 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__ftran_size)))) 
                                                 - 
                                                 ((IData)(vlSelfRef.__PVT__is_single_tran)
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__end_offset))))));
    vlSelfRef.__PVT__req_num = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                 ? 1U : ((0U == (IData)(vlSelfRef.__PVT__mtran_num))
                                          ? 2U : (0x00001fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(vlSelfRef.__PVT__mtran_num) 
                                                         >> 3U))))));
    vlSelfRef.__PVT__bpt2arb_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                      == ((IData)(vlSelfRef.__PVT__req_num) 
                                          - (IData)(1U)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                 | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req9_ready) 
                    & (IData)(vlSelfRef.__PVT__bpt2arb_ltran))));
    vlSelfRef.__PVT__out_size = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__count_req))) {
        vlSelfRef.__PVT__out_size = vlSelfRef.__PVT__ftran_size;
    } else if (((0U < (IData)(vlSelfRef.__PVT__count_req)) 
                & ((IData)(vlSelfRef.__PVT__count_req) 
                   < ((IData)(vlSelfRef.__PVT__req_num) 
                      - (IData)(1U))))) {
        vlSelfRef.__PVT__out_size = 7U;
    } else if (vlSelfRef.__PVT__bpt2arb_ltran) {
        vlSelfRef.__PVT__out_size = ((IData)(vlSelfRef.__PVT__is_single_tran)
                                      ? 0U : (IData)(vlSelfRef.__PVT__end_offset));
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__in_vld_p) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    __Vtableidx10 = ((((0U == (IData)(vlSelfRef.__PVT__count_req)) 
                       << 6U) | (((2U & (vlSelfRef.__PVT__in_vld_pd[0U] 
                                         >> 4U)) | (IData)(vlSelfRef.__PVT__bpt2arb_ltran)) 
                                 << 4U)) | (((IData)(vlSelfRef.__PVT__out_size) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__is_single_tran)));
    vlSelfRef.__PVT__slot_needed = Vsim__ConstPool__TABLE_h6386fa39_0
        [__Vtableidx10];
}

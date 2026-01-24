// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlUnpacked<CData/*2:0*/, 128> Vsim__ConstPool__TABLE_h6386fa39_0;

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__0\n"); );
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
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__0\n"); );
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
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready)));
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__0\n"); );
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
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)));
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__0\n"); );
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
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__0\n"); );
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
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready)));
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__0\n"); );
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
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)));
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__0\n"); );
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
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)));
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt7__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt7__0\n"); );
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
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)));
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt8__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt8__0\n"); );
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
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x000003ffU & ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                                   - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((IData)(vlSelfRef.__PVT__lat_count_dec)
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req8_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt9__0(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt9__0\n"); );
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
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__in_pd_p[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[0U];
        vlSelfRef.__PVT__in_pd_p[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[1U];
        vlSelfRef.__PVT__in_pd_p[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data[2U];
        vlSelfRef.__PVT__in_vld_p = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x000003ffU & ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                                   - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((IData)(vlSelfRef.__PVT__lat_count_dec)
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
    vlSelfRef.__PVT__in_vld_pd[0U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U]);
    vlSelfRef.__PVT__in_vld_pd[1U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U]);
    vlSelfRef.__PVT__in_vld_pd[2U] = ((- (IData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                      & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U]);
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__bpt2arb_req9_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__in_vld_p) : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_IG_bpt___ctor_var_reset(Vsim_NV_NVDLA_CVIF_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_IG_bpt___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->bpt2arb_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15347033000742058347ull);
    vlSelf->dma2bpt_cdt_lat_fifo_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2722540613885911821ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->dma2bpt_req_pd, __VscopeHash, 6983273954774231356ull);
    vlSelf->dma2bpt_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3467715908140493531ull);
    vlSelf->tieoff_axid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4218955392227284238ull);
    vlSelf->tieoff_lat_fifo_depth = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16333172865686235325ull);
    VL_SCOPED_RAND_RESET_W(75, vlSelf->bpt2arb_req_pd, __VscopeHash, 8307298798008880204ull);
    vlSelf->bpt2arb_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1445239665878000768ull);
    vlSelf->dma2bpt_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1160336375583105649ull);
    vlSelf->__PVT__count_req = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1388639151878866513ull);
    vlSelf->__PVT__lat_cnt_cur = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6556298980607493512ull);
    vlSelf->__PVT__lat_cnt_ext = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14301661036242254576ull);
    vlSelf->__PVT__lat_cnt_mod = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18274536599571573503ull);
    vlSelf->__PVT__lat_cnt_new = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6499055476426117252ull);
    vlSelf->__PVT__lat_cnt_nxt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1707014354798935751ull);
    vlSelf->__PVT__lat_count_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16129281237773256996ull);
    vlSelf->__PVT__out_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3882636790763285487ull);
    vlSelf->__PVT__out_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16633456406362071362ull);
    vlSelf->__PVT__req_num = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 769123510778897808ull);
    vlSelf->__PVT__slot_needed = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2206749721187103294ull);
    vlSelf->__PVT__bpt2arb_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1070357605925182777ull);
    vlSelf->__PVT__bpt2arb_ltran = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7051164123877405342ull);
    vlSelf->__PVT__end_offset = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15420481952600168614ull);
    vlSelf->__PVT__ftran_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11540470952583406881ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__PVT__in_pd_p, __VscopeHash, 3398616442394653751ull);
    vlSelf->__PVT__in_vld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11045098597272896889ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__PVT__in_vld_pd, __VscopeHash, 4206011014772156437ull);
    vlSelf->__PVT__is_single_tran = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 442094334448683738ull);
    vlSelf->__PVT__lat_count_inc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17021691126698120033ull);
    vlSelf->__PVT__mtran_num = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4185756071223660292ull);
    vlSelf->__PVT__req_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14555023719777877244ull);
    vlSelf->__PVT__req_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7131426358410372526ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data, __VscopeHash, 17633712268433854607ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10171602451986936655ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7275116386423144664ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7226444700603028057ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__PVT__pipe_p1__DOT__p1_skid_data, __VscopeHash, 8535702031018576436ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4974325833875491042ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6267025170677596381ull);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15406598178688267158ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data, __VscopeHash, 2436424408303884369ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12085065417477965883ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8178276993869393565ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4219242389160901449ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6100359491393695578ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__PVT__pipe_p2__DOT__p2_skid_data, __VscopeHash, 10509987700508661667ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12538433609464182378ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14983747647637505860ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13968111427139279237ull);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16066017874771447499ull);
}

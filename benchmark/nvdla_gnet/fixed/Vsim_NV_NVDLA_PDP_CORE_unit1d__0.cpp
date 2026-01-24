// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<6>/*184:0*/ __Vdly__pipe_p2__DOT__p2_pipe_data;
    VL_ZERO_W(185, __Vdly__pipe_p2__DOT__p2_pipe_data);
    VlWide<6>/*184:0*/ __Vdly__pipe_p3__DOT__p3_pipe_data;
    VL_ZERO_W(185, __Vdly__pipe_p3__DOT__p3_pipe_data);
    VlWide<6>/*191:0*/ __Vtemp_2;
    // Body
    __Vdly__pipe_p2__DOT__p2_pipe_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[0U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[2U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[3U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[4U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[5U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U];
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy_d1) & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))) {
        __Vdly__pipe_p2__DOT__p2_pipe_data[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
    } else {
        __Vdly__pipe_p2__DOT__p2_pipe_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    }
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy) & (IData)(vlSelfRef.__PVT__pipe_in_vld))) {
        __Vtemp_2[1U] = vlSelfRef.__PVT__int_pooling[1U];
        __Vtemp_2[2U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[0U] 
                          << 0x00000018U) | vlSelfRef.__PVT__int_pooling[2U]);
        __Vtemp_2[3U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[0U] 
                          >> 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[1U] 
                                    << 0x00000018U));
        __Vtemp_2[4U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[1U] 
                          >> 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U] 
                                    << 0x00000018U));
        __Vtemp_2[5U] = ((((((IData)(vlSelfRef.pooling_din_last) 
                             << 8U) | (((IData)(vlSelfRef.__PVT__pooling_size) 
                                        << 5U) | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                  << 4U))) 
                           | ((0x0000000cU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U] 
                                              >> 0x0000001aU)) 
                              | ((2U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[3U] 
                                        >> 3U)) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_0)))) 
                          << 0x00000010U) | (0x0000ffffU 
                                             & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U] 
                                                >> 8U)));
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__int_pooling[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_2[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_2[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_2[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U] 
        = __Vtemp_2[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U] 
        = __Vtemp_2[5U];
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy_d2) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) {
        __Vdly__pipe_p3__DOT__p3_pipe_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    } else {
        __Vdly__pipe_p3__DOT__p3_pipe_data[0U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[2U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[3U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[4U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[5U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U];
    }
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy_d3) & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) {
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U];
    } else {
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[5U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[5U];
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__1(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fp_mean_pool_cfg = ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d)) 
                                         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_fp16_en));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__load_din) & (
                                                   vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[3U] 
                                                   >> 4U))) {
            vlSelfRef.__PVT__pooling_size = ((IData)(vlSelfRef.pooling_din_last)
                                              ? 0U : 
                                             (7U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__pooling_size))));
        }
        if ((((IData)(vlSelfRef.pooling_out_pvld) & (IData)(vlSelfRef.pooling_out_prdy)) 
             & ((IData)((0x01000000U == (0x01100000U 
                                         & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U]))) 
                | (IData)(vlSelfRef.last_out_en)))) {
            vlSelfRef.__PVT__pooling_cnt = ((3U == (IData)(vlSelfRef.__PVT__pooling_cnt))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__pooling_cnt))));
        }
        if ((IData)((0x01000000U == (0x01100000U & 
                                     vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])))) {
            if ((0x00080000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                    vlSelfRef.__PVT__flush_out3[0U] 
                        = vlSelfRef.__PVT__data_buf3[0U];
                    vlSelfRef.__PVT__flush_out3[1U] 
                        = vlSelfRef.__PVT__data_buf3[1U];
                    vlSelfRef.__PVT__flush_out3[2U] 
                        = ((0x08000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                           << 0x0000000aU)) 
                           | ((0x07000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              << 3U)) 
                              | vlSelfRef.__PVT__data_buf3[2U]));
                }
                if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              >> 0x00000012U)))) {
                    vlSelfRef.__PVT__flush_out2[0U] 
                        = vlSelfRef.__PVT__data_buf2[0U];
                    vlSelfRef.__PVT__flush_out2[1U] 
                        = vlSelfRef.__PVT__data_buf2[1U];
                    vlSelfRef.__PVT__flush_out2[2U] 
                        = ((0x08000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                           << 0x0000000aU)) 
                           | ((0x07000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              << 3U)) 
                              | vlSelfRef.__PVT__data_buf2[2U]));
                }
            }
            if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000013U)))) {
                if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                    vlSelfRef.__PVT__flush_out1[0U] 
                        = vlSelfRef.__PVT__data_buf1[0U];
                    vlSelfRef.__PVT__flush_out1[1U] 
                        = vlSelfRef.__PVT__data_buf1[1U];
                    vlSelfRef.__PVT__flush_out1[2U] 
                        = ((0x08000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                           << 0x0000000aU)) 
                           | ((0x07000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              << 3U)) 
                              | vlSelfRef.__PVT__data_buf1[2U]));
                }
                if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              >> 0x00000012U)))) {
                    vlSelfRef.__PVT__flush_out0[0U] 
                        = vlSelfRef.__PVT__data_buf0[0U];
                    vlSelfRef.__PVT__flush_out0[1U] 
                        = vlSelfRef.__PVT__data_buf0[1U];
                    vlSelfRef.__PVT__flush_out0[2U] 
                        = ((0x08000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                           << 0x0000000aU)) 
                           | ((0x07000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              << 3U)) 
                              | vlSelfRef.__PVT__data_buf0[2U]));
                }
            }
        }
        if (((IData)(vlSelfRef.pooling_out_pvld) & (IData)(vlSelfRef.__PVT__add_out_rdy))) {
            if ((0x00080000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                    vlSelfRef.__PVT__latch_result3_d3[0U] 
                        = vlSelfRef.__PVT__pooling_result[0U];
                    vlSelfRef.__PVT__latch_result3_d3[1U] 
                        = vlSelfRef.__PVT__pooling_result[1U];
                    vlSelfRef.__PVT__latch_result3_d3[2U] 
                        = vlSelfRef.__PVT__pooling_result[2U];
                }
                if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              >> 0x00000012U)))) {
                    vlSelfRef.__PVT__latch_result2_d3[0U] 
                        = vlSelfRef.__PVT__pooling_result[0U];
                    vlSelfRef.__PVT__latch_result2_d3[1U] 
                        = vlSelfRef.__PVT__pooling_result[1U];
                    vlSelfRef.__PVT__latch_result2_d3[2U] 
                        = vlSelfRef.__PVT__pooling_result[2U];
                }
            }
            if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000013U)))) {
                if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                    vlSelfRef.__PVT__latch_result1_d3[0U] 
                        = vlSelfRef.__PVT__pooling_result[0U];
                    vlSelfRef.__PVT__latch_result1_d3[1U] 
                        = vlSelfRef.__PVT__pooling_result[1U];
                    vlSelfRef.__PVT__latch_result1_d3[2U] 
                        = vlSelfRef.__PVT__pooling_result[2U];
                }
                if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              >> 0x00000012U)))) {
                    vlSelfRef.__PVT__latch_result0_d3[0U] 
                        = vlSelfRef.__PVT__pooling_result[0U];
                    vlSelfRef.__PVT__latch_result0_d3[1U] 
                        = vlSelfRef.__PVT__pooling_result[1U];
                    vlSelfRef.__PVT__latch_result0_d3[2U] 
                        = vlSelfRef.__PVT__pooling_result[2U];
                }
            }
            if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              >> 0x00000013U)))) {
                    if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U] 
                            = (IData)((((QData)((IData)(
                                                        (0x0001ffffU 
                                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                            >> 4U)))) 
                                        << 0x00000022U) 
                                       | (((QData)((IData)(
                                                           (0x0001ffffU 
                                                            & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                               >> 0x0000000eU)))) 
                                           << 0x00000011U) 
                                          | (QData)((IData)(
                                                            (0x0001ffffU 
                                                             & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                 << 8U) 
                                                                | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                   >> 0x00000018U))))))));
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U] 
                            = ((0xfff80000U & vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U]) 
                               | (IData)(((((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                                >> 4U)))) 
                                            << 0x00000022U) 
                                           | (((QData)((IData)(
                                                               (0x0001ffffU 
                                                                & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                   >> 0x0000000eU)))) 
                                               << 0x00000011U) 
                                              | (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                       >> 0x00000018U))))))) 
                                          >> 0x00000020U)));
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U] 
                            = ((0x0007ffffU & vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U]) 
                               | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                  << 0x00000019U) 
                                                 | (0x01f80000U 
                                                    & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                       >> 7U)))));
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U] 
                            = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              >> 7U));
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                  >> 0x00000012U)))) {
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U] 
                            = (IData)((((QData)((IData)(
                                                        (0x0001ffffU 
                                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                            >> 4U)))) 
                                        << 0x00000022U) 
                                       | (((QData)((IData)(
                                                           (0x0001ffffU 
                                                            & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                               >> 0x0000000eU)))) 
                                           << 0x00000011U) 
                                          | (QData)((IData)(
                                                            (0x0001ffffU 
                                                             & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                 << 8U) 
                                                                | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                   >> 0x00000018U))))))));
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U] 
                            = ((0xfff80000U & vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U]) 
                               | (IData)(((((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                                >> 4U)))) 
                                            << 0x00000022U) 
                                           | (((QData)((IData)(
                                                               (0x0001ffffU 
                                                                & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                   >> 0x0000000eU)))) 
                                               << 0x00000011U) 
                                              | (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                       >> 0x00000018U))))))) 
                                          >> 0x00000020U)));
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U] 
                            = ((0x0007ffffU & vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U]) 
                               | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                  << 0x00000019U) 
                                                 | (0x01f80000U 
                                                    & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                       >> 7U)))));
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U] 
                            = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              >> 7U));
                    }
                }
                if ((0x00080000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                    if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U] 
                            = (IData)((((QData)((IData)(
                                                        (0x0001ffffU 
                                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                            >> 4U)))) 
                                        << 0x00000022U) 
                                       | (((QData)((IData)(
                                                           (0x0001ffffU 
                                                            & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                               >> 0x0000000eU)))) 
                                           << 0x00000011U) 
                                          | (QData)((IData)(
                                                            (0x0001ffffU 
                                                             & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                 << 8U) 
                                                                | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                   >> 0x00000018U))))))));
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U] 
                            = ((0xfff80000U & vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U]) 
                               | (IData)(((((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                                >> 4U)))) 
                                            << 0x00000022U) 
                                           | (((QData)((IData)(
                                                               (0x0001ffffU 
                                                                & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                   >> 0x0000000eU)))) 
                                               << 0x00000011U) 
                                              | (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                       >> 0x00000018U))))))) 
                                          >> 0x00000020U)));
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U] 
                            = ((0x0007ffffU & vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U]) 
                               | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                  << 0x00000019U) 
                                                 | (0x01f80000U 
                                                    & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                       >> 7U)))));
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U] 
                            = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              >> 7U));
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                  >> 0x00000012U)))) {
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U] 
                            = (IData)((((QData)((IData)(
                                                        (0x0001ffffU 
                                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                            >> 4U)))) 
                                        << 0x00000022U) 
                                       | (((QData)((IData)(
                                                           (0x0001ffffU 
                                                            & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                               >> 0x0000000eU)))) 
                                           << 0x00000011U) 
                                          | (QData)((IData)(
                                                            (0x0001ffffU 
                                                             & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                 << 8U) 
                                                                | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                   >> 0x00000018U))))))));
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U] 
                            = ((0xfff80000U & vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U]) 
                               | (IData)(((((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                                >> 4U)))) 
                                            << 0x00000022U) 
                                           | (((QData)((IData)(
                                                               (0x0001ffffU 
                                                                & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                   >> 0x0000000eU)))) 
                                               << 0x00000011U) 
                                              | (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                       >> 0x00000018U))))))) 
                                          >> 0x00000020U)));
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U] 
                            = ((0x0007ffffU & vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U]) 
                               | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                  << 0x00000019U) 
                                                 | (0x01f80000U 
                                                    & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                       >> 7U)))));
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U] 
                            = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              >> 7U));
                    }
                }
            } else {
                if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              >> 0x00000013U)))) {
                    if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U] 
                            = vlSelfRef.__PVT__fp_pool_sum[0U];
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U] 
                            = vlSelfRef.__PVT__fp_pool_sum[1U];
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U] 
                            = vlSelfRef.__PVT__fp_pool_sum[2U];
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                  >> 0x00000012U)))) {
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U] 
                            = vlSelfRef.__PVT__fp_pool_sum[0U];
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U] 
                            = vlSelfRef.__PVT__fp_pool_sum[1U];
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U] 
                            = vlSelfRef.__PVT__fp_pool_sum[2U];
                    }
                }
                if ((0x00080000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                    if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U] 
                            = vlSelfRef.__PVT__fp_pool_sum[0U];
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U] 
                            = vlSelfRef.__PVT__fp_pool_sum[1U];
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U] 
                            = vlSelfRef.__PVT__fp_pool_sum[2U];
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                  >> 0x00000012U)))) {
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U] 
                            = vlSelfRef.__PVT__fp_pool_sum[0U];
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U] 
                            = vlSelfRef.__PVT__fp_pool_sum[1U];
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U] 
                            = vlSelfRef.__PVT__fp_pool_sum[2U];
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__pooling_size = 0U;
        vlSelfRef.__PVT__pooling_cnt = 0U;
        vlSelfRef.__PVT__flush_out3[0U] = 0U;
        vlSelfRef.__PVT__flush_out3[1U] = 0U;
        vlSelfRef.__PVT__flush_out3[2U] = 0U;
        vlSelfRef.__PVT__flush_out2[0U] = 0U;
        vlSelfRef.__PVT__flush_out2[1U] = 0U;
        vlSelfRef.__PVT__flush_out2[2U] = 0U;
        vlSelfRef.__PVT__flush_out1[0U] = 0U;
        vlSelfRef.__PVT__flush_out1[1U] = 0U;
        vlSelfRef.__PVT__flush_out1[2U] = 0U;
        vlSelfRef.__PVT__flush_out0[0U] = 0U;
        vlSelfRef.__PVT__flush_out0[1U] = 0U;
        vlSelfRef.__PVT__flush_out0[2U] = 0U;
        vlSelfRef.__PVT__latch_result3_d3[0U] = 0U;
        vlSelfRef.__PVT__latch_result3_d3[1U] = 0U;
        vlSelfRef.__PVT__latch_result3_d3[2U] = 0U;
        vlSelfRef.__PVT__latch_result2_d3[0U] = 0U;
        vlSelfRef.__PVT__latch_result2_d3[1U] = 0U;
        vlSelfRef.__PVT__latch_result2_d3[2U] = 0U;
        vlSelfRef.__PVT__latch_result1_d3[0U] = 0U;
        vlSelfRef.__PVT__latch_result1_d3[1U] = 0U;
        vlSelfRef.__PVT__latch_result1_d3[2U] = 0U;
        vlSelfRef.__PVT__latch_result0_d3[0U] = 0U;
        vlSelfRef.__PVT__latch_result0_d3[1U] = 0U;
        vlSelfRef.__PVT__latch_result0_d3[2U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U] = 0U;
    }
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__pipe_in_vld))));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__2(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0xf8000000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                            << 0x00000011U) 
                                           | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  << 0x0000000aU) 
                                                 | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)))));
    vlSelfRef.__PVT__fp_pool_sum[0U] = ((0x07ffffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[0U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           << 0x0000001bU));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0xfff80000U 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                              << 0x00000017U) 
                                             | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                 << 0x00000011U) 
                                                | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                                << 6U) 
                                               | (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10))) 
                                           >> 5U));
    vlSelfRef.__PVT__fp_pool_sum[1U] = ((0x0007ffffU 
                                         & vlSelfRef.__PVT__fp_pool_sum[1U]) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                               << 0x0000001dU) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 << 0x00000013U))));
    vlSelfRef.__PVT__fp_pool_sum[2U] = (0x0000000fU 
                                        & ((0x0007fff8U 
                                            & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
                                               << 3U)) 
                                           | ((0x0007ffffU 
                                               & ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                  >> 3U)) 
                                              | ((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                 >> 0x0000000dU))));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4));
    vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7 
        = ((((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld 
        = (((IData)(vlSelf->__PVT__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy 
        = ((0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy)) 
           & (0x0000000fU == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy)));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__3(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.last_out_en = (IData)((0U != (0x0300U 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pdp_info_out_pd))));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__4(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U];
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        vlSelfRef.__PVT__pooling_result[0U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[1U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                     >> 0x00000018U)));
    } else {
        vlSelfRef.__PVT__pooling_result[0U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__PVT__pooling_result[1U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U]);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[0U] 
        = (IData)((((QData)((IData)((0x0001ffffU & 
                                     (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                      >> 4U)))) << 0x00000022U) 
                   | (((QData)((IData)((0x0001ffffU 
                                        & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                           >> 0x0000000eU)))) 
                       << 0x00000011U) | (QData)((IData)(
                                                         (0x0001ffffU 
                                                          & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                >> 0x00000018U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U]) 
           | (IData)(((((QData)((IData)((0x0001ffffU 
                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                            >> 4U)))) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                >> 0x0000000eU)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (0x0001ffffU 
                                                              & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                  << 8U) 
                                                                 | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                    >> 0x00000018U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2997[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    } else {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    }
    if (vlSelfRef.__PVT__fp_mean_pool_cfg) {
        vlSelfRef.pooling_out_pvld = ((0x0000000fU 
                                       == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)) 
                                      & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
        vlSelfRef.__PVT__data_buf0[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))));
        vlSelfRef.__PVT__data_buf0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf0[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf1[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))));
        vlSelfRef.__PVT__data_buf1[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf1[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf2[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))));
        vlSelfRef.__PVT__data_buf2[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf2[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf3[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))));
        vlSelfRef.__PVT__data_buf3[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf3[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                   >> 0x00000011U))));
    } else {
        vlSelfRef.pooling_out_pvld = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid;
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__latch_result0_d3[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__latch_result0_d3[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__latch_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__latch_result1_d3[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__latch_result1_d3[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__latch_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__latch_result2_d3[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__latch_result2_d3[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__latch_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__latch_result3_d3[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__latch_result3_d3[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__latch_result3_d3[2U];
        }
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf3[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf3[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf3[2U];
        } else {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf2[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf2[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf2[2U];
        }
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf1[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf1[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf1[2U];
    } else {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf0[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf0[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf0[2U];
    }
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__1(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pooling_din_last = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__0__KET__) 
                                  & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_60) 
                                      & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_cnt_pooling))) 
                                     | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__strip_width_end)));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__2(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pooling_out_prdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_17) 
                                  & (0xfeU == (0xfeU 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_pvld))));
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.pooling_out_pvld)) 
                                          | (IData)(vlSelfRef.pooling_out_prdy)));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_out_prdy 
        = ((IData)(vlSelfRef.__PVT__fp_mean_pool_cfg) 
           & ((IData)(vlSelfRef.__PVT__add_out_rdy) 
              & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)));
    vlSelfRef.__PVT__pipe_in_rdy_d3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                             | ((IData)(vlSelfRef.__PVT__fp_mean_pool_cfg)
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__add_out_rdy) 
                                                 & (0x0000000fU 
                                                    == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)))
                                                 : (IData)(vlSelfRef.__PVT__add_out_rdy))));
    vlSelfRef.__PVT__pipe_in_rdy_d2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                             | (IData)(vlSelfRef.__PVT__pipe_in_rdy_d3)));
    vlSelfRef.__PVT__pipe_in_rdy_d1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                             | (IData)(vlSelfRef.__PVT__pipe_in_rdy_d2)));
    vlSelfRef.__PVT__pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                          | (IData)(vlSelfRef.__PVT__pipe_in_rdy_d1)));
    vlSelfRef.pdma2pdp_prdy = ((IData)(vlSelfRef.__PVT__fp_mean_pool_cfg)
                                ? ((IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy) 
                                   & (IData)(vlSelfRef.__PVT__pipe_in_rdy))
                                : (IData)(vlSelfRef.__PVT__pipe_in_rdy));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__3(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_pooling_fun__0__reg2dp_int8_en;
    __Vfunc_pooling_fun__0__reg2dp_int8_en = 0;
    CData/*0:0*/ __Vfunc_pooling_fun__0__reg2dp_int16_en;
    __Vfunc_pooling_fun__0__reg2dp_int16_en = 0;
    CData/*0:0*/ __Vfunc_pooling_fun__0__reg2dp_fp16_en;
    __Vfunc_pooling_fun__0__reg2dp_fp16_en = 0;
    CData/*1:0*/ __Vfunc_pooling_fun__0__pooling_type;
    __Vfunc_pooling_fun__0__pooling_type = 0;
    VlWide<3>/*87:0*/ __Vfunc_pooling_fun__0__data0_in;
    VL_ZERO_W(88, __Vfunc_pooling_fun__0__data0_in);
    VlWide<3>/*87:0*/ __Vfunc_pooling_fun__0__data1_in;
    VL_ZERO_W(88, __Vfunc_pooling_fun__0__data1_in);
    // Body
    vlSelfRef.pdma2pdp_pvld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_15) 
                               & (0xfeU == (0xfeU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_prdy))));
    vlSelfRef.__PVT__pipe_in_vld = ((IData)(vlSelfRef.__PVT__fp_mean_pool_cfg)
                                     ? ((IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy) 
                                        & (IData)(vlSelfRef.pdma2pdp_pvld))
                                     : (IData)(vlSelfRef.pdma2pdp_pvld));
    vlSelfRef.__PVT__load_din = ((IData)(vlSelfRef.pdma2pdp_pvld) 
                                 & ((IData)(vlSelfRef.pdma2pdp_prdy) 
                                    & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable)) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__0__KET__))));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld 
        = ((IData)(vlSelfRef.pdma2pdp_pvld) & ((IData)(vlSelfRef.__PVT__pipe_in_rdy) 
                                               & (IData)(vlSelfRef.__PVT__fp_mean_pool_cfg)));
    vlSelfRef.__PVT__pool_fun_vld = ((~ (IData)(vlSelfRef.__PVT__fp_mean_pool_cfg)) 
                                     & (IData)(vlSelfRef.__PVT__load_din));
    if (vlSelfRef.__PVT__pool_fun_vld) {
        __Vfunc_pooling_fun__0__data1_in[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[0U];
        __Vfunc_pooling_fun__0__data1_in[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[1U];
        __Vfunc_pooling_fun__0__data1_in[2U] = (0x00ffffffU 
                                                & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U]);
        __Vfunc_pooling_fun__0__data0_in[0U] = vlSelfRef.__PVT__fp_cur_pooling_dat[0U];
        __Vfunc_pooling_fun__0__data0_in[1U] = vlSelfRef.__PVT__fp_cur_pooling_dat[1U];
        __Vfunc_pooling_fun__0__data0_in[2U] = vlSelfRef.__PVT__fp_cur_pooling_dat[2U];
    } else {
        __Vfunc_pooling_fun__0__data1_in[0U] = 0U;
        __Vfunc_pooling_fun__0__data1_in[1U] = 0U;
        __Vfunc_pooling_fun__0__data1_in[2U] = 0U;
        __Vfunc_pooling_fun__0__data0_in[0U] = 0U;
        __Vfunc_pooling_fun__0__data0_in[1U] = 0U;
        __Vfunc_pooling_fun__0__data0_in[2U] = 0U;
    }
    __Vfunc_pooling_fun__0__pooling_type = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    __Vfunc_pooling_fun__0__reg2dp_fp16_en = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_fp16_en;
    __Vfunc_pooling_fun__0__reg2dp_int16_en = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_int16_en;
    __Vfunc_pooling_fun__0__reg2dp_int8_en = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_int8_en;
    vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling 
        = (2U == (IData)(__Vfunc_pooling_fun__0__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling 
        = (1U == (IData)(__Vfunc_pooling_fun__0__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling 
        = (0U == (IData)(__Vfunc_pooling_fun__0__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((0x0eU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | (IData)(((0x00007c00U == (0x00007c00U 
                                       & __Vfunc_pooling_fun__0__data0_in[0U])) 
                      & (0U != (0x000003ffU & __Vfunc_pooling_fun__0__data0_in[0U])))));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((0x0eU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | (IData)(((0x00007c00U == (0x00007c00U 
                                       & __Vfunc_pooling_fun__0__data1_in[0U])) 
                      & (0U != (0x000003ffU & __Vfunc_pooling_fun__0__data1_in[0U])))));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((0x0dU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | (((0x0000001fU == (0x0000001fU & __Vfunc_pooling_fun__0__data0_in[1U])) 
               & (0U != (__Vfunc_pooling_fun__0__data0_in[0U] 
                         >> 0x00000016U))) << 1U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((0x0dU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | (((0x0000001fU == (0x0000001fU & __Vfunc_pooling_fun__0__data1_in[1U])) 
               & (0U != (__Vfunc_pooling_fun__0__data1_in[0U] 
                         >> 0x00000016U))) << 1U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((0x0bU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | ((IData)(((0x07c00000U == (0x07c00000U 
                                        & __Vfunc_pooling_fun__0__data0_in[1U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__0__data0_in[1U] 
                                                >> 0x0000000cU))))) 
              << 2U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((0x0bU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | ((IData)(((0x07c00000U == (0x07c00000U 
                                        & __Vfunc_pooling_fun__0__data1_in[1U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__0__data1_in[1U] 
                                                >> 0x0000000cU))))) 
              << 2U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((7U & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | ((IData)(((0x0001f000U == (0x0001f000U 
                                        & __Vfunc_pooling_fun__0__data0_in[2U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__0__data0_in[2U] 
                                                >> 2U))))) 
              << 3U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((7U & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | ((IData)(((0x0001f000U == (0x0001f000U 
                                        & __Vfunc_pooling_fun__0__data1_in[2U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__0__data1_in[2U] 
                                                >> 2U))))) 
              << 3U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in = 
        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan) 
         | (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan));
    VL_ASSIGNSEL_WI(88, 22, 0U, vlSelfRef.__Vfunc_pooling_fun__0__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__1__data1 
                                = (0x003fffffU & __Vfunc_pooling_fun__0__data1_in[0U]);
                            vlSelfRef.__Vfunc_pooling_SUM__1__data0 
                                = (0x003fffffU & __Vfunc_pooling_fun__0__data0_in[0U]);
                            vlSelfRef.__Vfunc_pooling_SUM__1__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__0__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__1__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__0__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__1__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__1__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__1__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__1__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__1__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__1__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__1__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__1__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__1__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__1__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__1__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__1__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff 
                                = (0x003fffffU & (vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                                  + vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff;
                            vlSelfRef.__Vfunc_pooling_SUM__1__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__1__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__1__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en)) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in)) 
                                                      & (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__2__data1 
                                        = (0x003fffffU 
                                           & __Vfunc_pooling_fun__0__data1_in[0U]);
                                    vlSelfRef.__Vfunc_pooling_MIN__2__data0 
                                        = (0x003fffffU 
                                           & __Vfunc_pooling_fun__0__data0_in[0U]);
                                    vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__0__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__0__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__0__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__2__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__2__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__2__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__2__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__2__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__2__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__2__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__2__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff 
                                        = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0
                                            : vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16 
                                        = ((1U & ((~ 
                                                   (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                    >> 0x0fU)) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                      >> 0x0fU))))
                                            ? (((0x00007fffU 
                                                 & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                > (0x00007fffU 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1
                                                : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0)
                                            : ((0x00008000U 
                                                & (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)
                                                : (
                                                   (1U 
                                                    & ((vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                        >> 0x0fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                           >> 0x0fU))))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)));
                                    vlSelfRef.__Vfunc_pooling_MIN__2__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__2__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__2__Vfuncout))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & __Vfunc_pooling_fun__0__data0_in[0U])
                                                 : 
                                                (0x003fffffU 
                                                 & __Vfunc_pooling_fun__0__data1_in[0U])))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in)) 
                                                       & (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__3__data1 
                                            = (0x003fffffU 
                                               & __Vfunc_pooling_fun__0__data1_in[0U]);
                                        vlSelfRef.__Vfunc_pooling_MAX__3__data0 
                                            = (0x003fffffU 
                                               & __Vfunc_pooling_fun__0__data0_in[0U]);
                                        vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__0__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__0__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__0__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__3__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__3__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__3__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__3__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__3__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__3__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__3__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__3__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff 
                                            = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0
                                                : vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16 
                                            = ((1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                     >> 0x0fU)) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                       >> 0x0fU))))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1)
                                                : (
                                                   (0x00008000U 
                                                    & (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                       & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? 
                                                   (((0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                     > 
                                                     (0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                         >> 0x0fU) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                            >> 0x0fU))))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)));
                                        vlSelfRef.__Vfunc_pooling_MAX__3__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__3__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__3__Vfuncout))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & __Vfunc_pooling_fun__0__data0_in[0U])
                                                  : 
                                                 (0x003fffffU 
                                                  & __Vfunc_pooling_fun__0__data1_in[0U])))
                                             : 0U)))));
    VL_ASSIGNSEL_WI(88, 22, 0x16U, vlSelfRef.__Vfunc_pooling_fun__0__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__4__data1 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__0__data1_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__0__data1_in[0U] 
                                                     >> 0x00000016U)));
                            vlSelfRef.__Vfunc_pooling_SUM__4__data0 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__0__data0_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__0__data0_in[0U] 
                                                     >> 0x00000016U)));
                            vlSelfRef.__Vfunc_pooling_SUM__4__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__0__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__4__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__0__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__4__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__4__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__4__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__4__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__4__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__4__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__4__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__4__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__4__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__4__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__4__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__4__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff 
                                = (0x003fffffU & (vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                                  + vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff;
                            vlSelfRef.__Vfunc_pooling_SUM__4__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__4__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__4__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                        >> 1U)) 
                                                      & (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__5__data1 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__0__data1_in[1U] 
                                               << 0x0000000aU) 
                                              | (__Vfunc_pooling_fun__0__data1_in[0U] 
                                                 >> 0x00000016U)));
                                    vlSelfRef.__Vfunc_pooling_MIN__5__data0 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__0__data0_in[1U] 
                                               << 0x0000000aU) 
                                              | (__Vfunc_pooling_fun__0__data0_in[0U] 
                                                 >> 0x00000016U)));
                                    vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__0__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__0__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__0__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__5__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__5__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__5__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__5__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__5__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__5__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__5__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__5__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff 
                                        = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0
                                            : vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16 
                                        = ((1U & ((~ 
                                                   (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                    >> 0x0fU)) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                      >> 0x0fU))))
                                            ? (((0x00007fffU 
                                                 & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                > (0x00007fffU 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1
                                                : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0)
                                            : ((0x00008000U 
                                                & (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)
                                                : (
                                                   (1U 
                                                    & ((vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                        >> 0x0fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                           >> 0x0fU))))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)));
                                    vlSelfRef.__Vfunc_pooling_MIN__5__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__5__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__5__Vfuncout))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__0__data0_in[1U] 
                                                     << 0x0000000aU) 
                                                    | (__Vfunc_pooling_fun__0__data0_in[0U] 
                                                       >> 0x00000016U)))
                                                 : 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__0__data1_in[1U] 
                                                     << 0x0000000aU) 
                                                    | (__Vfunc_pooling_fun__0__data1_in[0U] 
                                                       >> 0x00000016U)))))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en)) 
                                                    | ((~ 
                                                        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                         >> 1U)) 
                                                       & (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__6__data1 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__0__data1_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__0__data1_in[0U] 
                                                     >> 0x00000016U)));
                                        vlSelfRef.__Vfunc_pooling_MAX__6__data0 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__0__data0_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__0__data0_in[0U] 
                                                     >> 0x00000016U)));
                                        vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__0__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__0__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__0__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__6__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__6__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__6__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__6__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__6__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__6__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__6__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__6__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff 
                                            = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0
                                                : vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16 
                                            = ((1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                     >> 0x0fU)) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                       >> 0x0fU))))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1)
                                                : (
                                                   (0x00008000U 
                                                    & (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                       & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? 
                                                   (((0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                     > 
                                                     (0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                         >> 0x0fU) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                            >> 0x0fU))))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)));
                                        vlSelfRef.__Vfunc_pooling_MAX__6__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__6__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__6__Vfuncout))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__0__data0_in[1U] 
                                                      << 0x0000000aU) 
                                                     | (__Vfunc_pooling_fun__0__data0_in[0U] 
                                                        >> 0x00000016U)))
                                                  : 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__0__data1_in[1U] 
                                                      << 0x0000000aU) 
                                                     | (__Vfunc_pooling_fun__0__data1_in[0U] 
                                                        >> 0x00000016U)))))
                                             : 0U)))));
    VL_ASSIGNSEL_WI(88, 22, 0x2cU, vlSelfRef.__Vfunc_pooling_fun__0__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__7__data1 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__0__data1_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__0__data1_in[1U] 
                                                     >> 0x0000000cU)));
                            vlSelfRef.__Vfunc_pooling_SUM__7__data0 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__0__data0_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__0__data0_in[1U] 
                                                     >> 0x0000000cU)));
                            vlSelfRef.__Vfunc_pooling_SUM__7__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__0__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__7__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__0__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__7__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__7__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__7__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__7__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__7__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__7__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__7__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__7__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__7__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__7__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__7__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__7__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff 
                                = (0x003fffffU & (vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                                  + vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff;
                            vlSelfRef.__Vfunc_pooling_SUM__7__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__7__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__7__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                        >> 2U)) 
                                                      & (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__8__data1 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__0__data1_in[2U] 
                                               << 0x00000014U) 
                                              | (__Vfunc_pooling_fun__0__data1_in[1U] 
                                                 >> 0x0000000cU)));
                                    vlSelfRef.__Vfunc_pooling_MIN__8__data0 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__0__data0_in[2U] 
                                               << 0x00000014U) 
                                              | (__Vfunc_pooling_fun__0__data0_in[1U] 
                                                 >> 0x0000000cU)));
                                    vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__0__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__0__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__0__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__8__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__8__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__8__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__8__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__8__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__8__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__8__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__8__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff 
                                        = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0
                                            : vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16 
                                        = ((1U & ((~ 
                                                   (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                    >> 0x0fU)) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                      >> 0x0fU))))
                                            ? (((0x00007fffU 
                                                 & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                > (0x00007fffU 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1
                                                : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0)
                                            : ((0x00008000U 
                                                & (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)
                                                : (
                                                   (1U 
                                                    & ((vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                        >> 0x0fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                           >> 0x0fU))))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)));
                                    vlSelfRef.__Vfunc_pooling_MIN__8__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__8__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__8__Vfuncout))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__0__data0_in[2U] 
                                                     << 0x00000014U) 
                                                    | (__Vfunc_pooling_fun__0__data0_in[1U] 
                                                       >> 0x0000000cU)))
                                                 : 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__0__data1_in[2U] 
                                                     << 0x00000014U) 
                                                    | (__Vfunc_pooling_fun__0__data1_in[1U] 
                                                       >> 0x0000000cU)))))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en)) 
                                                    | ((~ 
                                                        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                         >> 2U)) 
                                                       & (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__9__data1 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__0__data1_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__0__data1_in[1U] 
                                                     >> 0x0000000cU)));
                                        vlSelfRef.__Vfunc_pooling_MAX__9__data0 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__0__data0_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__0__data0_in[1U] 
                                                     >> 0x0000000cU)));
                                        vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__0__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__0__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__0__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__9__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__9__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__9__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__9__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__9__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__9__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__9__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__9__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff 
                                            = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0
                                                : vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16 
                                            = ((1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                     >> 0x0fU)) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                       >> 0x0fU))))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1)
                                                : (
                                                   (0x00008000U 
                                                    & (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                       & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? 
                                                   (((0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                     > 
                                                     (0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                         >> 0x0fU) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                            >> 0x0fU))))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)));
                                        vlSelfRef.__Vfunc_pooling_MAX__9__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__9__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__9__Vfuncout))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__0__data0_in[2U] 
                                                      << 0x00000014U) 
                                                     | (__Vfunc_pooling_fun__0__data0_in[1U] 
                                                        >> 0x0000000cU)))
                                                  : 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__0__data1_in[2U] 
                                                      << 0x00000014U) 
                                                     | (__Vfunc_pooling_fun__0__data1_in[1U] 
                                                        >> 0x0000000cU)))))
                                             : 0U)))));
    VL_ASSIGNSEL_WI(88, 22, 0x42U, vlSelfRef.__Vfunc_pooling_fun__0__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__10__data1 
                                = (0x003fffffU & (__Vfunc_pooling_fun__0__data1_in[2U] 
                                                  >> 2U));
                            vlSelfRef.__Vfunc_pooling_SUM__10__data0 
                                = (0x003fffffU & (__Vfunc_pooling_fun__0__data0_in[2U] 
                                                  >> 2U));
                            vlSelfRef.__Vfunc_pooling_SUM__10__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__0__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__10__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__0__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__10__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__10__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__10__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__10__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__10__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__10__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__10__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__10__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__10__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__10__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__10__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__10__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff 
                                = (0x003fffffU & (vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                                  + vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff;
                            vlSelfRef.__Vfunc_pooling_SUM__10__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__10__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__10__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                        >> 3U)) 
                                                      & (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__11__data1 
                                        = (0x003fffffU 
                                           & (__Vfunc_pooling_fun__0__data1_in[2U] 
                                              >> 2U));
                                    vlSelfRef.__Vfunc_pooling_MIN__11__data0 
                                        = (0x003fffffU 
                                           & (__Vfunc_pooling_fun__0__data0_in[2U] 
                                              >> 2U));
                                    vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__0__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__0__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__0__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__11__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__11__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__11__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__11__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__11__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__11__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__11__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__11__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff 
                                        = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0
                                            : vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16 
                                        = ((1U & ((~ 
                                                   (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                    >> 0x0fU)) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                      >> 0x0fU))))
                                            ? (((0x00007fffU 
                                                 & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                > (0x00007fffU 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1
                                                : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0)
                                            : ((0x00008000U 
                                                & (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)
                                                : (
                                                   (1U 
                                                    & ((vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                        >> 0x0fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                           >> 0x0fU))))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)));
                                    vlSelfRef.__Vfunc_pooling_MIN__11__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__11__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__11__Vfuncout))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & (__Vfunc_pooling_fun__0__data0_in[2U] 
                                                    >> 2U))
                                                 : 
                                                (0x003fffffU 
                                                 & (__Vfunc_pooling_fun__0__data1_in[2U] 
                                                    >> 2U))))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en)) 
                                                    | ((~ 
                                                        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                         >> 3U)) 
                                                       & (IData)(__Vfunc_pooling_fun__0__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__12__data1 
                                            = (0x003fffffU 
                                               & (__Vfunc_pooling_fun__0__data1_in[2U] 
                                                  >> 2U));
                                        vlSelfRef.__Vfunc_pooling_MAX__12__data0 
                                            = (0x003fffffU 
                                               & (__Vfunc_pooling_fun__0__data0_in[2U] 
                                                  >> 2U));
                                        vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__0__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__0__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__0__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__12__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__12__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__12__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__12__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__12__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__12__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__12__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__12__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff 
                                            = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0
                                                : vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16 
                                            = ((1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                     >> 0x0fU)) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                       >> 0x0fU))))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1)
                                                : (
                                                   (0x00008000U 
                                                    & (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                       & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? 
                                                   (((0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                     > 
                                                     (0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                         >> 0x0fU) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                            >> 0x0fU))))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)));
                                        vlSelfRef.__Vfunc_pooling_MAX__12__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__12__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__12__Vfuncout))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & (__Vfunc_pooling_fun__0__data0_in[2U] 
                                                     >> 2U))
                                                  : 
                                                 (0x003fffffU 
                                                  & (__Vfunc_pooling_fun__0__data1_in[2U] 
                                                     >> 2U))))
                                             : 0U)))));
    vlSelfRef.__PVT__int_pooling[0U] = vlSelfRef.__Vfunc_pooling_fun__0__Vfuncout[0U];
    vlSelfRef.__PVT__int_pooling[1U] = vlSelfRef.__Vfunc_pooling_fun__0__Vfuncout[1U];
    vlSelfRef.__PVT__int_pooling[2U] = vlSelfRef.__Vfunc_pooling_fun__0__Vfuncout[2U];
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<6>/*184:0*/ __Vdly__pipe_p2__DOT__p2_pipe_data;
    VL_ZERO_W(185, __Vdly__pipe_p2__DOT__p2_pipe_data);
    VlWide<6>/*184:0*/ __Vdly__pipe_p3__DOT__p3_pipe_data;
    VL_ZERO_W(185, __Vdly__pipe_p3__DOT__p3_pipe_data);
    VlWide<6>/*191:0*/ __Vtemp_2;
    // Body
    __Vdly__pipe_p2__DOT__p2_pipe_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[0U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[2U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[3U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[4U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[5U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U];
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy_d1) & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))) {
        __Vdly__pipe_p2__DOT__p2_pipe_data[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
    } else {
        __Vdly__pipe_p2__DOT__p2_pipe_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    }
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy) & (IData)(vlSelfRef.__PVT__pipe_in_vld))) {
        __Vtemp_2[1U] = vlSelfRef.__PVT__int_pooling[1U];
        __Vtemp_2[2U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[0U] 
                          << 0x00000018U) | vlSelfRef.__PVT__int_pooling[2U]);
        __Vtemp_2[3U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[0U] 
                          >> 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[1U] 
                                    << 0x00000018U));
        __Vtemp_2[4U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[1U] 
                          >> 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U] 
                                    << 0x00000018U));
        __Vtemp_2[5U] = ((((((IData)(vlSelfRef.pooling_din_last) 
                             << 8U) | (((IData)(vlSelfRef.__PVT__pooling_size) 
                                        << 5U) | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                  << 4U))) 
                           | ((0x0000000cU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U] 
                                              >> 0x0000001aU)) 
                              | ((2U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[3U] 
                                        >> 3U)) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_1)))) 
                          << 0x00000010U) | (0x0000ffffU 
                                             & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U] 
                                                >> 8U)));
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__int_pooling[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_2[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_2[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_2[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U] 
        = __Vtemp_2[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U] 
        = __Vtemp_2[5U];
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy_d2) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) {
        __Vdly__pipe_p3__DOT__p3_pipe_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    } else {
        __Vdly__pipe_p3__DOT__p3_pipe_data[0U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[2U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[3U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[4U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[5U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U];
    }
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy_d3) & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) {
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U];
    } else {
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[5U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[5U];
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__1(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__load_din) & (
                                                   vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[3U] 
                                                   >> 4U))) {
            vlSelfRef.__PVT__pooling_size = ((IData)(vlSelfRef.pooling_din_last)
                                              ? 0U : 
                                             (7U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__pooling_size))));
        }
        if ((((IData)(vlSelfRef.pooling_out_pvld) & (IData)(vlSelfRef.pooling_out_prdy)) 
             & ((IData)((0x01000000U == (0x01100000U 
                                         & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U]))) 
                | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.last_out_en)))) {
            vlSelfRef.__PVT__pooling_cnt = ((3U == (IData)(vlSelfRef.__PVT__pooling_cnt))
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__pooling_cnt))));
        }
        if ((IData)((0x01000000U == (0x01100000U & 
                                     vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])))) {
            if ((0x00080000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                    vlSelfRef.__PVT__flush_out3[0U] 
                        = vlSelfRef.__PVT__data_buf3[0U];
                    vlSelfRef.__PVT__flush_out3[1U] 
                        = vlSelfRef.__PVT__data_buf3[1U];
                    vlSelfRef.__PVT__flush_out3[2U] 
                        = ((0x08000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                           << 0x0000000aU)) 
                           | ((0x07000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              << 3U)) 
                              | vlSelfRef.__PVT__data_buf3[2U]));
                }
                if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              >> 0x00000012U)))) {
                    vlSelfRef.__PVT__flush_out2[0U] 
                        = vlSelfRef.__PVT__data_buf2[0U];
                    vlSelfRef.__PVT__flush_out2[1U] 
                        = vlSelfRef.__PVT__data_buf2[1U];
                    vlSelfRef.__PVT__flush_out2[2U] 
                        = ((0x08000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                           << 0x0000000aU)) 
                           | ((0x07000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              << 3U)) 
                              | vlSelfRef.__PVT__data_buf2[2U]));
                }
            }
            if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000013U)))) {
                if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                    vlSelfRef.__PVT__flush_out1[0U] 
                        = vlSelfRef.__PVT__data_buf1[0U];
                    vlSelfRef.__PVT__flush_out1[1U] 
                        = vlSelfRef.__PVT__data_buf1[1U];
                    vlSelfRef.__PVT__flush_out1[2U] 
                        = ((0x08000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                           << 0x0000000aU)) 
                           | ((0x07000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              << 3U)) 
                              | vlSelfRef.__PVT__data_buf1[2U]));
                }
                if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              >> 0x00000012U)))) {
                    vlSelfRef.__PVT__flush_out0[0U] 
                        = vlSelfRef.__PVT__data_buf0[0U];
                    vlSelfRef.__PVT__flush_out0[1U] 
                        = vlSelfRef.__PVT__data_buf0[1U];
                    vlSelfRef.__PVT__flush_out0[2U] 
                        = ((0x08000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                           << 0x0000000aU)) 
                           | ((0x07000000U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              << 3U)) 
                              | vlSelfRef.__PVT__data_buf0[2U]));
                }
            }
        }
        if (((IData)(vlSelfRef.pooling_out_pvld) & (IData)(vlSelfRef.__PVT__add_out_rdy))) {
            if ((0x00080000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                    vlSelfRef.__PVT__latch_result3_d3[0U] 
                        = vlSelfRef.__PVT__pooling_result[0U];
                    vlSelfRef.__PVT__latch_result3_d3[1U] 
                        = vlSelfRef.__PVT__pooling_result[1U];
                    vlSelfRef.__PVT__latch_result3_d3[2U] 
                        = vlSelfRef.__PVT__pooling_result[2U];
                }
                if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              >> 0x00000012U)))) {
                    vlSelfRef.__PVT__latch_result2_d3[0U] 
                        = vlSelfRef.__PVT__pooling_result[0U];
                    vlSelfRef.__PVT__latch_result2_d3[1U] 
                        = vlSelfRef.__PVT__pooling_result[1U];
                    vlSelfRef.__PVT__latch_result2_d3[2U] 
                        = vlSelfRef.__PVT__pooling_result[2U];
                }
            }
            if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000013U)))) {
                if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                    vlSelfRef.__PVT__latch_result1_d3[0U] 
                        = vlSelfRef.__PVT__pooling_result[0U];
                    vlSelfRef.__PVT__latch_result1_d3[1U] 
                        = vlSelfRef.__PVT__pooling_result[1U];
                    vlSelfRef.__PVT__latch_result1_d3[2U] 
                        = vlSelfRef.__PVT__pooling_result[2U];
                }
                if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              >> 0x00000012U)))) {
                    vlSelfRef.__PVT__latch_result0_d3[0U] 
                        = vlSelfRef.__PVT__pooling_result[0U];
                    vlSelfRef.__PVT__latch_result0_d3[1U] 
                        = vlSelfRef.__PVT__pooling_result[1U];
                    vlSelfRef.__PVT__latch_result0_d3[2U] 
                        = vlSelfRef.__PVT__pooling_result[2U];
                }
            }
            if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              >> 0x00000013U)))) {
                    if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U] 
                            = (IData)((((QData)((IData)(
                                                        (0x0001ffffU 
                                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                            >> 4U)))) 
                                        << 0x00000022U) 
                                       | (((QData)((IData)(
                                                           (0x0001ffffU 
                                                            & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                               >> 0x0000000eU)))) 
                                           << 0x00000011U) 
                                          | (QData)((IData)(
                                                            (0x0001ffffU 
                                                             & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                 << 8U) 
                                                                | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                   >> 0x00000018U))))))));
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U] 
                            = ((0xfff80000U & vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U]) 
                               | (IData)(((((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                                >> 4U)))) 
                                            << 0x00000022U) 
                                           | (((QData)((IData)(
                                                               (0x0001ffffU 
                                                                & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                   >> 0x0000000eU)))) 
                                               << 0x00000011U) 
                                              | (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                       >> 0x00000018U))))))) 
                                          >> 0x00000020U)));
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U] 
                            = ((0x0007ffffU & vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U]) 
                               | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                  << 0x00000019U) 
                                                 | (0x01f80000U 
                                                    & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                       >> 7U)))));
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U] 
                            = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              >> 7U));
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                  >> 0x00000012U)))) {
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U] 
                            = (IData)((((QData)((IData)(
                                                        (0x0001ffffU 
                                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                            >> 4U)))) 
                                        << 0x00000022U) 
                                       | (((QData)((IData)(
                                                           (0x0001ffffU 
                                                            & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                               >> 0x0000000eU)))) 
                                           << 0x00000011U) 
                                          | (QData)((IData)(
                                                            (0x0001ffffU 
                                                             & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                 << 8U) 
                                                                | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                   >> 0x00000018U))))))));
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U] 
                            = ((0xfff80000U & vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U]) 
                               | (IData)(((((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                                >> 4U)))) 
                                            << 0x00000022U) 
                                           | (((QData)((IData)(
                                                               (0x0001ffffU 
                                                                & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                   >> 0x0000000eU)))) 
                                               << 0x00000011U) 
                                              | (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                       >> 0x00000018U))))))) 
                                          >> 0x00000020U)));
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U] 
                            = ((0x0007ffffU & vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U]) 
                               | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                  << 0x00000019U) 
                                                 | (0x01f80000U 
                                                    & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                       >> 7U)))));
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U] 
                            = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              >> 7U));
                    }
                }
                if ((0x00080000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                    if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U] 
                            = (IData)((((QData)((IData)(
                                                        (0x0001ffffU 
                                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                            >> 4U)))) 
                                        << 0x00000022U) 
                                       | (((QData)((IData)(
                                                           (0x0001ffffU 
                                                            & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                               >> 0x0000000eU)))) 
                                           << 0x00000011U) 
                                          | (QData)((IData)(
                                                            (0x0001ffffU 
                                                             & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                 << 8U) 
                                                                | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                   >> 0x00000018U))))))));
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U] 
                            = ((0xfff80000U & vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U]) 
                               | (IData)(((((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                                >> 4U)))) 
                                            << 0x00000022U) 
                                           | (((QData)((IData)(
                                                               (0x0001ffffU 
                                                                & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                   >> 0x0000000eU)))) 
                                               << 0x00000011U) 
                                              | (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                       >> 0x00000018U))))))) 
                                          >> 0x00000020U)));
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U] 
                            = ((0x0007ffffU & vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U]) 
                               | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                  << 0x00000019U) 
                                                 | (0x01f80000U 
                                                    & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                       >> 7U)))));
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U] 
                            = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              >> 7U));
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                  >> 0x00000012U)))) {
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U] 
                            = (IData)((((QData)((IData)(
                                                        (0x0001ffffU 
                                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                            >> 4U)))) 
                                        << 0x00000022U) 
                                       | (((QData)((IData)(
                                                           (0x0001ffffU 
                                                            & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                               >> 0x0000000eU)))) 
                                           << 0x00000011U) 
                                          | (QData)((IData)(
                                                            (0x0001ffffU 
                                                             & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                 << 8U) 
                                                                | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                   >> 0x00000018U))))))));
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U] 
                            = ((0xfff80000U & vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U]) 
                               | (IData)(((((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                                >> 4U)))) 
                                            << 0x00000022U) 
                                           | (((QData)((IData)(
                                                               (0x0001ffffU 
                                                                & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                   >> 0x0000000eU)))) 
                                               << 0x00000011U) 
                                              | (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                       >> 0x00000018U))))))) 
                                          >> 0x00000020U)));
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U] 
                            = ((0x0007ffffU & vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U]) 
                               | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                  << 0x00000019U) 
                                                 | (0x01f80000U 
                                                    & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                       >> 7U)))));
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U] 
                            = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                              >> 7U));
                    }
                }
            } else {
                if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              >> 0x00000013U)))) {
                    if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U] 
                            = vlSelfRef.__PVT__fp_pool_sum[0U];
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U] 
                            = vlSelfRef.__PVT__fp_pool_sum[1U];
                        vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U] 
                            = vlSelfRef.__PVT__fp_pool_sum[2U];
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                  >> 0x00000012U)))) {
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U] 
                            = vlSelfRef.__PVT__fp_pool_sum[0U];
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U] 
                            = vlSelfRef.__PVT__fp_pool_sum[1U];
                        vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U] 
                            = vlSelfRef.__PVT__fp_pool_sum[2U];
                    }
                }
                if ((0x00080000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                    if ((0x00040000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U] 
                            = vlSelfRef.__PVT__fp_pool_sum[0U];
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U] 
                            = vlSelfRef.__PVT__fp_pool_sum[1U];
                        vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U] 
                            = vlSelfRef.__PVT__fp_pool_sum[2U];
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                  >> 0x00000012U)))) {
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U] 
                            = vlSelfRef.__PVT__fp_pool_sum[0U];
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U] 
                            = vlSelfRef.__PVT__fp_pool_sum[1U];
                        vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U] 
                            = vlSelfRef.__PVT__fp_pool_sum[2U];
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__pooling_size = 0U;
        vlSelfRef.__PVT__pooling_cnt = 0U;
        vlSelfRef.__PVT__flush_out3[0U] = 0U;
        vlSelfRef.__PVT__flush_out3[1U] = 0U;
        vlSelfRef.__PVT__flush_out3[2U] = 0U;
        vlSelfRef.__PVT__flush_out2[0U] = 0U;
        vlSelfRef.__PVT__flush_out2[1U] = 0U;
        vlSelfRef.__PVT__flush_out2[2U] = 0U;
        vlSelfRef.__PVT__flush_out1[0U] = 0U;
        vlSelfRef.__PVT__flush_out1[1U] = 0U;
        vlSelfRef.__PVT__flush_out1[2U] = 0U;
        vlSelfRef.__PVT__flush_out0[0U] = 0U;
        vlSelfRef.__PVT__flush_out0[1U] = 0U;
        vlSelfRef.__PVT__flush_out0[2U] = 0U;
        vlSelfRef.__PVT__latch_result3_d3[0U] = 0U;
        vlSelfRef.__PVT__latch_result3_d3[1U] = 0U;
        vlSelfRef.__PVT__latch_result3_d3[2U] = 0U;
        vlSelfRef.__PVT__latch_result2_d3[0U] = 0U;
        vlSelfRef.__PVT__latch_result2_d3[1U] = 0U;
        vlSelfRef.__PVT__latch_result2_d3[2U] = 0U;
        vlSelfRef.__PVT__latch_result1_d3[0U] = 0U;
        vlSelfRef.__PVT__latch_result1_d3[1U] = 0U;
        vlSelfRef.__PVT__latch_result1_d3[2U] = 0U;
        vlSelfRef.__PVT__latch_result0_d3[0U] = 0U;
        vlSelfRef.__PVT__latch_result0_d3[1U] = 0U;
        vlSelfRef.__PVT__latch_result0_d3[2U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U] = 0U;
        vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U] = 0U;
    }
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__pipe_in_vld))));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__3(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U];
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        vlSelfRef.__PVT__pooling_result[0U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[1U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                     >> 0x00000018U)));
    } else {
        vlSelfRef.__PVT__pooling_result[0U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__PVT__pooling_result[1U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U]);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[0U] 
        = (IData)((((QData)((IData)((0x0001ffffU & 
                                     (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                      >> 4U)))) << 0x00000022U) 
                   | (((QData)((IData)((0x0001ffffU 
                                        & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                           >> 0x0000000eU)))) 
                       << 0x00000011U) | (QData)((IData)(
                                                         (0x0001ffffU 
                                                          & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                >> 0x00000018U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U]) 
           | (IData)(((((QData)((IData)((0x0001ffffU 
                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                            >> 4U)))) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                >> 0x0000000eU)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (0x0001ffffU 
                                                              & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                  << 8U) 
                                                                 | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                    >> 0x00000018U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3006[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    } else {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    }
    if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg) {
        vlSelfRef.pooling_out_pvld = ((0x0000000fU 
                                       == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)) 
                                      & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
        vlSelfRef.__PVT__data_buf0[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))));
        vlSelfRef.__PVT__data_buf0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf0[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf1[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))));
        vlSelfRef.__PVT__data_buf1[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf1[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf2[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))));
        vlSelfRef.__PVT__data_buf2[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf2[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf3[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))));
        vlSelfRef.__PVT__data_buf3[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf3[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                   >> 0x00000011U))));
    } else {
        vlSelfRef.pooling_out_pvld = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid;
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__latch_result0_d3[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__latch_result0_d3[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__latch_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__latch_result1_d3[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__latch_result1_d3[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__latch_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__latch_result2_d3[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__latch_result2_d3[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__latch_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__latch_result3_d3[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__latch_result3_d3[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__latch_result3_d3[2U];
        }
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf3[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf3[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf3[2U];
        } else {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf2[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf2[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf2[2U];
        }
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf1[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf1[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf1[2U];
    } else {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf0[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf0[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf0[2U];
    }
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__1(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pooling_din_last = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__1__KET__) 
                                  & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_60) 
                                      & (1U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_cnt_pooling))) 
                                     | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__strip_width_end)));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__2(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pooling_out_prdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_17) 
                                  & (IData)(((0xfcU 
                                              == (0xfcU 
                                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_pvld))) 
                                             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.pooling_out_pvld))));
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.pooling_out_pvld)) 
                                          | (IData)(vlSelfRef.pooling_out_prdy)));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_out_prdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg) 
           & ((IData)(vlSelfRef.__PVT__add_out_rdy) 
              & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)));
    vlSelfRef.__PVT__pipe_in_rdy_d3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                             | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__add_out_rdy) 
                                                 & (0x0000000fU 
                                                    == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)))
                                                 : (IData)(vlSelfRef.__PVT__add_out_rdy))));
    vlSelfRef.__PVT__pipe_in_rdy_d2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                             | (IData)(vlSelfRef.__PVT__pipe_in_rdy_d3)));
    vlSelfRef.__PVT__pipe_in_rdy_d1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                             | (IData)(vlSelfRef.__PVT__pipe_in_rdy_d2)));
    vlSelfRef.__PVT__pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                          | (IData)(vlSelfRef.__PVT__pipe_in_rdy_d1)));
    vlSelfRef.pdma2pdp_prdy = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)
                                ? ((IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy) 
                                   & (IData)(vlSelfRef.__PVT__pipe_in_rdy))
                                : (IData)(vlSelfRef.__PVT__pipe_in_rdy));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__3(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_pooling_fun__13__reg2dp_int8_en;
    __Vfunc_pooling_fun__13__reg2dp_int8_en = 0;
    CData/*0:0*/ __Vfunc_pooling_fun__13__reg2dp_int16_en;
    __Vfunc_pooling_fun__13__reg2dp_int16_en = 0;
    CData/*0:0*/ __Vfunc_pooling_fun__13__reg2dp_fp16_en;
    __Vfunc_pooling_fun__13__reg2dp_fp16_en = 0;
    CData/*1:0*/ __Vfunc_pooling_fun__13__pooling_type;
    __Vfunc_pooling_fun__13__pooling_type = 0;
    VlWide<3>/*87:0*/ __Vfunc_pooling_fun__13__data0_in;
    VL_ZERO_W(88, __Vfunc_pooling_fun__13__data0_in);
    VlWide<3>/*87:0*/ __Vfunc_pooling_fun__13__data1_in;
    VL_ZERO_W(88, __Vfunc_pooling_fun__13__data1_in);
    // Body
    vlSelfRef.pdma2pdp_pvld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_15) 
                               & (IData)(((0xfcU == 
                                           (0xfcU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_prdy))) 
                                          & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.pdma2pdp_prdy))));
    vlSelfRef.__PVT__pipe_in_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)
                                     ? ((IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy) 
                                        & (IData)(vlSelfRef.pdma2pdp_pvld))
                                     : (IData)(vlSelfRef.pdma2pdp_pvld));
    vlSelfRef.__PVT__load_din = ((IData)(vlSelfRef.pdma2pdp_pvld) 
                                 & ((IData)(vlSelfRef.pdma2pdp_prdy) 
                                    & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable)) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__1__KET__))));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld 
        = ((IData)(vlSelfRef.pdma2pdp_pvld) & ((IData)(vlSelfRef.__PVT__pipe_in_rdy) 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)));
    vlSelfRef.__PVT__pool_fun_vld = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)) 
                                     & (IData)(vlSelfRef.__PVT__load_din));
    if (vlSelfRef.__PVT__pool_fun_vld) {
        __Vfunc_pooling_fun__13__data1_in[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[0U];
        __Vfunc_pooling_fun__13__data1_in[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[1U];
        __Vfunc_pooling_fun__13__data1_in[2U] = (0x00ffffffU 
                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U]);
        __Vfunc_pooling_fun__13__data0_in[0U] = vlSelfRef.__PVT__fp_cur_pooling_dat[0U];
        __Vfunc_pooling_fun__13__data0_in[1U] = vlSelfRef.__PVT__fp_cur_pooling_dat[1U];
        __Vfunc_pooling_fun__13__data0_in[2U] = vlSelfRef.__PVT__fp_cur_pooling_dat[2U];
    } else {
        __Vfunc_pooling_fun__13__data1_in[0U] = 0U;
        __Vfunc_pooling_fun__13__data1_in[1U] = 0U;
        __Vfunc_pooling_fun__13__data1_in[2U] = 0U;
        __Vfunc_pooling_fun__13__data0_in[0U] = 0U;
        __Vfunc_pooling_fun__13__data0_in[1U] = 0U;
        __Vfunc_pooling_fun__13__data0_in[2U] = 0U;
    }
    __Vfunc_pooling_fun__13__pooling_type = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    __Vfunc_pooling_fun__13__reg2dp_fp16_en = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_fp16_en;
    __Vfunc_pooling_fun__13__reg2dp_int16_en = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_int16_en;
    __Vfunc_pooling_fun__13__reg2dp_int8_en = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_int8_en;
    vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling 
        = (2U == (IData)(__Vfunc_pooling_fun__13__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling 
        = (1U == (IData)(__Vfunc_pooling_fun__13__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling 
        = (0U == (IData)(__Vfunc_pooling_fun__13__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((0x0eU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | (IData)(((0x00007c00U == (0x00007c00U 
                                       & __Vfunc_pooling_fun__13__data0_in[0U])) 
                      & (0U != (0x000003ffU & __Vfunc_pooling_fun__13__data0_in[0U])))));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((0x0eU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | (IData)(((0x00007c00U == (0x00007c00U 
                                       & __Vfunc_pooling_fun__13__data1_in[0U])) 
                      & (0U != (0x000003ffU & __Vfunc_pooling_fun__13__data1_in[0U])))));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((0x0dU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | (((0x0000001fU == (0x0000001fU & __Vfunc_pooling_fun__13__data0_in[1U])) 
               & (0U != (__Vfunc_pooling_fun__13__data0_in[0U] 
                         >> 0x00000016U))) << 1U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((0x0dU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | (((0x0000001fU == (0x0000001fU & __Vfunc_pooling_fun__13__data1_in[1U])) 
               & (0U != (__Vfunc_pooling_fun__13__data1_in[0U] 
                         >> 0x00000016U))) << 1U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((0x0bU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | ((IData)(((0x07c00000U == (0x07c00000U 
                                        & __Vfunc_pooling_fun__13__data0_in[1U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__13__data0_in[1U] 
                                                >> 0x0000000cU))))) 
              << 2U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((0x0bU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | ((IData)(((0x07c00000U == (0x07c00000U 
                                        & __Vfunc_pooling_fun__13__data1_in[1U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__13__data1_in[1U] 
                                                >> 0x0000000cU))))) 
              << 2U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((7U & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | ((IData)(((0x0001f000U == (0x0001f000U 
                                        & __Vfunc_pooling_fun__13__data0_in[2U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__13__data0_in[2U] 
                                                >> 2U))))) 
              << 3U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((7U & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | ((IData)(((0x0001f000U == (0x0001f000U 
                                        & __Vfunc_pooling_fun__13__data1_in[2U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__13__data1_in[2U] 
                                                >> 2U))))) 
              << 3U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in = 
        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan) 
         | (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan));
    VL_ASSIGNSEL_WI(88, 22, 0U, vlSelfRef.__Vfunc_pooling_fun__13__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__14__data1 
                                = (0x003fffffU & __Vfunc_pooling_fun__13__data1_in[0U]);
                            vlSelfRef.__Vfunc_pooling_SUM__14__data0 
                                = (0x003fffffU & __Vfunc_pooling_fun__13__data0_in[0U]);
                            vlSelfRef.__Vfunc_pooling_SUM__14__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__13__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__14__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__13__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__14__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__14__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__14__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__14__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__14__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__14__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__14__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__14__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__14__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__14__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__14__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__14__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff 
                                = (0x003fffffU & (vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                                  + vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff;
                            vlSelfRef.__Vfunc_pooling_SUM__14__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__14__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__14__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en)) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in)) 
                                                      & (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__15__data1 
                                        = (0x003fffffU 
                                           & __Vfunc_pooling_fun__13__data1_in[0U]);
                                    vlSelfRef.__Vfunc_pooling_MIN__15__data0 
                                        = (0x003fffffU 
                                           & __Vfunc_pooling_fun__13__data0_in[0U]);
                                    vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__13__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__13__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__13__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__15__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__15__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__15__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__15__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__15__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__15__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__15__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__15__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff 
                                        = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0
                                            : vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16 
                                        = ((1U & ((~ 
                                                   (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                    >> 0x0fU)) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                      >> 0x0fU))))
                                            ? (((0x00007fffU 
                                                 & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                > (0x00007fffU 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1
                                                : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0)
                                            : ((0x00008000U 
                                                & (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)
                                                : (
                                                   (1U 
                                                    & ((vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                        >> 0x0fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                           >> 0x0fU))))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)));
                                    vlSelfRef.__Vfunc_pooling_MIN__15__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__15__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__15__Vfuncout))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & __Vfunc_pooling_fun__13__data0_in[0U])
                                                 : 
                                                (0x003fffffU 
                                                 & __Vfunc_pooling_fun__13__data1_in[0U])))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in)) 
                                                       & (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__16__data1 
                                            = (0x003fffffU 
                                               & __Vfunc_pooling_fun__13__data1_in[0U]);
                                        vlSelfRef.__Vfunc_pooling_MAX__16__data0 
                                            = (0x003fffffU 
                                               & __Vfunc_pooling_fun__13__data0_in[0U]);
                                        vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__13__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__13__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__13__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__16__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__16__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__16__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__16__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__16__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__16__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__16__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__16__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff 
                                            = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0
                                                : vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16 
                                            = ((1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                     >> 0x0fU)) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                       >> 0x0fU))))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1)
                                                : (
                                                   (0x00008000U 
                                                    & (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                       & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? 
                                                   (((0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                     > 
                                                     (0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                         >> 0x0fU) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                            >> 0x0fU))))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)));
                                        vlSelfRef.__Vfunc_pooling_MAX__16__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__16__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__16__Vfuncout))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & __Vfunc_pooling_fun__13__data0_in[0U])
                                                  : 
                                                 (0x003fffffU 
                                                  & __Vfunc_pooling_fun__13__data1_in[0U])))
                                             : 0U)))));
    VL_ASSIGNSEL_WI(88, 22, 0x16U, vlSelfRef.__Vfunc_pooling_fun__13__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__17__data1 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__13__data1_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__13__data1_in[0U] 
                                                     >> 0x00000016U)));
                            vlSelfRef.__Vfunc_pooling_SUM__17__data0 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__13__data0_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__13__data0_in[0U] 
                                                     >> 0x00000016U)));
                            vlSelfRef.__Vfunc_pooling_SUM__17__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__13__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__17__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__13__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__17__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__17__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__17__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__17__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__17__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__17__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__17__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__17__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__17__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__17__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__17__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__17__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff 
                                = (0x003fffffU & (vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                                  + vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff;
                            vlSelfRef.__Vfunc_pooling_SUM__17__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__17__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__17__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                        >> 1U)) 
                                                      & (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__18__data1 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__13__data1_in[1U] 
                                               << 0x0000000aU) 
                                              | (__Vfunc_pooling_fun__13__data1_in[0U] 
                                                 >> 0x00000016U)));
                                    vlSelfRef.__Vfunc_pooling_MIN__18__data0 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__13__data0_in[1U] 
                                               << 0x0000000aU) 
                                              | (__Vfunc_pooling_fun__13__data0_in[0U] 
                                                 >> 0x00000016U)));
                                    vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__13__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__13__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__13__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__18__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__18__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__18__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__18__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__18__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__18__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__18__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__18__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff 
                                        = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0
                                            : vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16 
                                        = ((1U & ((~ 
                                                   (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                    >> 0x0fU)) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                      >> 0x0fU))))
                                            ? (((0x00007fffU 
                                                 & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                > (0x00007fffU 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1
                                                : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0)
                                            : ((0x00008000U 
                                                & (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)
                                                : (
                                                   (1U 
                                                    & ((vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                        >> 0x0fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                           >> 0x0fU))))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)));
                                    vlSelfRef.__Vfunc_pooling_MIN__18__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__18__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__18__Vfuncout))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__13__data0_in[1U] 
                                                     << 0x0000000aU) 
                                                    | (__Vfunc_pooling_fun__13__data0_in[0U] 
                                                       >> 0x00000016U)))
                                                 : 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__13__data1_in[1U] 
                                                     << 0x0000000aU) 
                                                    | (__Vfunc_pooling_fun__13__data1_in[0U] 
                                                       >> 0x00000016U)))))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en)) 
                                                    | ((~ 
                                                        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                         >> 1U)) 
                                                       & (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__19__data1 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__13__data1_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__13__data1_in[0U] 
                                                     >> 0x00000016U)));
                                        vlSelfRef.__Vfunc_pooling_MAX__19__data0 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__13__data0_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__13__data0_in[0U] 
                                                     >> 0x00000016U)));
                                        vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__13__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__13__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__13__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__19__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__19__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__19__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__19__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__19__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__19__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__19__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__19__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff 
                                            = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0
                                                : vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16 
                                            = ((1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                     >> 0x0fU)) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                       >> 0x0fU))))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1)
                                                : (
                                                   (0x00008000U 
                                                    & (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                       & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? 
                                                   (((0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                     > 
                                                     (0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                         >> 0x0fU) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                            >> 0x0fU))))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)));
                                        vlSelfRef.__Vfunc_pooling_MAX__19__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__19__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__19__Vfuncout))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__13__data0_in[1U] 
                                                      << 0x0000000aU) 
                                                     | (__Vfunc_pooling_fun__13__data0_in[0U] 
                                                        >> 0x00000016U)))
                                                  : 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__13__data1_in[1U] 
                                                      << 0x0000000aU) 
                                                     | (__Vfunc_pooling_fun__13__data1_in[0U] 
                                                        >> 0x00000016U)))))
                                             : 0U)))));
    VL_ASSIGNSEL_WI(88, 22, 0x2cU, vlSelfRef.__Vfunc_pooling_fun__13__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__20__data1 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__13__data1_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__13__data1_in[1U] 
                                                     >> 0x0000000cU)));
                            vlSelfRef.__Vfunc_pooling_SUM__20__data0 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__13__data0_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__13__data0_in[1U] 
                                                     >> 0x0000000cU)));
                            vlSelfRef.__Vfunc_pooling_SUM__20__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__13__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__20__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__13__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__20__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__20__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__20__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__20__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__20__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__20__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__20__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__20__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__20__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__20__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__20__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__20__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff 
                                = (0x003fffffU & (vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                                  + vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff;
                            vlSelfRef.__Vfunc_pooling_SUM__20__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__20__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__20__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                        >> 2U)) 
                                                      & (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__21__data1 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__13__data1_in[2U] 
                                               << 0x00000014U) 
                                              | (__Vfunc_pooling_fun__13__data1_in[1U] 
                                                 >> 0x0000000cU)));
                                    vlSelfRef.__Vfunc_pooling_MIN__21__data0 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__13__data0_in[2U] 
                                               << 0x00000014U) 
                                              | (__Vfunc_pooling_fun__13__data0_in[1U] 
                                                 >> 0x0000000cU)));
                                    vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__13__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__13__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__13__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__21__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__21__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__21__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__21__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__21__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__21__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__21__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__21__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff 
                                        = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0
                                            : vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16 
                                        = ((1U & ((~ 
                                                   (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                    >> 0x0fU)) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                      >> 0x0fU))))
                                            ? (((0x00007fffU 
                                                 & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                > (0x00007fffU 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1
                                                : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0)
                                            : ((0x00008000U 
                                                & (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)
                                                : (
                                                   (1U 
                                                    & ((vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                        >> 0x0fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                           >> 0x0fU))))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)));
                                    vlSelfRef.__Vfunc_pooling_MIN__21__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__21__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__21__Vfuncout))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__13__data0_in[2U] 
                                                     << 0x00000014U) 
                                                    | (__Vfunc_pooling_fun__13__data0_in[1U] 
                                                       >> 0x0000000cU)))
                                                 : 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__13__data1_in[2U] 
                                                     << 0x00000014U) 
                                                    | (__Vfunc_pooling_fun__13__data1_in[1U] 
                                                       >> 0x0000000cU)))))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en)) 
                                                    | ((~ 
                                                        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                         >> 2U)) 
                                                       & (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__22__data1 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__13__data1_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__13__data1_in[1U] 
                                                     >> 0x0000000cU)));
                                        vlSelfRef.__Vfunc_pooling_MAX__22__data0 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__13__data0_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__13__data0_in[1U] 
                                                     >> 0x0000000cU)));
                                        vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__13__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__13__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__13__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__22__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__22__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__22__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__22__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__22__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__22__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__22__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__22__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff 
                                            = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0
                                                : vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16 
                                            = ((1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                     >> 0x0fU)) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                       >> 0x0fU))))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1)
                                                : (
                                                   (0x00008000U 
                                                    & (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                       & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? 
                                                   (((0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                     > 
                                                     (0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                         >> 0x0fU) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                            >> 0x0fU))))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)));
                                        vlSelfRef.__Vfunc_pooling_MAX__22__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__22__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__22__Vfuncout))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__13__data0_in[2U] 
                                                      << 0x00000014U) 
                                                     | (__Vfunc_pooling_fun__13__data0_in[1U] 
                                                        >> 0x0000000cU)))
                                                  : 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__13__data1_in[2U] 
                                                      << 0x00000014U) 
                                                     | (__Vfunc_pooling_fun__13__data1_in[1U] 
                                                        >> 0x0000000cU)))))
                                             : 0U)))));
    VL_ASSIGNSEL_WI(88, 22, 0x42U, vlSelfRef.__Vfunc_pooling_fun__13__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__23__data1 
                                = (0x003fffffU & (__Vfunc_pooling_fun__13__data1_in[2U] 
                                                  >> 2U));
                            vlSelfRef.__Vfunc_pooling_SUM__23__data0 
                                = (0x003fffffU & (__Vfunc_pooling_fun__13__data0_in[2U] 
                                                  >> 2U));
                            vlSelfRef.__Vfunc_pooling_SUM__23__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__13__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__23__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__13__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__23__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__23__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__23__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__23__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__23__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__23__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__23__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__23__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__23__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__23__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__23__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__23__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff 
                                = (0x003fffffU & (vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                                  + vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff;
                            vlSelfRef.__Vfunc_pooling_SUM__23__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__23__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__23__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                        >> 3U)) 
                                                      & (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__24__data1 
                                        = (0x003fffffU 
                                           & (__Vfunc_pooling_fun__13__data1_in[2U] 
                                              >> 2U));
                                    vlSelfRef.__Vfunc_pooling_MIN__24__data0 
                                        = (0x003fffffU 
                                           & (__Vfunc_pooling_fun__13__data0_in[2U] 
                                              >> 2U));
                                    vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__13__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__13__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__13__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__24__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__24__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__24__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__24__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__24__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__24__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__24__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__24__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff 
                                        = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0
                                            : vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16 
                                        = ((1U & ((~ 
                                                   (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                    >> 0x0fU)) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                      >> 0x0fU))))
                                            ? (((0x00007fffU 
                                                 & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                > (0x00007fffU 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1
                                                : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0)
                                            : ((0x00008000U 
                                                & (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)
                                                : (
                                                   (1U 
                                                    & ((vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                        >> 0x0fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                           >> 0x0fU))))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)));
                                    vlSelfRef.__Vfunc_pooling_MIN__24__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__24__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__24__Vfuncout))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & (__Vfunc_pooling_fun__13__data0_in[2U] 
                                                    >> 2U))
                                                 : 
                                                (0x003fffffU 
                                                 & (__Vfunc_pooling_fun__13__data1_in[2U] 
                                                    >> 2U))))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en)) 
                                                    | ((~ 
                                                        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                         >> 3U)) 
                                                       & (IData)(__Vfunc_pooling_fun__13__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__25__data1 
                                            = (0x003fffffU 
                                               & (__Vfunc_pooling_fun__13__data1_in[2U] 
                                                  >> 2U));
                                        vlSelfRef.__Vfunc_pooling_MAX__25__data0 
                                            = (0x003fffffU 
                                               & (__Vfunc_pooling_fun__13__data0_in[2U] 
                                                  >> 2U));
                                        vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__13__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__13__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__13__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__25__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__25__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__25__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__25__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__25__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__25__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__25__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__25__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff 
                                            = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0
                                                : vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16 
                                            = ((1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                     >> 0x0fU)) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                       >> 0x0fU))))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1)
                                                : (
                                                   (0x00008000U 
                                                    & (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                       & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? 
                                                   (((0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                     > 
                                                     (0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                         >> 0x0fU) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                            >> 0x0fU))))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)));
                                        vlSelfRef.__Vfunc_pooling_MAX__25__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__25__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__25__Vfuncout))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & (__Vfunc_pooling_fun__13__data0_in[2U] 
                                                     >> 2U))
                                                  : 
                                                 (0x003fffffU 
                                                  & (__Vfunc_pooling_fun__13__data1_in[2U] 
                                                     >> 2U))))
                                             : 0U)))));
    vlSelfRef.__PVT__int_pooling[0U] = vlSelfRef.__Vfunc_pooling_fun__13__Vfuncout[0U];
    vlSelfRef.__PVT__int_pooling[1U] = vlSelfRef.__Vfunc_pooling_fun__13__Vfuncout[1U];
    vlSelfRef.__PVT__int_pooling[2U] = vlSelfRef.__Vfunc_pooling_fun__13__Vfuncout[2U];
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<6>/*184:0*/ __Vdly__pipe_p2__DOT__p2_pipe_data;
    VL_ZERO_W(185, __Vdly__pipe_p2__DOT__p2_pipe_data);
    VlWide<6>/*184:0*/ __Vdly__pipe_p3__DOT__p3_pipe_data;
    VL_ZERO_W(185, __Vdly__pipe_p3__DOT__p3_pipe_data);
    VlWide<6>/*191:0*/ __Vtemp_2;
    // Body
    __Vdly__pipe_p2__DOT__p2_pipe_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[0U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[2U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[3U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[4U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[5U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U];
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy_d1) & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))) {
        __Vdly__pipe_p2__DOT__p2_pipe_data[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
    } else {
        __Vdly__pipe_p2__DOT__p2_pipe_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    }
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy) & (IData)(vlSelfRef.__PVT__pipe_in_vld))) {
        __Vtemp_2[1U] = vlSelfRef.__PVT__int_pooling[1U];
        __Vtemp_2[2U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[0U] 
                          << 0x00000018U) | vlSelfRef.__PVT__int_pooling[2U]);
        __Vtemp_2[3U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[0U] 
                          >> 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[1U] 
                                    << 0x00000018U));
        __Vtemp_2[4U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[1U] 
                          >> 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U] 
                                    << 0x00000018U));
        __Vtemp_2[5U] = ((((((IData)(vlSelfRef.pooling_din_last) 
                             << 8U) | (((IData)(vlSelfRef.__PVT__pooling_size) 
                                        << 5U) | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                  << 4U))) 
                           | ((0x0000000cU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U] 
                                              >> 0x0000001aU)) 
                              | ((2U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[3U] 
                                        >> 3U)) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_2)))) 
                          << 0x00000010U) | (0x0000ffffU 
                                             & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U] 
                                                >> 8U)));
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__int_pooling[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_2[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_2[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_2[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U] 
        = __Vtemp_2[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U] 
        = __Vtemp_2[5U];
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy_d2) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) {
        __Vdly__pipe_p3__DOT__p3_pipe_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    } else {
        __Vdly__pipe_p3__DOT__p3_pipe_data[0U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[2U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[3U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[4U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[5U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U];
    }
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy_d3) & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) {
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U];
    } else {
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[5U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[5U];
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__3(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U];
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        vlSelfRef.__PVT__pooling_result[0U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[1U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                     >> 0x00000018U)));
    } else {
        vlSelfRef.__PVT__pooling_result[0U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__PVT__pooling_result[1U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U]);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[0U] 
        = (IData)((((QData)((IData)((0x0001ffffU & 
                                     (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                      >> 4U)))) << 0x00000022U) 
                   | (((QData)((IData)((0x0001ffffU 
                                        & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                           >> 0x0000000eU)))) 
                       << 0x00000011U) | (QData)((IData)(
                                                         (0x0001ffffU 
                                                          & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                >> 0x00000018U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U]) 
           | (IData)(((((QData)((IData)((0x0001ffffU 
                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                            >> 4U)))) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                >> 0x0000000eU)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (0x0001ffffU 
                                                              & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                  << 8U) 
                                                                 | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                    >> 0x00000018U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3014[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    } else {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    }
    if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg) {
        vlSelfRef.pooling_out_pvld = ((0x0000000fU 
                                       == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)) 
                                      & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
        vlSelfRef.__PVT__data_buf0[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))));
        vlSelfRef.__PVT__data_buf0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf0[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf1[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))));
        vlSelfRef.__PVT__data_buf1[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf1[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf2[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))));
        vlSelfRef.__PVT__data_buf2[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf2[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf3[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))));
        vlSelfRef.__PVT__data_buf3[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf3[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                   >> 0x00000011U))));
    } else {
        vlSelfRef.pooling_out_pvld = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid;
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__latch_result0_d3[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__latch_result0_d3[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__latch_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__latch_result1_d3[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__latch_result1_d3[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__latch_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__latch_result2_d3[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__latch_result2_d3[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__latch_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__latch_result3_d3[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__latch_result3_d3[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__latch_result3_d3[2U];
        }
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf3[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf3[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf3[2U];
        } else {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf2[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf2[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf2[2U];
        }
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf1[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf1[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf1[2U];
    } else {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf0[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf0[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf0[2U];
    }
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__1(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pooling_din_last = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__2__KET__) 
                                  & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_60) 
                                      & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_cnt_pooling))) 
                                     | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__strip_width_end)));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__2(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pooling_out_prdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_17) 
                                  & (IData)(((0xf8U 
                                              == (0xf8U 
                                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_pvld))) 
                                             & (3U 
                                                == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_44)))));
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.pooling_out_pvld)) 
                                          | (IData)(vlSelfRef.pooling_out_prdy)));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_out_prdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg) 
           & ((IData)(vlSelfRef.__PVT__add_out_rdy) 
              & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)));
    vlSelfRef.__PVT__pipe_in_rdy_d3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                             | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__add_out_rdy) 
                                                 & (0x0000000fU 
                                                    == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)))
                                                 : (IData)(vlSelfRef.__PVT__add_out_rdy))));
    vlSelfRef.__PVT__pipe_in_rdy_d2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                             | (IData)(vlSelfRef.__PVT__pipe_in_rdy_d3)));
    vlSelfRef.__PVT__pipe_in_rdy_d1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                             | (IData)(vlSelfRef.__PVT__pipe_in_rdy_d2)));
    vlSelfRef.__PVT__pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                          | (IData)(vlSelfRef.__PVT__pipe_in_rdy_d1)));
    vlSelfRef.pdma2pdp_prdy = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)
                                ? ((IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy) 
                                   & (IData)(vlSelfRef.__PVT__pipe_in_rdy))
                                : (IData)(vlSelfRef.__PVT__pipe_in_rdy));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__3(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_pooling_fun__26__reg2dp_int8_en;
    __Vfunc_pooling_fun__26__reg2dp_int8_en = 0;
    CData/*0:0*/ __Vfunc_pooling_fun__26__reg2dp_int16_en;
    __Vfunc_pooling_fun__26__reg2dp_int16_en = 0;
    CData/*0:0*/ __Vfunc_pooling_fun__26__reg2dp_fp16_en;
    __Vfunc_pooling_fun__26__reg2dp_fp16_en = 0;
    CData/*1:0*/ __Vfunc_pooling_fun__26__pooling_type;
    __Vfunc_pooling_fun__26__pooling_type = 0;
    VlWide<3>/*87:0*/ __Vfunc_pooling_fun__26__data0_in;
    VL_ZERO_W(88, __Vfunc_pooling_fun__26__data0_in);
    VlWide<3>/*87:0*/ __Vfunc_pooling_fun__26__data1_in;
    VL_ZERO_W(88, __Vfunc_pooling_fun__26__data1_in);
    // Body
    vlSelfRef.pdma2pdp_pvld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_15) 
                               & (IData)(((0xf8U == 
                                           (0xf8U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_prdy))) 
                                          & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_38)))));
    vlSelfRef.__PVT__pipe_in_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)
                                     ? ((IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy) 
                                        & (IData)(vlSelfRef.pdma2pdp_pvld))
                                     : (IData)(vlSelfRef.pdma2pdp_pvld));
    vlSelfRef.__PVT__load_din = ((IData)(vlSelfRef.pdma2pdp_pvld) 
                                 & ((IData)(vlSelfRef.pdma2pdp_prdy) 
                                    & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable)) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__2__KET__))));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld 
        = ((IData)(vlSelfRef.pdma2pdp_pvld) & ((IData)(vlSelfRef.__PVT__pipe_in_rdy) 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)));
    vlSelfRef.__PVT__pool_fun_vld = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)) 
                                     & (IData)(vlSelfRef.__PVT__load_din));
    if (vlSelfRef.__PVT__pool_fun_vld) {
        __Vfunc_pooling_fun__26__data1_in[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[0U];
        __Vfunc_pooling_fun__26__data1_in[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[1U];
        __Vfunc_pooling_fun__26__data1_in[2U] = (0x00ffffffU 
                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U]);
        __Vfunc_pooling_fun__26__data0_in[0U] = vlSelfRef.__PVT__fp_cur_pooling_dat[0U];
        __Vfunc_pooling_fun__26__data0_in[1U] = vlSelfRef.__PVT__fp_cur_pooling_dat[1U];
        __Vfunc_pooling_fun__26__data0_in[2U] = vlSelfRef.__PVT__fp_cur_pooling_dat[2U];
    } else {
        __Vfunc_pooling_fun__26__data1_in[0U] = 0U;
        __Vfunc_pooling_fun__26__data1_in[1U] = 0U;
        __Vfunc_pooling_fun__26__data1_in[2U] = 0U;
        __Vfunc_pooling_fun__26__data0_in[0U] = 0U;
        __Vfunc_pooling_fun__26__data0_in[1U] = 0U;
        __Vfunc_pooling_fun__26__data0_in[2U] = 0U;
    }
    __Vfunc_pooling_fun__26__pooling_type = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    __Vfunc_pooling_fun__26__reg2dp_fp16_en = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_fp16_en;
    __Vfunc_pooling_fun__26__reg2dp_int16_en = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_int16_en;
    __Vfunc_pooling_fun__26__reg2dp_int8_en = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_int8_en;
    vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling 
        = (2U == (IData)(__Vfunc_pooling_fun__26__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling 
        = (1U == (IData)(__Vfunc_pooling_fun__26__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling 
        = (0U == (IData)(__Vfunc_pooling_fun__26__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((0x0eU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | (IData)(((0x00007c00U == (0x00007c00U 
                                       & __Vfunc_pooling_fun__26__data0_in[0U])) 
                      & (0U != (0x000003ffU & __Vfunc_pooling_fun__26__data0_in[0U])))));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((0x0eU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | (IData)(((0x00007c00U == (0x00007c00U 
                                       & __Vfunc_pooling_fun__26__data1_in[0U])) 
                      & (0U != (0x000003ffU & __Vfunc_pooling_fun__26__data1_in[0U])))));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((0x0dU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | (((0x0000001fU == (0x0000001fU & __Vfunc_pooling_fun__26__data0_in[1U])) 
               & (0U != (__Vfunc_pooling_fun__26__data0_in[0U] 
                         >> 0x00000016U))) << 1U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((0x0dU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | (((0x0000001fU == (0x0000001fU & __Vfunc_pooling_fun__26__data1_in[1U])) 
               & (0U != (__Vfunc_pooling_fun__26__data1_in[0U] 
                         >> 0x00000016U))) << 1U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((0x0bU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | ((IData)(((0x07c00000U == (0x07c00000U 
                                        & __Vfunc_pooling_fun__26__data0_in[1U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__26__data0_in[1U] 
                                                >> 0x0000000cU))))) 
              << 2U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((0x0bU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | ((IData)(((0x07c00000U == (0x07c00000U 
                                        & __Vfunc_pooling_fun__26__data1_in[1U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__26__data1_in[1U] 
                                                >> 0x0000000cU))))) 
              << 2U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((7U & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | ((IData)(((0x0001f000U == (0x0001f000U 
                                        & __Vfunc_pooling_fun__26__data0_in[2U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__26__data0_in[2U] 
                                                >> 2U))))) 
              << 3U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((7U & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | ((IData)(((0x0001f000U == (0x0001f000U 
                                        & __Vfunc_pooling_fun__26__data1_in[2U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__26__data1_in[2U] 
                                                >> 2U))))) 
              << 3U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in = 
        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan) 
         | (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan));
    VL_ASSIGNSEL_WI(88, 22, 0U, vlSelfRef.__Vfunc_pooling_fun__26__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__27__data1 
                                = (0x003fffffU & __Vfunc_pooling_fun__26__data1_in[0U]);
                            vlSelfRef.__Vfunc_pooling_SUM__27__data0 
                                = (0x003fffffU & __Vfunc_pooling_fun__26__data0_in[0U]);
                            vlSelfRef.__Vfunc_pooling_SUM__27__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__26__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__27__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__26__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__27__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__27__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__27__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__27__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__27__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__27__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__27__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__27__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__27__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__27__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__27__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__27__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff 
                                = (0x003fffffU & (vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                                  + vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff;
                            vlSelfRef.__Vfunc_pooling_SUM__27__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__27__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__27__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en)) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in)) 
                                                      & (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__28__data1 
                                        = (0x003fffffU 
                                           & __Vfunc_pooling_fun__26__data1_in[0U]);
                                    vlSelfRef.__Vfunc_pooling_MIN__28__data0 
                                        = (0x003fffffU 
                                           & __Vfunc_pooling_fun__26__data0_in[0U]);
                                    vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__26__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__26__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__26__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__28__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__28__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__28__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__28__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__28__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__28__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__28__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__28__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff 
                                        = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0
                                            : vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16 
                                        = ((1U & ((~ 
                                                   (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                    >> 0x0fU)) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                      >> 0x0fU))))
                                            ? (((0x00007fffU 
                                                 & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                > (0x00007fffU 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1
                                                : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0)
                                            : ((0x00008000U 
                                                & (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)
                                                : (
                                                   (1U 
                                                    & ((vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                        >> 0x0fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                           >> 0x0fU))))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)));
                                    vlSelfRef.__Vfunc_pooling_MIN__28__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__28__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__28__Vfuncout))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & __Vfunc_pooling_fun__26__data0_in[0U])
                                                 : 
                                                (0x003fffffU 
                                                 & __Vfunc_pooling_fun__26__data1_in[0U])))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in)) 
                                                       & (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__29__data1 
                                            = (0x003fffffU 
                                               & __Vfunc_pooling_fun__26__data1_in[0U]);
                                        vlSelfRef.__Vfunc_pooling_MAX__29__data0 
                                            = (0x003fffffU 
                                               & __Vfunc_pooling_fun__26__data0_in[0U]);
                                        vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__26__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__26__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__26__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__29__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__29__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__29__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__29__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__29__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__29__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__29__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__29__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff 
                                            = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0
                                                : vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16 
                                            = ((1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                     >> 0x0fU)) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                       >> 0x0fU))))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1)
                                                : (
                                                   (0x00008000U 
                                                    & (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                       & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? 
                                                   (((0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                     > 
                                                     (0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                         >> 0x0fU) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                            >> 0x0fU))))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)));
                                        vlSelfRef.__Vfunc_pooling_MAX__29__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__29__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__29__Vfuncout))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & __Vfunc_pooling_fun__26__data0_in[0U])
                                                  : 
                                                 (0x003fffffU 
                                                  & __Vfunc_pooling_fun__26__data1_in[0U])))
                                             : 0U)))));
    VL_ASSIGNSEL_WI(88, 22, 0x16U, vlSelfRef.__Vfunc_pooling_fun__26__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__30__data1 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__26__data1_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__26__data1_in[0U] 
                                                     >> 0x00000016U)));
                            vlSelfRef.__Vfunc_pooling_SUM__30__data0 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__26__data0_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__26__data0_in[0U] 
                                                     >> 0x00000016U)));
                            vlSelfRef.__Vfunc_pooling_SUM__30__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__26__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__30__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__26__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__30__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__30__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__30__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__30__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__30__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__30__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__30__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__30__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__30__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__30__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__30__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__30__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff 
                                = (0x003fffffU & (vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                                  + vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff;
                            vlSelfRef.__Vfunc_pooling_SUM__30__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__30__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__30__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                        >> 1U)) 
                                                      & (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__31__data1 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__26__data1_in[1U] 
                                               << 0x0000000aU) 
                                              | (__Vfunc_pooling_fun__26__data1_in[0U] 
                                                 >> 0x00000016U)));
                                    vlSelfRef.__Vfunc_pooling_MIN__31__data0 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__26__data0_in[1U] 
                                               << 0x0000000aU) 
                                              | (__Vfunc_pooling_fun__26__data0_in[0U] 
                                                 >> 0x00000016U)));
                                    vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__26__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__26__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__26__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__31__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__31__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__31__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__31__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__31__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__31__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__31__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__31__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff 
                                        = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0
                                            : vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16 
                                        = ((1U & ((~ 
                                                   (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                    >> 0x0fU)) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                      >> 0x0fU))))
                                            ? (((0x00007fffU 
                                                 & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                > (0x00007fffU 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1
                                                : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0)
                                            : ((0x00008000U 
                                                & (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)
                                                : (
                                                   (1U 
                                                    & ((vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                        >> 0x0fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                           >> 0x0fU))))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)));
                                    vlSelfRef.__Vfunc_pooling_MIN__31__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__31__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__31__Vfuncout))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__26__data0_in[1U] 
                                                     << 0x0000000aU) 
                                                    | (__Vfunc_pooling_fun__26__data0_in[0U] 
                                                       >> 0x00000016U)))
                                                 : 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__26__data1_in[1U] 
                                                     << 0x0000000aU) 
                                                    | (__Vfunc_pooling_fun__26__data1_in[0U] 
                                                       >> 0x00000016U)))))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en)) 
                                                    | ((~ 
                                                        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                         >> 1U)) 
                                                       & (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__32__data1 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__26__data1_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__26__data1_in[0U] 
                                                     >> 0x00000016U)));
                                        vlSelfRef.__Vfunc_pooling_MAX__32__data0 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__26__data0_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__26__data0_in[0U] 
                                                     >> 0x00000016U)));
                                        vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__26__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__26__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__26__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__32__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__32__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__32__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__32__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__32__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__32__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__32__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__32__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff 
                                            = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0
                                                : vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16 
                                            = ((1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                     >> 0x0fU)) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                       >> 0x0fU))))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1)
                                                : (
                                                   (0x00008000U 
                                                    & (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                       & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? 
                                                   (((0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                     > 
                                                     (0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                         >> 0x0fU) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                            >> 0x0fU))))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)));
                                        vlSelfRef.__Vfunc_pooling_MAX__32__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__32__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__32__Vfuncout))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__26__data0_in[1U] 
                                                      << 0x0000000aU) 
                                                     | (__Vfunc_pooling_fun__26__data0_in[0U] 
                                                        >> 0x00000016U)))
                                                  : 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__26__data1_in[1U] 
                                                      << 0x0000000aU) 
                                                     | (__Vfunc_pooling_fun__26__data1_in[0U] 
                                                        >> 0x00000016U)))))
                                             : 0U)))));
    VL_ASSIGNSEL_WI(88, 22, 0x2cU, vlSelfRef.__Vfunc_pooling_fun__26__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__33__data1 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__26__data1_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__26__data1_in[1U] 
                                                     >> 0x0000000cU)));
                            vlSelfRef.__Vfunc_pooling_SUM__33__data0 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__26__data0_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__26__data0_in[1U] 
                                                     >> 0x0000000cU)));
                            vlSelfRef.__Vfunc_pooling_SUM__33__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__26__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__33__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__26__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__33__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__33__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__33__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__33__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__33__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__33__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__33__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__33__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__33__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__33__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__33__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__33__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff 
                                = (0x003fffffU & (vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                                  + vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff;
                            vlSelfRef.__Vfunc_pooling_SUM__33__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__33__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__33__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                        >> 2U)) 
                                                      & (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__34__data1 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__26__data1_in[2U] 
                                               << 0x00000014U) 
                                              | (__Vfunc_pooling_fun__26__data1_in[1U] 
                                                 >> 0x0000000cU)));
                                    vlSelfRef.__Vfunc_pooling_MIN__34__data0 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__26__data0_in[2U] 
                                               << 0x00000014U) 
                                              | (__Vfunc_pooling_fun__26__data0_in[1U] 
                                                 >> 0x0000000cU)));
                                    vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__26__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__26__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__26__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__34__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__34__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__34__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__34__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__34__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__34__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__34__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__34__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff 
                                        = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0
                                            : vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16 
                                        = ((1U & ((~ 
                                                   (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                    >> 0x0fU)) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                      >> 0x0fU))))
                                            ? (((0x00007fffU 
                                                 & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                > (0x00007fffU 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1
                                                : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0)
                                            : ((0x00008000U 
                                                & (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)
                                                : (
                                                   (1U 
                                                    & ((vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                        >> 0x0fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                           >> 0x0fU))))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)));
                                    vlSelfRef.__Vfunc_pooling_MIN__34__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__34__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__34__Vfuncout))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__26__data0_in[2U] 
                                                     << 0x00000014U) 
                                                    | (__Vfunc_pooling_fun__26__data0_in[1U] 
                                                       >> 0x0000000cU)))
                                                 : 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__26__data1_in[2U] 
                                                     << 0x00000014U) 
                                                    | (__Vfunc_pooling_fun__26__data1_in[1U] 
                                                       >> 0x0000000cU)))))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en)) 
                                                    | ((~ 
                                                        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                         >> 2U)) 
                                                       & (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__35__data1 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__26__data1_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__26__data1_in[1U] 
                                                     >> 0x0000000cU)));
                                        vlSelfRef.__Vfunc_pooling_MAX__35__data0 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__26__data0_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__26__data0_in[1U] 
                                                     >> 0x0000000cU)));
                                        vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__26__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__26__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__26__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__35__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__35__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__35__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__35__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__35__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__35__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__35__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__35__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff 
                                            = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0
                                                : vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16 
                                            = ((1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                     >> 0x0fU)) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                       >> 0x0fU))))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1)
                                                : (
                                                   (0x00008000U 
                                                    & (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                       & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? 
                                                   (((0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                     > 
                                                     (0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                         >> 0x0fU) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                            >> 0x0fU))))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)));
                                        vlSelfRef.__Vfunc_pooling_MAX__35__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__35__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__35__Vfuncout))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__26__data0_in[2U] 
                                                      << 0x00000014U) 
                                                     | (__Vfunc_pooling_fun__26__data0_in[1U] 
                                                        >> 0x0000000cU)))
                                                  : 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__26__data1_in[2U] 
                                                      << 0x00000014U) 
                                                     | (__Vfunc_pooling_fun__26__data1_in[1U] 
                                                        >> 0x0000000cU)))))
                                             : 0U)))));
    VL_ASSIGNSEL_WI(88, 22, 0x42U, vlSelfRef.__Vfunc_pooling_fun__26__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__36__data1 
                                = (0x003fffffU & (__Vfunc_pooling_fun__26__data1_in[2U] 
                                                  >> 2U));
                            vlSelfRef.__Vfunc_pooling_SUM__36__data0 
                                = (0x003fffffU & (__Vfunc_pooling_fun__26__data0_in[2U] 
                                                  >> 2U));
                            vlSelfRef.__Vfunc_pooling_SUM__36__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__26__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__36__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__26__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__36__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__36__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__36__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__36__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__36__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__36__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__36__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__36__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__36__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__36__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__36__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__36__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff 
                                = (0x000007ffU & ((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb) 
                                                  + (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb)));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff 
                                = (0x003fffffU & (vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                                  + vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb_ff;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int 
                                = vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int_ff;
                            vlSelfRef.__Vfunc_pooling_SUM__36__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__36__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__36__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                        >> 3U)) 
                                                      & (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__37__data1 
                                        = (0x003fffffU 
                                           & (__Vfunc_pooling_fun__26__data1_in[2U] 
                                              >> 2U));
                                    vlSelfRef.__Vfunc_pooling_MIN__37__data0 
                                        = (0x003fffffU 
                                           & (__Vfunc_pooling_fun__26__data0_in[2U] 
                                              >> 2U));
                                    vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__26__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__26__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__26__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__37__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__37__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__37__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__37__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__37__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__37__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__37__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__37__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff 
                                        = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb), (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff 
                                        = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1, vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb_ff)
                                            ? (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb)
                                            : (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int 
                                        = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int_ff)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0
                                            : vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16 
                                        = ((1U & ((~ 
                                                   (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                    >> 0x0fU)) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                      >> 0x0fU))))
                                            ? (((0x00007fffU 
                                                 & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                > (0x00007fffU 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1
                                                : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0)
                                            : ((0x00008000U 
                                                & (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                   & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)
                                                : (
                                                   (1U 
                                                    & ((vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                                        >> 0x0fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                                           >> 0x0fU))))
                                                    ? vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1)));
                                    vlSelfRef.__Vfunc_pooling_MIN__37__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__37__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__37__Vfuncout))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & (__Vfunc_pooling_fun__26__data0_in[2U] 
                                                    >> 2U))
                                                 : 
                                                (0x003fffffU 
                                                 & (__Vfunc_pooling_fun__26__data1_in[2U] 
                                                    >> 2U))))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en)) 
                                                    | ((~ 
                                                        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                         >> 3U)) 
                                                       & (IData)(__Vfunc_pooling_fun__26__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__38__data1 
                                            = (0x003fffffU 
                                               & (__Vfunc_pooling_fun__26__data1_in[2U] 
                                                  >> 2U));
                                        vlSelfRef.__Vfunc_pooling_MAX__38__data0 
                                            = (0x003fffffU 
                                               & (__Vfunc_pooling_fun__26__data0_in[2U] 
                                                  >> 2U));
                                        vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__26__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__26__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__26__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__38__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__38__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__38__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__38__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__38__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__38__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__38__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__38__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff 
                                            = VL_GTS_III(11, (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb), (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff 
                                            = VL_GTS_III(22, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0, vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb_ff)
                                                ? (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb)
                                                : (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int 
                                            = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int_ff)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0
                                                : vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16 
                                            = ((1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                     >> 0x0fU)) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                       >> 0x0fU))))
                                                ? (
                                                   ((0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                    > 
                                                    (0x00007fffU 
                                                     & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0
                                                    : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1)
                                                : (
                                                   (0x00008000U 
                                                    & (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                       & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                    ? 
                                                   (((0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0) 
                                                     > 
                                                     (0x00007fffU 
                                                      & vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                                         >> 0x0fU) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                                            >> 0x0fU))))
                                                     ? vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1
                                                     : vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0)));
                                        vlSelfRef.__Vfunc_pooling_MAX__38__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__38__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__38__Vfuncout))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & (__Vfunc_pooling_fun__26__data0_in[2U] 
                                                     >> 2U))
                                                  : 
                                                 (0x003fffffU 
                                                  & (__Vfunc_pooling_fun__26__data1_in[2U] 
                                                     >> 2U))))
                                             : 0U)))));
    vlSelfRef.__PVT__int_pooling[0U] = vlSelfRef.__Vfunc_pooling_fun__26__Vfuncout[0U];
    vlSelfRef.__PVT__int_pooling[1U] = vlSelfRef.__Vfunc_pooling_fun__26__Vfuncout[1U];
    vlSelfRef.__PVT__int_pooling[2U] = vlSelfRef.__Vfunc_pooling_fun__26__Vfuncout[2U];
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<6>/*184:0*/ __Vdly__pipe_p2__DOT__p2_pipe_data;
    VL_ZERO_W(185, __Vdly__pipe_p2__DOT__p2_pipe_data);
    VlWide<6>/*184:0*/ __Vdly__pipe_p3__DOT__p3_pipe_data;
    VL_ZERO_W(185, __Vdly__pipe_p3__DOT__p3_pipe_data);
    VlWide<6>/*191:0*/ __Vtemp_2;
    // Body
    __Vdly__pipe_p2__DOT__p2_pipe_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
    __Vdly__pipe_p2__DOT__p2_pipe_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[0U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[2U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[3U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[4U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U];
    __Vdly__pipe_p3__DOT__p3_pipe_data[5U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U];
    vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U] 
        = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U];
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy_d1) & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))) {
        __Vdly__pipe_p2__DOT__p2_pipe_data[0U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
    } else {
        __Vdly__pipe_p2__DOT__p2_pipe_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        __Vdly__pipe_p2__DOT__p2_pipe_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    }
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy) & (IData)(vlSelfRef.__PVT__pipe_in_vld))) {
        __Vtemp_2[1U] = vlSelfRef.__PVT__int_pooling[1U];
        __Vtemp_2[2U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[0U] 
                          << 0x00000018U) | vlSelfRef.__PVT__int_pooling[2U]);
        __Vtemp_2[3U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[0U] 
                          >> 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[1U] 
                                    << 0x00000018U));
        __Vtemp_2[4U] = ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[1U] 
                          >> 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U] 
                                    << 0x00000018U));
        __Vtemp_2[5U] = ((((((IData)(vlSelfRef.pooling_din_last) 
                             << 8U) | (((IData)(vlSelfRef.__PVT__pooling_size) 
                                        << 5U) | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                  << 4U))) 
                           | ((0x0000000cU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U] 
                                              >> 0x0000001aU)) 
                              | ((2U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[3U] 
                                        >> 3U)) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_3)))) 
                          << 0x00000010U) | (0x0000ffffU 
                                             & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U] 
                                                >> 8U)));
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__int_pooling[0U];
    } else {
        __Vtemp_2[1U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        __Vtemp_2[3U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        __Vtemp_2[4U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        __Vtemp_2[5U] = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U] 
        = __Vtemp_2[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U] 
        = __Vtemp_2[5U];
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy_d2) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) {
        __Vdly__pipe_p3__DOT__p3_pipe_data[0U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[1U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[2U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[3U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[4U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[5U] = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U];
    } else {
        __Vdly__pipe_p3__DOT__p3_pipe_data[0U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[1U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[2U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[3U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[4U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U];
        __Vdly__pipe_p3__DOT__p3_pipe_data[5U] = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U];
    }
    if (((IData)(vlSelfRef.__PVT__pipe_in_rdy_d3) & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))) {
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U];
    } else {
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U];
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[0U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[1U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[2U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[3U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[4U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data[5U] 
        = __Vdly__pipe_p2__DOT__p2_pipe_data[5U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[0U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[1U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[2U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[3U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[4U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data[5U] 
        = __Vdly__pipe_p3__DOT__p3_pipe_data[5U];
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__3(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
        = vlSelfRef.__Vdly__pipe_p4__DOT__p4_pipe_data[5U];
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        vlSelfRef.__PVT__pooling_result[0U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[1U] = ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                  >> 0x00000018U));
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                     >> 0x00000018U)));
    } else {
        vlSelfRef.__PVT__pooling_result[0U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[0U];
        vlSelfRef.__PVT__pooling_result[1U] = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[1U];
        vlSelfRef.__PVT__pooling_result[2U] = (0x00ffffffU 
                                               & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U]);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[0U] 
        = (IData)((((QData)((IData)((0x0001ffffU & 
                                     (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                      >> 4U)))) << 0x00000022U) 
                   | (((QData)((IData)((0x0001ffffU 
                                        & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                           >> 0x0000000eU)))) 
                       << 0x00000011U) | (QData)((IData)(
                                                         (0x0001ffffU 
                                                          & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                >> 0x00000018U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U]) 
           | (IData)(((((QData)((IData)((0x0001ffffU 
                                         & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                            >> 4U)))) 
                        << 0x00000022U) | (((QData)((IData)(
                                                            (0x0001ffffU 
                                                             & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                >> 0x0000000eU)))) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(
                                                             (0x0001ffffU 
                                                              & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[3U] 
                                                                  << 8U) 
                                                                 | (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[2U] 
                                                                    >> 0x00000018U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3022[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    } else {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum[2U];
        } else {
            vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__PVT__fp_pool_sum_result3_d3[2U];
        }
    }
    if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg) {
        vlSelfRef.pooling_out_pvld = ((0x0000000fU 
                                       == (IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)) 
                                      & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
        vlSelfRef.__PVT__data_buf0[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))));
        vlSelfRef.__PVT__data_buf0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result0[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf0[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf1[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))));
        vlSelfRef.__PVT__data_buf1[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result1[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result1[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf1[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf2[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))));
        vlSelfRef.__PVT__data_buf2[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result2[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result2[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf2[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                                                   >> 0x00000011U))));
        vlSelfRef.__PVT__data_buf3[0U] = (IData)((((QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                       >> 2U)))) 
                                                   << 0x0000002cU) 
                                                  | (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000016U) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))));
        vlSelfRef.__PVT__data_buf3[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                        >> 2U)))) 
                                                    << 0x0000002cU) 
                                                   | (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.__PVT__fp_pool_sum_result3[0U] 
                                                                              >> 0x00000011U))))) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.__PVT__fp_pool_sum_result3[0U]))))) 
                                                  >> 0x00000020U));
        vlSelfRef.__PVT__data_buf3[2U] = (0x0007fffcU 
                                          & ((vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                                              << 0x0000000fU) 
                                             | (0x00007ffcU 
                                                & (vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                                                   >> 0x00000011U))));
    } else {
        vlSelfRef.pooling_out_pvld = vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid;
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf0[0U] = vlSelfRef.__PVT__latch_result0_d3[0U];
            vlSelfRef.__PVT__data_buf0[1U] = vlSelfRef.__PVT__latch_result0_d3[1U];
            vlSelfRef.__PVT__data_buf0[2U] = vlSelfRef.__PVT__latch_result0_d3[2U];
        }
        if ((1U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf1[0U] = vlSelfRef.__PVT__latch_result1_d3[0U];
            vlSelfRef.__PVT__data_buf1[1U] = vlSelfRef.__PVT__latch_result1_d3[1U];
            vlSelfRef.__PVT__data_buf1[2U] = vlSelfRef.__PVT__latch_result1_d3[2U];
        }
        if ((2U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf2[0U] = vlSelfRef.__PVT__latch_result2_d3[0U];
            vlSelfRef.__PVT__data_buf2[1U] = vlSelfRef.__PVT__latch_result2_d3[1U];
            vlSelfRef.__PVT__data_buf2[2U] = vlSelfRef.__PVT__latch_result2_d3[2U];
        }
        if ((3U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__pooling_result[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__pooling_result[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__pooling_result[2U];
        } else {
            vlSelfRef.__PVT__data_buf3[0U] = vlSelfRef.__PVT__latch_result3_d3[0U];
            vlSelfRef.__PVT__data_buf3[1U] = vlSelfRef.__PVT__latch_result3_d3[1U];
            vlSelfRef.__PVT__data_buf3[2U] = vlSelfRef.__PVT__latch_result3_d3[2U];
        }
    }
    if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf3[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf3[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf3[2U];
        } else {
            vlSelfRef.__PVT__fp_cur_pooling_dat[0U] 
                = vlSelfRef.__PVT__data_buf2[0U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[1U] 
                = vlSelfRef.__PVT__data_buf2[1U];
            vlSelfRef.__PVT__fp_cur_pooling_dat[2U] 
                = vlSelfRef.__PVT__data_buf2[2U];
        }
    } else if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p2_pipe_data[2U])) {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf1[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf1[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf1[2U];
    } else {
        vlSelfRef.__PVT__fp_cur_pooling_dat[0U] = vlSelfRef.__PVT__data_buf0[0U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[1U] = vlSelfRef.__PVT__data_buf0[1U];
        vlSelfRef.__PVT__fp_cur_pooling_dat[2U] = vlSelfRef.__PVT__data_buf0[2U];
    }
}

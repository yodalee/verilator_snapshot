// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__3(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__3\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[0U] 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U] 
        = ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U]) 
           | (0xfff80000U & ((vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                              << 0x00000019U) | (0x01f80000U 
                                                 & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[4U] 
                                                    >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[2U] 
        = (0x0000000fU & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 7U));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__0(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00010000U & vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U])) {
        if ((0U == (3U & (vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data[5U] 
                          >> 0x00000012U)))) {
            vlSelfRef.__PVT__fp_pool_sum_result0[0U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[0U];
            vlSelfRef.__PVT__fp_pool_sum_result0[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U];
            vlSelfRef.__PVT__fp_pool_sum_result0[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[2U];
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
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[0U];
            vlSelfRef.__PVT__fp_pool_sum_result1[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U];
            vlSelfRef.__PVT__fp_pool_sum_result1[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[2U];
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
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[0U];
            vlSelfRef.__PVT__fp_pool_sum_result2[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U];
            vlSelfRef.__PVT__fp_pool_sum_result2[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[2U];
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
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[0U];
            vlSelfRef.__PVT__fp_pool_sum_result3[1U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[1U];
            vlSelfRef.__PVT__fp_pool_sum_result3[2U] 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3054[2U];
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

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__1(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pooling_din_last = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__7__KET__) 
                                  & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_60) 
                                      & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_cnt_pooling))) 
                                     | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__strip_width_end)));
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__2(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pooling_out_prdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_17) 
                                  & (0x0000007fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_49)));
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

void Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__3(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_pooling_fun__91__reg2dp_int8_en;
    __Vfunc_pooling_fun__91__reg2dp_int8_en = 0;
    CData/*0:0*/ __Vfunc_pooling_fun__91__reg2dp_int16_en;
    __Vfunc_pooling_fun__91__reg2dp_int16_en = 0;
    CData/*0:0*/ __Vfunc_pooling_fun__91__reg2dp_fp16_en;
    __Vfunc_pooling_fun__91__reg2dp_fp16_en = 0;
    CData/*1:0*/ __Vfunc_pooling_fun__91__pooling_type;
    __Vfunc_pooling_fun__91__pooling_type = 0;
    VlWide<3>/*87:0*/ __Vfunc_pooling_fun__91__data0_in;
    VL_ZERO_W(88, __Vfunc_pooling_fun__91__data0_in);
    VlWide<3>/*87:0*/ __Vfunc_pooling_fun__91__data1_in;
    VL_ZERO_W(88, __Vfunc_pooling_fun__91__data1_in);
    // Body
    vlSelfRef.pdma2pdp_pvld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_15) 
                               & (0x0000007fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_43)));
    vlSelfRef.__PVT__pipe_in_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)
                                     ? ((IData)(vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_prdy) 
                                        & (IData)(vlSelfRef.pdma2pdp_pvld))
                                     : (IData)(vlSelfRef.pdma2pdp_pvld));
    vlSelfRef.__PVT__load_din = ((IData)(vlSelfRef.pdma2pdp_pvld) 
                                 & ((IData)(vlSelfRef.pdma2pdp_prdy) 
                                    & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable)) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__7__KET__))));
    vlSelfRef.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld 
        = ((IData)(vlSelfRef.pdma2pdp_pvld) & ((IData)(vlSelfRef.__PVT__pipe_in_rdy) 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)));
    vlSelfRef.__PVT__pool_fun_vld = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.__PVT__fp_mean_pool_cfg)) 
                                     & (IData)(vlSelfRef.__PVT__load_din));
    if (vlSelfRef.__PVT__pool_fun_vld) {
        __Vfunc_pooling_fun__91__data1_in[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p3_pipe_data[0U];
        __Vfunc_pooling_fun__91__data1_in[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p3_pipe_data[1U];
        __Vfunc_pooling_fun__91__data1_in[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p3_pipe_data[2U];
        __Vfunc_pooling_fun__91__data0_in[0U] = vlSelfRef.__PVT__fp_cur_pooling_dat[0U];
        __Vfunc_pooling_fun__91__data0_in[1U] = vlSelfRef.__PVT__fp_cur_pooling_dat[1U];
        __Vfunc_pooling_fun__91__data0_in[2U] = vlSelfRef.__PVT__fp_cur_pooling_dat[2U];
    } else {
        __Vfunc_pooling_fun__91__data1_in[0U] = 0U;
        __Vfunc_pooling_fun__91__data1_in[1U] = 0U;
        __Vfunc_pooling_fun__91__data1_in[2U] = 0U;
        __Vfunc_pooling_fun__91__data0_in[0U] = 0U;
        __Vfunc_pooling_fun__91__data0_in[1U] = 0U;
        __Vfunc_pooling_fun__91__data0_in[2U] = 0U;
    }
    __Vfunc_pooling_fun__91__pooling_type = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    __Vfunc_pooling_fun__91__reg2dp_fp16_en = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_fp16_en;
    __Vfunc_pooling_fun__91__reg2dp_int16_en = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_int16_en;
    __Vfunc_pooling_fun__91__reg2dp_int8_en = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_int8_en;
    vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling 
        = (2U == (IData)(__Vfunc_pooling_fun__91__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling 
        = (1U == (IData)(__Vfunc_pooling_fun__91__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling 
        = (0U == (IData)(__Vfunc_pooling_fun__91__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((0x0eU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | (IData)(((0x00007c00U == (0x00007c00U 
                                       & __Vfunc_pooling_fun__91__data0_in[0U])) 
                      & (0U != (0x000003ffU & __Vfunc_pooling_fun__91__data0_in[0U])))));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((0x0eU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | (IData)(((0x00007c00U == (0x00007c00U 
                                       & __Vfunc_pooling_fun__91__data1_in[0U])) 
                      & (0U != (0x000003ffU & __Vfunc_pooling_fun__91__data1_in[0U])))));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((0x0dU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | (((0x0000001fU == (0x0000001fU & __Vfunc_pooling_fun__91__data0_in[1U])) 
               & (0U != (__Vfunc_pooling_fun__91__data0_in[0U] 
                         >> 0x00000016U))) << 1U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((0x0dU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | (((0x0000001fU == (0x0000001fU & __Vfunc_pooling_fun__91__data1_in[1U])) 
               & (0U != (__Vfunc_pooling_fun__91__data1_in[0U] 
                         >> 0x00000016U))) << 1U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((0x0bU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | ((IData)(((0x07c00000U == (0x07c00000U 
                                        & __Vfunc_pooling_fun__91__data0_in[1U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__91__data0_in[1U] 
                                                >> 0x0000000cU))))) 
              << 2U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((0x0bU & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | ((IData)(((0x07c00000U == (0x07c00000U 
                                        & __Vfunc_pooling_fun__91__data1_in[1U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__91__data1_in[1U] 
                                                >> 0x0000000cU))))) 
              << 2U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan 
        = ((7U & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan)) 
           | ((IData)(((0x0001f000U == (0x0001f000U 
                                        & __Vfunc_pooling_fun__91__data0_in[2U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__91__data0_in[2U] 
                                                >> 2U))))) 
              << 3U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan 
        = ((7U & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan)) 
           | ((IData)(((0x0001f000U == (0x0001f000U 
                                        & __Vfunc_pooling_fun__91__data1_in[2U])) 
                       & (0U != (0x000003ffU & (__Vfunc_pooling_fun__91__data1_in[2U] 
                                                >> 2U))))) 
              << 3U));
    vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in = 
        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan) 
         | (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din1_is_nan));
    VL_ASSIGNSEL_WI(88, 22, 0U, vlSelfRef.__Vfunc_pooling_fun__91__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__92__data1 
                                = (0x003fffffU & __Vfunc_pooling_fun__91__data1_in[0U]);
                            vlSelfRef.__Vfunc_pooling_SUM__92__data0 
                                = (0x003fffffU & __Vfunc_pooling_fun__91__data0_in[0U]);
                            vlSelfRef.__Vfunc_pooling_SUM__92__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__91__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__92__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__91__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__92__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__92__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__92__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__92__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__92__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__92__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__92__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__92__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__92__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__92__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__92__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__92__data1)
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
                            vlSelfRef.__Vfunc_pooling_SUM__92__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__92__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__92__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en)) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in)) 
                                                      & (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__93__data1 
                                        = (0x003fffffU 
                                           & __Vfunc_pooling_fun__91__data1_in[0U]);
                                    vlSelfRef.__Vfunc_pooling_MIN__93__data0 
                                        = (0x003fffffU 
                                           & __Vfunc_pooling_fun__91__data0_in[0U]);
                                    vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__91__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__91__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__91__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__93__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__93__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__93__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__93__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__93__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__93__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__93__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__93__data1)
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
                                    vlSelfRef.__Vfunc_pooling_MIN__93__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__93__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__93__Vfuncout))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & __Vfunc_pooling_fun__91__data0_in[0U])
                                                 : 
                                                (0x003fffffU 
                                                 & __Vfunc_pooling_fun__91__data1_in[0U])))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in)) 
                                                       & (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__94__data1 
                                            = (0x003fffffU 
                                               & __Vfunc_pooling_fun__91__data1_in[0U]);
                                        vlSelfRef.__Vfunc_pooling_MAX__94__data0 
                                            = (0x003fffffU 
                                               & __Vfunc_pooling_fun__91__data0_in[0U]);
                                        vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__91__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__91__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__91__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__94__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__94__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__94__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__94__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__94__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__94__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__94__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__94__data1)
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
                                        vlSelfRef.__Vfunc_pooling_MAX__94__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__94__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__94__Vfuncout))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & __Vfunc_pooling_fun__91__data0_in[0U])
                                                  : 
                                                 (0x003fffffU 
                                                  & __Vfunc_pooling_fun__91__data1_in[0U])))
                                             : 0U)))));
    VL_ASSIGNSEL_WI(88, 22, 0x16U, vlSelfRef.__Vfunc_pooling_fun__91__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__95__data1 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__91__data1_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__91__data1_in[0U] 
                                                     >> 0x00000016U)));
                            vlSelfRef.__Vfunc_pooling_SUM__95__data0 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__91__data0_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__91__data0_in[0U] 
                                                     >> 0x00000016U)));
                            vlSelfRef.__Vfunc_pooling_SUM__95__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__91__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__95__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__91__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__95__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__95__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__95__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__95__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__95__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__95__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__95__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__95__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__95__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__95__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__95__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__95__data1)
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
                            vlSelfRef.__Vfunc_pooling_SUM__95__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__95__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__95__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                        >> 1U)) 
                                                      & (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__96__data1 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__91__data1_in[1U] 
                                               << 0x0000000aU) 
                                              | (__Vfunc_pooling_fun__91__data1_in[0U] 
                                                 >> 0x00000016U)));
                                    vlSelfRef.__Vfunc_pooling_MIN__96__data0 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__91__data0_in[1U] 
                                               << 0x0000000aU) 
                                              | (__Vfunc_pooling_fun__91__data0_in[0U] 
                                                 >> 0x00000016U)));
                                    vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__91__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__91__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__91__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__96__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__96__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__96__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__96__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__96__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__96__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__96__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__96__data1)
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
                                    vlSelfRef.__Vfunc_pooling_MIN__96__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__96__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__96__Vfuncout))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__91__data0_in[1U] 
                                                     << 0x0000000aU) 
                                                    | (__Vfunc_pooling_fun__91__data0_in[0U] 
                                                       >> 0x00000016U)))
                                                 : 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__91__data1_in[1U] 
                                                     << 0x0000000aU) 
                                                    | (__Vfunc_pooling_fun__91__data1_in[0U] 
                                                       >> 0x00000016U)))))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en)) 
                                                    | ((~ 
                                                        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                         >> 1U)) 
                                                       & (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__97__data1 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__91__data1_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__91__data1_in[0U] 
                                                     >> 0x00000016U)));
                                        vlSelfRef.__Vfunc_pooling_MAX__97__data0 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__91__data0_in[1U] 
                                                   << 0x0000000aU) 
                                                  | (__Vfunc_pooling_fun__91__data0_in[0U] 
                                                     >> 0x00000016U)));
                                        vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__91__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__91__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__91__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__97__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__97__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__97__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__97__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__97__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__97__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__97__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__97__data1)
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
                                        vlSelfRef.__Vfunc_pooling_MAX__97__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__97__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__97__Vfuncout))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__91__data0_in[1U] 
                                                      << 0x0000000aU) 
                                                     | (__Vfunc_pooling_fun__91__data0_in[0U] 
                                                        >> 0x00000016U)))
                                                  : 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__91__data1_in[1U] 
                                                      << 0x0000000aU) 
                                                     | (__Vfunc_pooling_fun__91__data1_in[0U] 
                                                        >> 0x00000016U)))))
                                             : 0U)))));
    VL_ASSIGNSEL_WI(88, 22, 0x2cU, vlSelfRef.__Vfunc_pooling_fun__91__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__98__data1 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__91__data1_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__91__data1_in[1U] 
                                                     >> 0x0000000cU)));
                            vlSelfRef.__Vfunc_pooling_SUM__98__data0 
                                = (0x003fffffU & ((
                                                   __Vfunc_pooling_fun__91__data0_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__91__data0_in[1U] 
                                                     >> 0x0000000cU)));
                            vlSelfRef.__Vfunc_pooling_SUM__98__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__91__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__98__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__91__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__98__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__98__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__98__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__98__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__98__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__98__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__98__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__98__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__98__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__98__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__98__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__98__data1)
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
                            vlSelfRef.__Vfunc_pooling_SUM__98__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__98__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__98__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                        >> 2U)) 
                                                      & (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__99__data1 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__91__data1_in[2U] 
                                               << 0x00000014U) 
                                              | (__Vfunc_pooling_fun__91__data1_in[1U] 
                                                 >> 0x0000000cU)));
                                    vlSelfRef.__Vfunc_pooling_MIN__99__data0 
                                        = (0x003fffffU 
                                           & ((__Vfunc_pooling_fun__91__data0_in[2U] 
                                               << 0x00000014U) 
                                              | (__Vfunc_pooling_fun__91__data0_in[1U] 
                                                 >> 0x0000000cU)));
                                    vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__91__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__91__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__91__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__99__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__99__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__99__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__99__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__99__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__99__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__99__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__99__data1)
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
                                    vlSelfRef.__Vfunc_pooling_MIN__99__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__99__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__99__Vfuncout))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__91__data0_in[2U] 
                                                     << 0x00000014U) 
                                                    | (__Vfunc_pooling_fun__91__data0_in[1U] 
                                                       >> 0x0000000cU)))
                                                 : 
                                                (0x003fffffU 
                                                 & ((__Vfunc_pooling_fun__91__data1_in[2U] 
                                                     << 0x00000014U) 
                                                    | (__Vfunc_pooling_fun__91__data1_in[1U] 
                                                       >> 0x0000000cU)))))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en)) 
                                                    | ((~ 
                                                        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                         >> 2U)) 
                                                       & (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__100__data1 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__91__data1_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__91__data1_in[1U] 
                                                     >> 0x0000000cU)));
                                        vlSelfRef.__Vfunc_pooling_MAX__100__data0 
                                            = (0x003fffffU 
                                               & ((__Vfunc_pooling_fun__91__data0_in[2U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_pooling_fun__91__data0_in[1U] 
                                                     >> 0x0000000cU)));
                                        vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__91__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__91__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__91__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__100__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__100__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__100__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__100__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__100__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__100__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__100__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__100__data1)
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
                                        vlSelfRef.__Vfunc_pooling_MAX__100__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__100__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__100__Vfuncout))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__91__data0_in[2U] 
                                                      << 0x00000014U) 
                                                     | (__Vfunc_pooling_fun__91__data0_in[1U] 
                                                        >> 0x0000000cU)))
                                                  : 
                                                 (0x003fffffU 
                                                  & ((__Vfunc_pooling_fun__91__data1_in[2U] 
                                                      << 0x00000014U) 
                                                     | (__Vfunc_pooling_fun__91__data1_in[1U] 
                                                        >> 0x0000000cU)))))
                                             : 0U)))));
    VL_ASSIGNSEL_WI(88, 22, 0x42U, vlSelfRef.__Vfunc_pooling_fun__91__Vfuncout, 
                    (0x003fffffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                     ? VL_EXTEND_II(32,22, 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_pooling_SUM__101__data1 
                                = (0x003fffffU & (__Vfunc_pooling_fun__91__data1_in[2U] 
                                                  >> 2U));
                            vlSelfRef.__Vfunc_pooling_SUM__101__data0 
                                = (0x003fffffU & (__Vfunc_pooling_fun__91__data0_in[2U] 
                                                  >> 2U));
                            vlSelfRef.__Vfunc_pooling_SUM__101__reg2dp_int16_en 
                                = __Vfunc_pooling_fun__91__reg2dp_int16_en;
                            vlSelfRef.__Vfunc_pooling_SUM__101__reg2dp_int8_en 
                                = __Vfunc_pooling_fun__91__reg2dp_int8_en;
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__101__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__101__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data0_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__101__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__101__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_msb 
                                = (0x000007ffU & (((IData)(vlSelfRef.__Vfunc_pooling_SUM__101__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_SUM__101__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__data1_lsb 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__101__reg2dp_int8_en)
                                    ? (0x000007ffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__101__data1)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data0 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__101__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__101__data0)
                                    : 0U);
                            vlSelfRef.__PVT__pooling_SUM__Vstatic__int16_data1 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__101__reg2dp_int16_en)
                                    ? (0x003fffffU 
                                       & vlSelfRef.__Vfunc_pooling_SUM__101__data1)
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
                            vlSelfRef.__Vfunc_pooling_SUM__101__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_pooling_SUM__101__reg2dp_int16_en)
                                    ? vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_16int
                                    : (((IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_msb) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSelfRef.__PVT__pooling_SUM__Vstatic__sum_8int_lsb)));
                        }(), vlSelfRef.__Vfunc_pooling_SUM__101__Vfuncout))
                                     : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                         ? ((1U & (
                                                   (~ (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                        >> 3U)) 
                                                      & (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en))))
                                             ? VL_EXTEND_II(32,22, 
                                                            ([&]() {
                                    vlSelfRef.__Vfunc_pooling_MIN__102__data1 
                                        = (0x003fffffU 
                                           & (__Vfunc_pooling_fun__91__data1_in[2U] 
                                              >> 2U));
                                    vlSelfRef.__Vfunc_pooling_MIN__102__data0 
                                        = (0x003fffffU 
                                           & (__Vfunc_pooling_fun__91__data0_in[2U] 
                                              >> 2U));
                                    vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_fp16_en 
                                        = __Vfunc_pooling_fun__91__reg2dp_fp16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_int16_en 
                                        = __Vfunc_pooling_fun__91__reg2dp_int16_en;
                                    vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_int8_en 
                                        = __Vfunc_pooling_fun__91__reg2dp_int8_en;
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__102__data0
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data0_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__102__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_msb 
                                        = (0x000007ffU 
                                           & (((IData)(vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_int8_en)
                                                ? vlSelfRef.__Vfunc_pooling_MIN__102__data1
                                                : 0U) 
                                              >> 0x0000000bU));
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__data1_lsb 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_int8_en)
                                            ? (0x000007ffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__102__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__102__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__int16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_int16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__102__data1)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data0 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__102__data0)
                                            : 0U);
                                    vlSelfRef.__PVT__pooling_MIN__Vstatic__fp16_data1 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_fp16_en)
                                            ? (0x003fffffU 
                                               & vlSelfRef.__Vfunc_pooling_MIN__102__data1)
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
                                    vlSelfRef.__Vfunc_pooling_MIN__102__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_fp16_en)
                                            ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_fp16
                                            : ((IData)(vlSelfRef.__Vfunc_pooling_MIN__102__reg2dp_int16_en)
                                                ? vlSelfRef.__PVT__pooling_MIN__Vstatic__min_16int
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_msb) 
                                                    << 0x0000000bU) 
                                                   | (IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_8int_lsb))));
                                }(), vlSelfRef.__Vfunc_pooling_MIN__102__Vfuncout))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                 ? 
                                                (0x003fffffU 
                                                 & (__Vfunc_pooling_fun__91__data0_in[2U] 
                                                    >> 2U))
                                                 : 
                                                (0x003fffffU 
                                                 & (__Vfunc_pooling_fun__91__data1_in[2U] 
                                                    >> 2U))))
                                         : ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                             ? ((1U 
                                                 & ((~ (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en)) 
                                                    | ((~ 
                                                        ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__nan_in) 
                                                         >> 3U)) 
                                                       & (IData)(__Vfunc_pooling_fun__91__reg2dp_fp16_en))))
                                                 ? 
                                                VL_EXTEND_II(32,22, 
                                                             ([&]() {
                                        vlSelfRef.__Vfunc_pooling_MAX__103__data1 
                                            = (0x003fffffU 
                                               & (__Vfunc_pooling_fun__91__data1_in[2U] 
                                                  >> 2U));
                                        vlSelfRef.__Vfunc_pooling_MAX__103__data0 
                                            = (0x003fffffU 
                                               & (__Vfunc_pooling_fun__91__data0_in[2U] 
                                                  >> 2U));
                                        vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_fp16_en 
                                            = __Vfunc_pooling_fun__91__reg2dp_fp16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_int16_en 
                                            = __Vfunc_pooling_fun__91__reg2dp_int16_en;
                                        vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_int8_en 
                                            = __Vfunc_pooling_fun__91__reg2dp_int8_en;
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__103__data0
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data0_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__103__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_msb 
                                            = (0x000007ffU 
                                               & (((IData)(vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_int8_en)
                                                    ? vlSelfRef.__Vfunc_pooling_MAX__103__data1
                                                    : 0U) 
                                                  >> 0x0000000bU));
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__data1_lsb 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_int8_en)
                                                ? (0x000007ffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__103__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__103__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__int16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_int16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__103__data1)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data0 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__103__data0)
                                                : 0U);
                                        vlSelfRef.__PVT__pooling_MAX__Vstatic__fp16_data1 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_fp16_en)
                                                ? (0x003fffffU 
                                                   & vlSelfRef.__Vfunc_pooling_MAX__103__data1)
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
                                        vlSelfRef.__Vfunc_pooling_MAX__103__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_fp16_en)
                                                ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_fp16
                                                : ((IData)(vlSelfRef.__Vfunc_pooling_MAX__103__reg2dp_int16_en)
                                                    ? vlSelfRef.__PVT__pooling_MAX__Vstatic__max_16int
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_msb) 
                                                     << 0x0000000bU) 
                                                    | (IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_8int_lsb))));
                                    }(), vlSelfRef.__Vfunc_pooling_MAX__103__Vfuncout))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__din0_is_nan))
                                                  ? 
                                                 (0x003fffffU 
                                                  & (__Vfunc_pooling_fun__91__data0_in[2U] 
                                                     >> 2U))
                                                  : 
                                                 (0x003fffffU 
                                                  & (__Vfunc_pooling_fun__91__data1_in[2U] 
                                                     >> 2U))))
                                             : 0U)))));
    vlSelfRef.__PVT__int_pooling[0U] = vlSelfRef.__Vfunc_pooling_fun__91__Vfuncout[0U];
    vlSelfRef.__PVT__int_pooling[1U] = vlSelfRef.__Vfunc_pooling_fun__91__Vfuncout[1U];
    vlSelfRef.__PVT__int_pooling[2U] = vlSelfRef.__Vfunc_pooling_fun__91__Vfuncout[2U];
}

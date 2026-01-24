// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__0(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__pipe_p1__DOT__p1_pipe_data;
    __Vdly__pipe_p1__DOT__p1_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p2__DOT__p2_pipe_data;
    __Vdly__pipe_p2__DOT__p2_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p3__DOT__p3_pipe_data;
    __Vdly__pipe_p3__DOT__p3_pipe_data = 0;
    VlWide<3>/*95:0*/ __Vdly__pipe_p6__DOT__p6_pipe_data;
    VL_ZERO_W(96, __Vdly__pipe_p6__DOT__p6_pipe_data);
    VlWide<3>/*95:0*/ __Vdly__pipe_p7__DOT__p7_pipe_data;
    VL_ZERO_W(96, __Vdly__pipe_p7__DOT__p7_pipe_data);
    QData/*63:0*/ __Vdly__pipe_p9__DOT__p9_pipe_data;
    __Vdly__pipe_p9__DOT__p9_pipe_data = 0;
    QData/*63:0*/ __Vdly__pipe_p10__DOT__p10_pipe_data;
    __Vdly__pipe_p10__DOT__p10_pipe_data = 0;
    QData/*63:0*/ __Vdly__pipe_p11__DOT__p11_pipe_data;
    __Vdly__pipe_p11__DOT__p11_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p13__DOT__p13_pipe_data;
    __Vdly__pipe_p13__DOT__p13_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p14__DOT__p14_pipe_data;
    __Vdly__pipe_p14__DOT__p14_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p15__DOT__p15_pipe_data;
    __Vdly__pipe_p15__DOT__p15_pipe_data = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    __Vdly__pipe_p1__DOT__p1_pipe_data = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data;
    __Vdly__pipe_p9__DOT__p9_pipe_data = vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data;
    __Vdly__pipe_p13__DOT__p13_pipe_data = vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data;
    __Vdly__pipe_p2__DOT__p2_pipe_data = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data;
    __Vdly__pipe_p6__DOT__p6_pipe_data[0U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U];
    __Vdly__pipe_p6__DOT__p6_pipe_data[1U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U];
    __Vdly__pipe_p6__DOT__p6_pipe_data[2U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U];
    __Vdly__pipe_p10__DOT__p10_pipe_data = vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data;
    __Vdly__pipe_p14__DOT__p14_pipe_data = vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data;
    __Vdly__pipe_p3__DOT__p3_pipe_data = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data;
    __Vdly__pipe_p7__DOT__p7_pipe_data[0U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U];
    __Vdly__pipe_p7__DOT__p7_pipe_data[1U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U];
    __Vdly__pipe_p7__DOT__p7_pipe_data[2U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U];
    __Vdly__pipe_p11__DOT__p11_pipe_data = vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data;
    __Vdly__pipe_p15__DOT__p15_pipe_data = vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data;
    __Vdly__pipe_p1__DOT__p1_pipe_data = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy) 
                                           & (IData)(vlSelfRef.__PVT__fp16_dout_4_in_vld))
                                           ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_1
                                           : vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data);
    __Vdly__pipe_p9__DOT__p9_pipe_data = (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy) 
                                           & (IData)(vlSelfRef.__PVT__stage2_pipe_in_vld))
                                           ? (((QData)((IData)(
                                                               vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[1U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U])))
                                           : vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data);
    __Vdly__pipe_p13__DOT__p13_pipe_data = (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy) 
                                             & (IData)(vlSelfRef.__PVT__stage3_pipe_in_vld))
                                             ? (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_data)
                                             : vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data);
    __Vdly__pipe_p2__DOT__p2_pipe_data = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1) 
                                           & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))
                                           ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
                                           : vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1) 
         & (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid))) {
        __Vdly__pipe_p6__DOT__p6_pipe_data[0U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[1U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[1U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[2U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[2U];
    } else {
        __Vdly__pipe_p6__DOT__p6_pipe_data[0U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[1U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[2U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U];
    }
    __Vdly__pipe_p10__DOT__p10_pipe_data = (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data
                                             : vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data);
    __Vdly__pipe_p14__DOT__p14_pipe_data = (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data
                                             : vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data);
    __Vdly__pipe_p3__DOT__p3_pipe_data = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2) 
                                           & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))
                                           ? vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data
                                           : vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2) 
         & (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid))) {
        __Vdly__pipe_p7__DOT__p7_pipe_data[0U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[1U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[2U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U];
    } else {
        __Vdly__pipe_p7__DOT__p7_pipe_data[0U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[1U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[2U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U];
    }
    __Vdly__pipe_p11__DOT__p11_pipe_data = (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data
                                             : vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data);
    __Vdly__pipe_p15__DOT__p15_pipe_data = (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data
                                             : vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data);
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3) 
         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid))) {
        __Vtemp_3[1U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U];
        __Vtemp_3[2U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U];
    } else {
        __Vtemp_3[1U] = vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[1U];
        __Vtemp_3[2U] = vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[2U] 
        = __Vtemp_3[2U];
    vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_data = 
        (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3) 
          & (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid))
          ? vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data
          : vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_data);
    vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_data = 
        (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3) 
          & (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid))
          ? vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data
          : vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy) 
         & (IData)(vlSelfRef.__PVT__stage1_pipe_in_vld))) {
        __Vtemp_5[1U] = (IData)((((QData)((IData)((
                                                   ((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                    << 0x0000001fU) 
                                                   | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                       << 0x00000017U) 
                                                      | vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0)))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                                      << 0x0000001fU) 
                                                                     | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                                         << 0x00000017U) 
                                                                        | vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0))))));
        __Vtemp_5[2U] = (IData)(((((QData)((IData)(
                                                   (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                     << 0x0000001fU) 
                                                    | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                        << 0x00000017U) 
                                                       | vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0)))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                      << 0x0000001fU) 
                                                     | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                         << 0x00000017U) 
                                                        | vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0))))) 
                                 >> 0x00000020U));
        vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U] 
            = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                    << 0x00000017U) 
                                   | vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    } else {
        __Vtemp_5[1U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[1U] 
        = __Vtemp_5[1U];
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[2U] 
        = __Vtemp_5[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data = __Vdly__pipe_p1__DOT__p1_pipe_data;
    vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data = __Vdly__pipe_p9__DOT__p9_pipe_data;
    vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data = __Vdly__pipe_p13__DOT__p13_pipe_data;
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data = __Vdly__pipe_p2__DOT__p2_pipe_data;
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U] 
        = __Vdly__pipe_p6__DOT__p6_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U] 
        = __Vdly__pipe_p6__DOT__p6_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U] 
        = __Vdly__pipe_p6__DOT__p6_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data = __Vdly__pipe_p10__DOT__p10_pipe_data;
    vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data = __Vdly__pipe_p14__DOT__p14_pipe_data;
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data = __Vdly__pipe_p3__DOT__p3_pipe_data;
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U] 
        = __Vdly__pipe_p7__DOT__p7_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U] 
        = __Vdly__pipe_p7__DOT__p7_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U] 
        = __Vdly__pipe_p7__DOT__p7_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data = __Vdly__pipe_p11__DOT__p11_pipe_data;
    vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data = __Vdly__pipe_p15__DOT__p15_pipe_data;
}

void Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__1(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__stage4_sum7_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage4_sum08_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum_3_5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum3 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum3_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum35_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                       & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum4_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum5 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum3_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum26_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum7 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum7_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum5_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum17_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__VdfgRegularize_h1b022894_0_16 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))));
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid))));
    vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid))));
    vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid))));
    vlSelfRef.__PVT__fp16_sum_stage3_rdy = ((IData)(vlSelfRef.__PVT__stage4_sum08_rdy) 
                                            & (IData)(vlSelfRef.__PVT__stage4_sum7_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_8 = ((IData)(vlSelfRef.__PVT__fp16_sum35_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_24 = ((IData)(vlSelfRef.__PVT__stage2_sum26_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_23 = ((IData)(vlSelfRef.__PVT__stage3_sum17_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_17 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_16));
    vlSelfRef.__VdfgRegularize_h1b022894_0_18 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_17));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid))));
    vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid))));
    vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid))));
    vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid))));
    vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_vld))));
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__stage1_pipe_in_vld))));
    vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__stage2_pipe_in_vld))));
    vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy)) 
                     | (IData)(vlSelfRef.__PVT__stage3_pipe_in_vld))));
}

void Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__2(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg2dp_normalz_len = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_consumer)
                                     ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_normalz_len)
                                     : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_normalz_len));
    vlSelfRef.__VdfgRegularize_h1b022894_0_13 = ((0U 
                                                  == (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                                 | (1U 
                                                    == (IData)(vlSelfRef.reg2dp_normalz_len)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_0 = ((2U 
                                                 == (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                                | (3U 
                                                   == (IData)(vlSelfRef.reg2dp_normalz_len)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2929 = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_13) 
                                                       | (2U 
                                                          == (IData)(vlSelfRef.reg2dp_normalz_len)))));
    vlSelfRef.__VdfgRegularize_h1b022894_0_28 = ((1U 
                                                  == (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_0));
}

void Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__0(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h1b022894_0_2;
    __VdfgRegularize_h1b022894_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h1b022894_0_27;
    __VdfgRegularize_h1b022894_0_27 = 0;
    // Body
    vlSelfRef.__PVT__fp16_sum_stage1_vld = ((0U != (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum3_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)));
    __VdfgRegularize_h1b022894_0_27 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
                                       | (0U == (IData)(vlSelfRef.reg2dp_normalz_len)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_4 = ((3U 
                                                 != (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                                | ((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid)) 
                                               | ((3U 
                                                   != (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage3_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum7_vld)))));
    vlSelfRef.__PVT__fp16_sum_stage2_vld = ((~ (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_13)) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum5_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid)));
    __VdfgRegularize_h1b022894_0_2 = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_0)) 
                                            | ((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                               & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt))));
    vlSelfRef.__PVT__fp16_sum_stage3_vld = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2929) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum7_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_12 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_11 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum26_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_25 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_4) 
                                                 & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_15 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_14 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum17_rdy));
    vlSelfRef.__PVT__stage2_pipe_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_0) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_11) 
                                              & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy)));
    vlSelfRef.__VdfgRegularize_h1b022894_1_0 = ((IData)(__VdfgRegularize_h1b022894_0_2) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_25));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage3_pipe_in_vld = ((3U == (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_14) 
                                              & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_26 = ((IData)(__VdfgRegularize_h1b022894_0_27) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_1_0));
    vlSelfRef.__PVT__stage3_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1)));
    vlSelfRef.__PVT__fp16_sum_stage0_vld = ((IData)(vlSelfRef.__PVT__fp16_sum_3_5_vld) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_26));
    vlSelfRef.__PVT__fp16_sum_stage2_rdy = ((3U == (IData)(vlSelfRef.reg2dp_normalz_len))
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_23) 
                                                & (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_23));
    vlSelfRef.__VdfgRegularize_h1b022894_0_9 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_vld) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_10 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_vld) 
                                                 & (IData)(vlSelfRef.__PVT__fp16_sum35_rdy));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid)) 
                                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_0)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum5_vld)))));
    vlSelfRef.__PVT__stage1_pipe_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_28) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_10) 
                                              & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1)));
    vlSelfRef.__PVT__fp16_sum_stage1_rdy = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_0)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_24) 
                                                & (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_24));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                               | ((0U 
                                                   == (IData)(vlSelfRef.reg2dp_normalz_len)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum3_vld)))));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage1_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1)));
    if ((0U == (IData)(vlSelfRef.reg2dp_normalz_len))) {
        vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum3;
        vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum3_vld;
        vlSelfRef.__PVT__fp16_sum_stage0_rdy = vlSelfRef.__VdfgRegularize_h1b022894_0_8;
    } else {
        if ((1U == (IData)(vlSelfRef.reg2dp_normalz_len))) {
            vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum5;
            vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum5_vld;
        } else if ((2U == (IData)(vlSelfRef.reg2dp_normalz_len))) {
            vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum7;
            vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum7_vld;
        } else {
            vlSelfRef.fp16_sum = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
            vlSelfRef.fp16_sum_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
        }
        vlSelfRef.__PVT__fp16_sum_stage0_rdy = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_8) 
                                                & (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy));
    }
    vlSelfRef.__VdfgRegularize_h1b022894_0_5 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum_3_5_vld));
    vlSelfRef.__VdfgRegularize_h1b022894_0_6 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_5) 
                                                & (IData)(__VdfgRegularize_h1b022894_0_27));
    vlSelfRef.__VdfgRegularize_h1b022894_0_7 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_6) 
                                                & (IData)(__VdfgRegularize_h1b022894_0_2));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_7) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_4))));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3)));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2)));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_19 = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18));
    vlSelfRef.__VdfgRegularize_h1b022894_0_20 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 5U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_19));
    vlSelfRef.__VdfgRegularize_h1b022894_0_21 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 6U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_20));
    vlSelfRef.__VdfgRegularize_h1b022894_0_22 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_21));
    vlSelfRef.__PVT__fp_sum_in_rdy = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_22));
}

void Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__1(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp_sq_out_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_vld) 
                               & ((0x000001ffU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__fp_sum_in_rdy)) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_35)));
    vlSelfRef.__PVT__fp16_dout_4_in_vld = ((IData)(vlSelfRef.fp_sq_out_vld) 
                                           & (0x0000000fU 
                                              == (((IData)(vlSelfRef.__PVT__fp_sum_in_rdy) 
                                                   >> 5U) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18))));
}

void Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__2(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp16_sum_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_rand_ready) 
                              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_12));
}

void Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__0(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__pipe_p1__DOT__p1_pipe_data;
    __Vdly__pipe_p1__DOT__p1_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p2__DOT__p2_pipe_data;
    __Vdly__pipe_p2__DOT__p2_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p3__DOT__p3_pipe_data;
    __Vdly__pipe_p3__DOT__p3_pipe_data = 0;
    VlWide<3>/*95:0*/ __Vdly__pipe_p6__DOT__p6_pipe_data;
    VL_ZERO_W(96, __Vdly__pipe_p6__DOT__p6_pipe_data);
    VlWide<3>/*95:0*/ __Vdly__pipe_p7__DOT__p7_pipe_data;
    VL_ZERO_W(96, __Vdly__pipe_p7__DOT__p7_pipe_data);
    QData/*63:0*/ __Vdly__pipe_p9__DOT__p9_pipe_data;
    __Vdly__pipe_p9__DOT__p9_pipe_data = 0;
    QData/*63:0*/ __Vdly__pipe_p10__DOT__p10_pipe_data;
    __Vdly__pipe_p10__DOT__p10_pipe_data = 0;
    QData/*63:0*/ __Vdly__pipe_p11__DOT__p11_pipe_data;
    __Vdly__pipe_p11__DOT__p11_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p13__DOT__p13_pipe_data;
    __Vdly__pipe_p13__DOT__p13_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p14__DOT__p14_pipe_data;
    __Vdly__pipe_p14__DOT__p14_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p15__DOT__p15_pipe_data;
    __Vdly__pipe_p15__DOT__p15_pipe_data = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    __Vdly__pipe_p1__DOT__p1_pipe_data = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data;
    __Vdly__pipe_p9__DOT__p9_pipe_data = vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data;
    __Vdly__pipe_p13__DOT__p13_pipe_data = vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data;
    __Vdly__pipe_p2__DOT__p2_pipe_data = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data;
    __Vdly__pipe_p6__DOT__p6_pipe_data[0U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U];
    __Vdly__pipe_p6__DOT__p6_pipe_data[1U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U];
    __Vdly__pipe_p6__DOT__p6_pipe_data[2U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U];
    __Vdly__pipe_p10__DOT__p10_pipe_data = vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data;
    __Vdly__pipe_p14__DOT__p14_pipe_data = vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data;
    __Vdly__pipe_p3__DOT__p3_pipe_data = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data;
    __Vdly__pipe_p7__DOT__p7_pipe_data[0U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U];
    __Vdly__pipe_p7__DOT__p7_pipe_data[1U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U];
    __Vdly__pipe_p7__DOT__p7_pipe_data[2U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U];
    __Vdly__pipe_p11__DOT__p11_pipe_data = vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data;
    __Vdly__pipe_p15__DOT__p15_pipe_data = vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data;
    __Vdly__pipe_p1__DOT__p1_pipe_data = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy) 
                                           & (IData)(vlSelfRef.__PVT__fp16_dout_4_in_vld))
                                           ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_2
                                           : vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data);
    __Vdly__pipe_p9__DOT__p9_pipe_data = (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy) 
                                           & (IData)(vlSelfRef.__PVT__stage2_pipe_in_vld))
                                           ? (((QData)((IData)(
                                                               vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[1U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U])))
                                           : vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data);
    __Vdly__pipe_p13__DOT__p13_pipe_data = (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy) 
                                             & (IData)(vlSelfRef.__PVT__stage3_pipe_in_vld))
                                             ? (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_data)
                                             : vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data);
    __Vdly__pipe_p2__DOT__p2_pipe_data = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1) 
                                           & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))
                                           ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
                                           : vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1) 
         & (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid))) {
        __Vdly__pipe_p6__DOT__p6_pipe_data[0U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[1U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[1U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[2U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[2U];
    } else {
        __Vdly__pipe_p6__DOT__p6_pipe_data[0U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[1U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[2U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U];
    }
    __Vdly__pipe_p10__DOT__p10_pipe_data = (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data
                                             : vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data);
    __Vdly__pipe_p14__DOT__p14_pipe_data = (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data
                                             : vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data);
    __Vdly__pipe_p3__DOT__p3_pipe_data = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2) 
                                           & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))
                                           ? vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data
                                           : vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2) 
         & (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid))) {
        __Vdly__pipe_p7__DOT__p7_pipe_data[0U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[1U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[2U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U];
    } else {
        __Vdly__pipe_p7__DOT__p7_pipe_data[0U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[1U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[2U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U];
    }
    __Vdly__pipe_p11__DOT__p11_pipe_data = (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data
                                             : vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data);
    __Vdly__pipe_p15__DOT__p15_pipe_data = (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data
                                             : vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data);
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3) 
         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid))) {
        __Vtemp_3[1U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U];
        __Vtemp_3[2U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U];
    } else {
        __Vtemp_3[1U] = vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[1U];
        __Vtemp_3[2U] = vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[2U] 
        = __Vtemp_3[2U];
    vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_data = 
        (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3) 
          & (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid))
          ? vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data
          : vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_data);
    vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_data = 
        (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3) 
          & (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid))
          ? vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data
          : vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy) 
         & (IData)(vlSelfRef.__PVT__stage1_pipe_in_vld))) {
        __Vtemp_5[1U] = (IData)((((QData)((IData)((
                                                   ((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                    << 0x0000001fU) 
                                                   | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                       << 0x00000017U) 
                                                      | vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0)))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                                      << 0x0000001fU) 
                                                                     | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                                         << 0x00000017U) 
                                                                        | vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0))))));
        __Vtemp_5[2U] = (IData)(((((QData)((IData)(
                                                   (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                     << 0x0000001fU) 
                                                    | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                        << 0x00000017U) 
                                                       | vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0)))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                      << 0x0000001fU) 
                                                     | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                         << 0x00000017U) 
                                                        | vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0))))) 
                                 >> 0x00000020U));
        vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U] 
            = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                    << 0x00000017U) 
                                   | vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    } else {
        __Vtemp_5[1U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[1U] 
        = __Vtemp_5[1U];
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[2U] 
        = __Vtemp_5[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data = __Vdly__pipe_p1__DOT__p1_pipe_data;
    vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data = __Vdly__pipe_p9__DOT__p9_pipe_data;
    vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data = __Vdly__pipe_p13__DOT__p13_pipe_data;
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data = __Vdly__pipe_p2__DOT__p2_pipe_data;
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U] 
        = __Vdly__pipe_p6__DOT__p6_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U] 
        = __Vdly__pipe_p6__DOT__p6_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U] 
        = __Vdly__pipe_p6__DOT__p6_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data = __Vdly__pipe_p10__DOT__p10_pipe_data;
    vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data = __Vdly__pipe_p14__DOT__p14_pipe_data;
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data = __Vdly__pipe_p3__DOT__p3_pipe_data;
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U] 
        = __Vdly__pipe_p7__DOT__p7_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U] 
        = __Vdly__pipe_p7__DOT__p7_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U] 
        = __Vdly__pipe_p7__DOT__p7_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data = __Vdly__pipe_p11__DOT__p11_pipe_data;
    vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data = __Vdly__pipe_p15__DOT__p15_pipe_data;
}

void Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__1(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__stage4_sum7_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage4_sum08_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum_3_5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum3 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum3_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum35_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                       & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum4_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum5 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum3_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum26_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum7 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum7_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum5_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum17_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__VdfgRegularize_h1b022894_0_16 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.fp16_dout_0 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))));
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid))));
    vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid))));
    vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid))));
    vlSelfRef.__PVT__fp16_sum_stage3_rdy = ((IData)(vlSelfRef.__PVT__stage4_sum08_rdy) 
                                            & (IData)(vlSelfRef.__PVT__stage4_sum7_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_8 = ((IData)(vlSelfRef.__PVT__fp16_sum35_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_24 = ((IData)(vlSelfRef.__PVT__stage2_sum26_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_23 = ((IData)(vlSelfRef.__PVT__stage3_sum17_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_17 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_16));
    vlSelfRef.__VdfgRegularize_h1b022894_0_18 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_17));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid))));
    vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid))));
    vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid))));
    vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid))));
    vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_vld))));
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__stage1_pipe_in_vld))));
    vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__stage2_pipe_in_vld))));
    vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy)) 
                     | (IData)(vlSelfRef.__PVT__stage3_pipe_in_vld))));
}

void Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__0(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h1b022894_0_2;
    __VdfgRegularize_h1b022894_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h1b022894_0_27;
    __VdfgRegularize_h1b022894_0_27 = 0;
    // Body
    vlSelfRef.__PVT__fp16_sum_stage1_vld = ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum3_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)));
    __VdfgRegularize_h1b022894_0_27 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
                                       | (0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_4 = ((3U 
                                                 != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                                | ((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid)) 
                                               | ((3U 
                                                   != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage3_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum7_vld)))));
    vlSelfRef.__PVT__fp16_sum_stage2_vld = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_13)) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum5_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid)));
    __VdfgRegularize_h1b022894_0_2 = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)) 
                                            | ((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                               & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt))));
    vlSelfRef.__PVT__fp16_sum_stage3_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h6e95ff9d_0_2929) 
                                            & ((IData)(vlSelfRef.__PVT__fp16_sum7_vld) 
                                               & (IData)(vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_12 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_11 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum26_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_25 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_4) 
                                                 & (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_15 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_14 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_vld) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum17_rdy));
    vlSelfRef.__PVT__stage2_pipe_in_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_11) 
                                              & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy)));
    vlSelfRef.__VdfgRegularize_h1b022894_1_0 = ((IData)(__VdfgRegularize_h1b022894_0_2) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_25));
    vlSelfRef.__PVT__stage3_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage3_pipe_in_vld = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_14) 
                                              & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_26 = ((IData)(__VdfgRegularize_h1b022894_0_27) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_1_0));
    vlSelfRef.__PVT__stage3_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1)));
    vlSelfRef.__PVT__fp16_sum_stage0_vld = ((IData)(vlSelfRef.__PVT__fp16_sum_3_5_vld) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_26));
    vlSelfRef.__PVT__fp16_sum_stage2_rdy = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_23) 
                                                & (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_23));
    vlSelfRef.__VdfgRegularize_h1b022894_0_9 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_vld) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_10 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_vld) 
                                                 & (IData)(vlSelfRef.__PVT__fp16_sum35_rdy));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid)) 
                                               | ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage2_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum5_vld)))));
    vlSelfRef.__PVT__stage1_pipe_in_vld = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_28) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_10) 
                                              & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage2_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1)));
    vlSelfRef.__PVT__fp16_sum_stage1_rdy = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_24) 
                                                & (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_24));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                               | ((0U 
                                                   == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
                                                  | ((IData)(vlSelfRef.__PVT__fp16_sum_stage1_rdy) 
                                                     & (IData)(vlSelfRef.__PVT__fp16_sum3_vld)))));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3)));
    vlSelfRef.__PVT__stage1_pipe_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2)));
    vlSelfRef.__PVT__stage1_pipe_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1)));
    if ((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))) {
        vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum3;
        vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum3_vld;
        vlSelfRef.__PVT__fp16_sum_stage0_rdy = vlSelfRef.__VdfgRegularize_h1b022894_0_8;
    } else {
        if ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))) {
            vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum5;
            vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum5_vld;
        } else if ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))) {
            vlSelfRef.fp16_sum = vlSelfRef.__PVT__fp16_sum7;
            vlSelfRef.fp16_sum_vld = vlSelfRef.__PVT__fp16_sum7_vld;
        } else {
            vlSelfRef.fp16_sum = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
            vlSelfRef.fp16_sum_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
        }
        vlSelfRef.__PVT__fp16_sum_stage0_rdy = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_8) 
                                                & (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy));
    }
    vlSelfRef.__VdfgRegularize_h1b022894_0_5 = ((IData)(vlSelfRef.__PVT__fp16_sum_stage0_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum_3_5_vld));
    vlSelfRef.__VdfgRegularize_h1b022894_0_6 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_5) 
                                                & (IData)(__VdfgRegularize_h1b022894_0_27));
    vlSelfRef.__VdfgRegularize_h1b022894_0_7 = ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_6) 
                                                & (IData)(__VdfgRegularize_h1b022894_0_2));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_7) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_4))));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3)));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2)));
    vlSelfRef.__PVT__fp16_dout_4_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1)));
    vlSelfRef.__VdfgRegularize_h1b022894_0_19 = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18));
    vlSelfRef.__VdfgRegularize_h1b022894_0_20 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 5U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_19));
    vlSelfRef.__VdfgRegularize_h1b022894_0_21 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 6U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_20));
    vlSelfRef.__VdfgRegularize_h1b022894_0_22 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_21));
    vlSelfRef.__PVT__fp_sum_in_rdy = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_22));
}

void Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__1(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp_sq_out_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_vld) 
                               & ((0x000001ffU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__PVT__fp_sum_in_rdy)) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_35)));
    vlSelfRef.__PVT__fp16_dout_4_in_vld = ((IData)(vlSelfRef.fp_sq_out_vld) 
                                           & (0x0000000fU 
                                              == (((IData)(vlSelfRef.__PVT__fp_sum_in_rdy) 
                                                   >> 5U) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18))));
}

void Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__2(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp16_sum_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_rand_ready) 
                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_34) 
                                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.fp16_sum_vld)));
}

void Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__0(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__pipe_p1__DOT__p1_pipe_data;
    __Vdly__pipe_p1__DOT__p1_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p2__DOT__p2_pipe_data;
    __Vdly__pipe_p2__DOT__p2_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p3__DOT__p3_pipe_data;
    __Vdly__pipe_p3__DOT__p3_pipe_data = 0;
    VlWide<3>/*95:0*/ __Vdly__pipe_p6__DOT__p6_pipe_data;
    VL_ZERO_W(96, __Vdly__pipe_p6__DOT__p6_pipe_data);
    VlWide<3>/*95:0*/ __Vdly__pipe_p7__DOT__p7_pipe_data;
    VL_ZERO_W(96, __Vdly__pipe_p7__DOT__p7_pipe_data);
    QData/*63:0*/ __Vdly__pipe_p9__DOT__p9_pipe_data;
    __Vdly__pipe_p9__DOT__p9_pipe_data = 0;
    QData/*63:0*/ __Vdly__pipe_p10__DOT__p10_pipe_data;
    __Vdly__pipe_p10__DOT__p10_pipe_data = 0;
    QData/*63:0*/ __Vdly__pipe_p11__DOT__p11_pipe_data;
    __Vdly__pipe_p11__DOT__p11_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p13__DOT__p13_pipe_data;
    __Vdly__pipe_p13__DOT__p13_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p14__DOT__p14_pipe_data;
    __Vdly__pipe_p14__DOT__p14_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p15__DOT__p15_pipe_data;
    __Vdly__pipe_p15__DOT__p15_pipe_data = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    __Vdly__pipe_p1__DOT__p1_pipe_data = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data;
    __Vdly__pipe_p9__DOT__p9_pipe_data = vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data;
    __Vdly__pipe_p13__DOT__p13_pipe_data = vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data;
    __Vdly__pipe_p2__DOT__p2_pipe_data = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data;
    __Vdly__pipe_p6__DOT__p6_pipe_data[0U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U];
    __Vdly__pipe_p6__DOT__p6_pipe_data[1U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U];
    __Vdly__pipe_p6__DOT__p6_pipe_data[2U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U];
    __Vdly__pipe_p10__DOT__p10_pipe_data = vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data;
    __Vdly__pipe_p14__DOT__p14_pipe_data = vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data;
    __Vdly__pipe_p3__DOT__p3_pipe_data = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data;
    __Vdly__pipe_p7__DOT__p7_pipe_data[0U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U];
    __Vdly__pipe_p7__DOT__p7_pipe_data[1U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U];
    __Vdly__pipe_p7__DOT__p7_pipe_data[2U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U];
    __Vdly__pipe_p11__DOT__p11_pipe_data = vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data;
    __Vdly__pipe_p15__DOT__p15_pipe_data = vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data;
    __Vdly__pipe_p1__DOT__p1_pipe_data = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy) 
                                           & (IData)(vlSelfRef.__PVT__fp16_dout_4_in_vld))
                                           ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_3
                                           : vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data);
    __Vdly__pipe_p9__DOT__p9_pipe_data = (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy) 
                                           & (IData)(vlSelfRef.__PVT__stage2_pipe_in_vld))
                                           ? (((QData)((IData)(
                                                               vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[1U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U])))
                                           : vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data);
    __Vdly__pipe_p13__DOT__p13_pipe_data = (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy) 
                                             & (IData)(vlSelfRef.__PVT__stage3_pipe_in_vld))
                                             ? (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_data)
                                             : vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data);
    __Vdly__pipe_p2__DOT__p2_pipe_data = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1) 
                                           & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))
                                           ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
                                           : vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1) 
         & (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid))) {
        __Vdly__pipe_p6__DOT__p6_pipe_data[0U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[1U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[1U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[2U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[2U];
    } else {
        __Vdly__pipe_p6__DOT__p6_pipe_data[0U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[1U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[2U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U];
    }
    __Vdly__pipe_p10__DOT__p10_pipe_data = (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data
                                             : vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data);
    __Vdly__pipe_p14__DOT__p14_pipe_data = (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data
                                             : vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data);
    __Vdly__pipe_p3__DOT__p3_pipe_data = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2) 
                                           & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))
                                           ? vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data
                                           : vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2) 
         & (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid))) {
        __Vdly__pipe_p7__DOT__p7_pipe_data[0U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[1U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[2U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U];
    } else {
        __Vdly__pipe_p7__DOT__p7_pipe_data[0U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[1U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[2U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U];
    }
    __Vdly__pipe_p11__DOT__p11_pipe_data = (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data
                                             : vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data);
    __Vdly__pipe_p15__DOT__p15_pipe_data = (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data
                                             : vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data);
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3) 
         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid))) {
        __Vtemp_3[1U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U];
        __Vtemp_3[2U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U];
    } else {
        __Vtemp_3[1U] = vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[1U];
        __Vtemp_3[2U] = vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[2U] 
        = __Vtemp_3[2U];
    vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_data = 
        (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3) 
          & (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid))
          ? vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data
          : vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_data);
    vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_data = 
        (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3) 
          & (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid))
          ? vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data
          : vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy) 
         & (IData)(vlSelfRef.__PVT__stage1_pipe_in_vld))) {
        __Vtemp_5[1U] = (IData)((((QData)((IData)((
                                                   ((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                    << 0x0000001fU) 
                                                   | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                       << 0x00000017U) 
                                                      | vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0)))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                                      << 0x0000001fU) 
                                                                     | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                                         << 0x00000017U) 
                                                                        | vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0))))));
        __Vtemp_5[2U] = (IData)(((((QData)((IData)(
                                                   (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                     << 0x0000001fU) 
                                                    | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                        << 0x00000017U) 
                                                       | vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0)))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                      << 0x0000001fU) 
                                                     | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                         << 0x00000017U) 
                                                        | vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0))))) 
                                 >> 0x00000020U));
        vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U] 
            = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                    << 0x00000017U) 
                                   | vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    } else {
        __Vtemp_5[1U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[1U] 
        = __Vtemp_5[1U];
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[2U] 
        = __Vtemp_5[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data = __Vdly__pipe_p1__DOT__p1_pipe_data;
    vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data = __Vdly__pipe_p9__DOT__p9_pipe_data;
    vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data = __Vdly__pipe_p13__DOT__p13_pipe_data;
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data = __Vdly__pipe_p2__DOT__p2_pipe_data;
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U] 
        = __Vdly__pipe_p6__DOT__p6_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U] 
        = __Vdly__pipe_p6__DOT__p6_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U] 
        = __Vdly__pipe_p6__DOT__p6_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data = __Vdly__pipe_p10__DOT__p10_pipe_data;
    vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data = __Vdly__pipe_p14__DOT__p14_pipe_data;
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data = __Vdly__pipe_p3__DOT__p3_pipe_data;
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U] 
        = __Vdly__pipe_p7__DOT__p7_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U] 
        = __Vdly__pipe_p7__DOT__p7_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U] 
        = __Vdly__pipe_p7__DOT__p7_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data = __Vdly__pipe_p11__DOT__p11_pipe_data;
    vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data = __Vdly__pipe_p15__DOT__p15_pipe_data;
}

void Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__1(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__stage4_sum7_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage4_sum08_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum_3_5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum3 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum3_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum35_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                       & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum4_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum5 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum3_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum26_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum7 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum7_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum5_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum17_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__VdfgRegularize_h1b022894_0_16 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.fp16_dout_0 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))));
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid))));
    vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid))));
    vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid))));
    vlSelfRef.__PVT__fp16_sum_stage3_rdy = ((IData)(vlSelfRef.__PVT__stage4_sum08_rdy) 
                                            & (IData)(vlSelfRef.__PVT__stage4_sum7_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_8 = ((IData)(vlSelfRef.__PVT__fp16_sum35_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_24 = ((IData)(vlSelfRef.__PVT__stage2_sum26_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_23 = ((IData)(vlSelfRef.__PVT__stage3_sum17_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_17 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_16));
    vlSelfRef.__VdfgRegularize_h1b022894_0_18 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_17));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid))));
    vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid))));
    vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid))));
    vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid))));
    vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_vld))));
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__stage1_pipe_in_vld))));
    vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__stage2_pipe_in_vld))));
    vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy)) 
                     | (IData)(vlSelfRef.__PVT__stage3_pipe_in_vld))));
}

void Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__1(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp_sq_out_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_vld) 
                               & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_10) 
                                  & (0x000001ffU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__fp_sum_in_rdy))));
    vlSelfRef.__PVT__fp16_dout_4_in_vld = ((IData)(vlSelfRef.fp_sq_out_vld) 
                                           & (0x0000000fU 
                                              == (((IData)(vlSelfRef.__PVT__fp_sum_in_rdy) 
                                                   >> 5U) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18))));
}

void Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__2(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp16_sum_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_rand_ready) 
                              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_sum_vld) 
                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_33)));
}

void Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__0(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__pipe_p1__DOT__p1_pipe_data;
    __Vdly__pipe_p1__DOT__p1_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p2__DOT__p2_pipe_data;
    __Vdly__pipe_p2__DOT__p2_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p3__DOT__p3_pipe_data;
    __Vdly__pipe_p3__DOT__p3_pipe_data = 0;
    VlWide<3>/*95:0*/ __Vdly__pipe_p6__DOT__p6_pipe_data;
    VL_ZERO_W(96, __Vdly__pipe_p6__DOT__p6_pipe_data);
    VlWide<3>/*95:0*/ __Vdly__pipe_p7__DOT__p7_pipe_data;
    VL_ZERO_W(96, __Vdly__pipe_p7__DOT__p7_pipe_data);
    QData/*63:0*/ __Vdly__pipe_p9__DOT__p9_pipe_data;
    __Vdly__pipe_p9__DOT__p9_pipe_data = 0;
    QData/*63:0*/ __Vdly__pipe_p10__DOT__p10_pipe_data;
    __Vdly__pipe_p10__DOT__p10_pipe_data = 0;
    QData/*63:0*/ __Vdly__pipe_p11__DOT__p11_pipe_data;
    __Vdly__pipe_p11__DOT__p11_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p13__DOT__p13_pipe_data;
    __Vdly__pipe_p13__DOT__p13_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p14__DOT__p14_pipe_data;
    __Vdly__pipe_p14__DOT__p14_pipe_data = 0;
    IData/*31:0*/ __Vdly__pipe_p15__DOT__p15_pipe_data;
    __Vdly__pipe_p15__DOT__p15_pipe_data = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    __Vdly__pipe_p1__DOT__p1_pipe_data = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data;
    __Vdly__pipe_p9__DOT__p9_pipe_data = vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data;
    __Vdly__pipe_p13__DOT__p13_pipe_data = vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data;
    __Vdly__pipe_p2__DOT__p2_pipe_data = vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data;
    __Vdly__pipe_p6__DOT__p6_pipe_data[0U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U];
    __Vdly__pipe_p6__DOT__p6_pipe_data[1U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U];
    __Vdly__pipe_p6__DOT__p6_pipe_data[2U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U];
    __Vdly__pipe_p10__DOT__p10_pipe_data = vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data;
    __Vdly__pipe_p14__DOT__p14_pipe_data = vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data;
    __Vdly__pipe_p3__DOT__p3_pipe_data = vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data;
    __Vdly__pipe_p7__DOT__p7_pipe_data[0U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U];
    __Vdly__pipe_p7__DOT__p7_pipe_data[1U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U];
    __Vdly__pipe_p7__DOT__p7_pipe_data[2U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U];
    __Vdly__pipe_p11__DOT__p11_pipe_data = vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data;
    __Vdly__pipe_p15__DOT__p15_pipe_data = vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data;
    __Vdly__pipe_p1__DOT__p1_pipe_data = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy) 
                                           & (IData)(vlSelfRef.__PVT__fp16_dout_4_in_vld))
                                           ? vlSelfRef.fp16_dout_4
                                           : vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data);
    __Vdly__pipe_p9__DOT__p9_pipe_data = (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy) 
                                           & (IData)(vlSelfRef.__PVT__stage2_pipe_in_vld))
                                           ? (((QData)((IData)(
                                                               vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[1U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U])))
                                           : vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data);
    __Vdly__pipe_p13__DOT__p13_pipe_data = (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy) 
                                             & (IData)(vlSelfRef.__PVT__stage3_pipe_in_vld))
                                             ? (IData)(vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_data)
                                             : vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data);
    __Vdly__pipe_p2__DOT__p2_pipe_data = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1) 
                                           & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))
                                           ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
                                           : vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1) 
         & (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid))) {
        __Vdly__pipe_p6__DOT__p6_pipe_data[0U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[1U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[1U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[2U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[2U];
    } else {
        __Vdly__pipe_p6__DOT__p6_pipe_data[0U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[1U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U];
        __Vdly__pipe_p6__DOT__p6_pipe_data[2U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U];
    }
    __Vdly__pipe_p10__DOT__p10_pipe_data = (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data
                                             : vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data);
    __Vdly__pipe_p14__DOT__p14_pipe_data = (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data
                                             : vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data);
    __Vdly__pipe_p3__DOT__p3_pipe_data = (((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2) 
                                           & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))
                                           ? vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data
                                           : vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2) 
         & (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid))) {
        __Vdly__pipe_p7__DOT__p7_pipe_data[0U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[1U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[2U] = vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U];
    } else {
        __Vdly__pipe_p7__DOT__p7_pipe_data[0U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[1U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U];
        __Vdly__pipe_p7__DOT__p7_pipe_data[2U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U];
    }
    __Vdly__pipe_p11__DOT__p11_pipe_data = (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data
                                             : vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data);
    __Vdly__pipe_p15__DOT__p15_pipe_data = (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2) 
                                             & (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid))
                                             ? vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data
                                             : vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data);
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3) 
         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid))) {
        __Vtemp_3[1U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U];
        __Vtemp_3[2U] = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U];
    } else {
        __Vtemp_3[1U] = vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[1U];
        __Vtemp_3[2U] = vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_data[2U] 
        = __Vtemp_3[2U];
    vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_data = 
        (((IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3) 
          & (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid))
          ? vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data
          : vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_data);
    vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_data = 
        (((IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3) 
          & (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid))
          ? vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data
          : vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_data);
    if (((IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy) 
         & (IData)(vlSelfRef.__PVT__stage1_pipe_in_vld))) {
        __Vtemp_5[1U] = (IData)((((QData)((IData)((
                                                   ((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                    << 0x0000001fU) 
                                                   | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                       << 0x00000017U) 
                                                      | vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0)))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                                      << 0x0000001fU) 
                                                                     | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                                         << 0x00000017U) 
                                                                        | vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0))))));
        __Vtemp_5[2U] = (IData)(((((QData)((IData)(
                                                   (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                     << 0x0000001fU) 
                                                    | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                        << 0x00000017U) 
                                                       | vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0)))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                                      << 0x0000001fU) 
                                                     | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                         << 0x00000017U) 
                                                        | vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0))))) 
                                 >> 0x00000020U));
        vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U] 
            = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                    << 0x00000017U) 
                                   | vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    } else {
        __Vtemp_5[1U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[2U];
        vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[0U];
    }
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[1U] 
        = __Vtemp_5[1U];
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_data[2U] 
        = __Vtemp_5[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data = __Vdly__pipe_p1__DOT__p1_pipe_data;
    vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_data = __Vdly__pipe_p9__DOT__p9_pipe_data;
    vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_data = __Vdly__pipe_p13__DOT__p13_pipe_data;
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data = __Vdly__pipe_p2__DOT__p2_pipe_data;
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[0U] 
        = __Vdly__pipe_p6__DOT__p6_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[1U] 
        = __Vdly__pipe_p6__DOT__p6_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_data[2U] 
        = __Vdly__pipe_p6__DOT__p6_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_data = __Vdly__pipe_p10__DOT__p10_pipe_data;
    vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_data = __Vdly__pipe_p14__DOT__p14_pipe_data;
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data = __Vdly__pipe_p3__DOT__p3_pipe_data;
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[0U] 
        = __Vdly__pipe_p7__DOT__p7_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[1U] 
        = __Vdly__pipe_p7__DOT__p7_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_data[2U] 
        = __Vdly__pipe_p7__DOT__p7_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_data = __Vdly__pipe_p11__DOT__p11_pipe_data;
    vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_data = __Vdly__pipe_p15__DOT__p15_pipe_data;
}

void Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__1(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__stage4_sum7_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage4_sum08_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum9->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum_3_5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum3 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum3_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum35_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                       & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum4_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum3->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum5 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum5_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum3_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage2_sum26_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__fp16_sum7 = (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
                                   << 0x0000001fU) 
                                  | (((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                      << 0x00000017U) 
                                     | vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__fp16_sum7_vld = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                      & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum5_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                        & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__stage3_sum17_rdy = ((IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                         & (IData)(vlSelf->__PVT__u_HLS_fp32_add_sum7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__VdfgRegularize_h1b022894_0_16 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_1_7->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__u_HLS_fp32_add_0_8->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.fp16_dout_0 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_1 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_2 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_3 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_4 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_5 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_6 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.fp16_dout_7 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31) 
                              << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23) 
                                                  << 0x00000017U) 
                                                 | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))));
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid))));
    vlSelfRef.__PVT__pipe_p12__DOT__p12_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d3)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid))));
    vlSelfRef.__PVT__pipe_p16__DOT__p16_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d3)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid))));
    vlSelfRef.__PVT__fp16_sum_stage3_rdy = ((IData)(vlSelfRef.__PVT__stage4_sum08_rdy) 
                                            & (IData)(vlSelfRef.__PVT__stage4_sum7_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_8 = ((IData)(vlSelfRef.__PVT__fp16_sum35_rdy) 
                                                & (IData)(vlSelfRef.__PVT__fp16_sum4_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_24 = ((IData)(vlSelfRef.__PVT__stage2_sum26_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage2_sum3_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_23 = ((IData)(vlSelfRef.__PVT__stage3_sum17_rdy) 
                                                 & (IData)(vlSelfRef.__PVT__stage3_sum5_rdy));
    vlSelfRef.__VdfgRegularize_h1b022894_0_17 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_2_6->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_16));
    vlSelfRef.__VdfgRegularize_h1b022894_0_18 = ((((IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
                                                   & (IData)(vlSelf->__PVT__u_HLS_fp32_add_3_5->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_17));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid))));
    vlSelfRef.__PVT__pipe_p11__DOT__p11_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d2)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid))));
    vlSelfRef.__PVT__pipe_p15__DOT__p15_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d2)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid))));
    vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy_d1)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid))));
    vlSelfRef.__PVT__pipe_p14__DOT__p14_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy_d1)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp16_dout_4_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__fp16_dout_4_in_vld))));
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage1_pipe_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__stage1_pipe_in_vld))));
    vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__stage2_pipe_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__stage2_pipe_in_vld))));
    vlSelfRef.__PVT__pipe_p13__DOT__p13_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__stage3_pipe_in_rdy)) 
                     | (IData)(vlSelfRef.__PVT__stage3_pipe_in_vld))));
}

void Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__1(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp_sq_out_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_vld) 
                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_11));
    vlSelfRef.__PVT__fp16_dout_4_in_vld = ((IData)(vlSelfRef.fp_sq_out_vld) 
                                           & (0x0000000fU 
                                              == (((IData)(vlSelfRef.__PVT__fp_sum_in_rdy) 
                                                   >> 5U) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h1b022894_0_18))));
}

void Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__2(Vsim_fp_sum_block* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_fp_sum_block___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fp16_sum_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_pipe_rand_ready) 
                              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.fp16_sum_vld) 
                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_33)));
}

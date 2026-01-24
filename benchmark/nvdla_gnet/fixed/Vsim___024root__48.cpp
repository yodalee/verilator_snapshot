// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlUnpacked<CData/*7:0*/, 32768> Vsim__ConstPool__TABLE_hb98b23d5_0;

void Vsim___024root___nba_comb__TOP__4(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*14:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p5__DOT__p5_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p5__DOT__p5_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mcif2cdp_rd_rsp_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p5__DOT__p5_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p5__DOT__p5_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cvif2cdp_rd_rsp_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__op_load 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__tran_vld)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_op_en_reg) 
              >> 2U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_last_h 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__dp2reg_consumer)
             ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_height)
             : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_height)) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__height_count));
    __Vtableidx11 = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__byte_in_channel) 
                       << 0x0000000aU) | (0x00000380U 
                                          & (((IData)(4U) 
                                              - (3U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__byte_in_channel) 
                                                    >> 3U))) 
                                             << 7U))) 
                     | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__tran_cnt) 
                         << 4U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__is_last_c) 
                                    << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__invalid_flag 
        = Vsim__ConstPool__TABLE_hb98b23d5_0[__Vtableidx11];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_last_c 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__channel_count) 
           == ((0x000003ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__number_of_byte_in_channel) 
                                >> 5U) + (0U != (0x0000001fU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__number_of_byte_in_channel))))) 
               - (IData)(1U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_last_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__width_count) 
           == ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__number_of_total_trans_in_width) 
               - (IData)(1U)));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3983) {
        if ((0x0040U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_cya;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_cya;
        } else if ((0x0014U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_channel;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_channel;
        } else if ((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_height;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_height;
        } else if ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_width;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_width;
        } else if ((0x0034U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_input_data;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_input_data;
        } else if ((0x0030U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data = 0U;
        } else if ((8U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_op_en;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_op_en;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_dma_en;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_dma_en;
        }
    } else if ((0x003cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__dp2reg_d0_perf_read_stall;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__dp2reg_d1_perf_read_stall;
    } else if ((0x001cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_src_base_addr_high;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_src_base_addr_high;
    } else if ((0x0018U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_src_base_addr_low 
               << 5U);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_src_base_addr_low 
               << 5U);
    } else if ((0x002cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data = 0U;
    } else if ((0x0028U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_src_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_src_ram_type;
    } else if ((0x0020U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_src_line_stride 
               << 5U);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_src_line_stride 
               << 5U);
    } else if ((0x0024U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_src_surface_stride 
               << 5U);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_src_surface_stride 
               << 5U);
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__is_slice_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_last_w) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_last_c));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__req_size 
        = (7U & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__width_count))
                  ? ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__number_of_total_trans_in_width))
                      ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_width)
                      : 7U) : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_last_w)
                                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_width)
                                : 7U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__is_cube_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_last_w) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_last_h) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_last_c)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__dma_rd_req_pd[0U] 
        = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__dma_req_addr);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__dma_rd_req_pd[1U] 
        = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__dma_req_addr 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__dma_rd_req_pd[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__req_size;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_pd 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_last_c) 
             << 6U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_last_h) 
                       << 5U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_last_w) 
                                   << 4U) | ((8U & 
                                              ((~ (IData)(
                                                          (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__dma_req_addr 
                                                           >> 5U))) 
                                               << 3U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__req_size))));
}

void Vsim___024root___nba_comb__TOP__5(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__mcif2pdp_rd_rsp_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__cvif2pdp_rd_rsp_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__op_load 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__op_process)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_op_en_reg) 
              >> 2U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_surf_end 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__dp2reg_consumer)
             ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_cube_in_height)
             : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_cube_in_height)) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__count_h));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__is_fspt 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_split_num)) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__count_wg)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__is_lspt 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_split_num)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__count_wg) 
              == ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__wg_num) 
                  - (IData)(1U))));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3964) {
        if ((0x004cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_cya;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_cya;
        } else if ((0x0014U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_cube_in_channel;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_cube_in_channel;
        } else if ((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_cube_in_height;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_cube_in_height;
        } else if ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_cube_in_width;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_cube_in_width;
        } else if ((0x0030U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_input_data;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_input_data;
        } else if ((0x0018U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_flying_mode;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_flying_mode;
        } else if ((0x0034U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_split_num;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_split_num;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_op_en;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_op_en;
        }
    } else if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3963) {
        if ((0x0040U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_partial_width_in_mid) 
                    << 0x00000014U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_partial_width_in_last) 
                                        << 0x0000000aU) 
                                       | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_partial_width_in_first)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_partial_width_in_mid) 
                    << 0x00000014U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_partial_width_in_last) 
                                        << 0x0000000aU) 
                                       | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_partial_width_in_first)));
        } else if ((0x0044U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_dma_en;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_dma_en;
        } else if ((0x0048U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__dp2reg_d0_perf_read_stall;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__dp2reg_d1_perf_read_stall;
        } else if ((0x0038U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_kernel_stride_width) 
                    << 4U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_kernel_width));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_kernel_stride_width) 
                    << 4U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_kernel_width));
        } else if ((0x003cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_pad_width;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_pad_width;
        } else if ((0x0020U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_src_base_addr_high;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_src_base_addr_high;
        } else if ((0x001cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_src_base_addr_low 
                   << 5U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_src_base_addr_low 
                   << 5U);
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_src_line_stride 
                   << 5U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_src_line_stride 
                   << 5U);
        }
    } else if ((0x002cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_src_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_src_ram_type;
    } else if ((0x0028U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_src_surface_stride 
               << 5U);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_src_surface_stride 
               << 5U);
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_valid)) 
                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_bpt2.dma2bpt_req_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p3__DOT__p3_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p3__DOT__p3_pipe_valid)) 
                 | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2.dma2bpt_req_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_split_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_surf_end) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__count_c) 
              == ((0x000003ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__number_of_byte_in_c) 
                                   >> 5U) + (0U != 
                                             (0x0000001fU 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__number_of_byte_in_c))))) 
                  - (IData)(1U))));
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_split_num))) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__is_fspt) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__width_stride 
                = (0x00003fffU & (0x000007ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_partial_width_in_first))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__req_size 
                = (0x00001fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_partial_width_in_first));
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__is_lspt) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__width_stride 
                = (0x00003fffU & (0x000007ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_partial_width_in_last))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__req_size 
                = (0x00001fffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                   ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_partial_width_in_last) 
                                      - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__overlap))
                                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_partial_width_in_last) 
                                      + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__overlap))));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__width_stride 
                = (0x00003fffU & (0x000007ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_partial_width_in_mid))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__req_size 
                = (0x00001fffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                   ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_partial_width_in_mid) 
                                      - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__overlap))
                                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_partial_width_in_mid) 
                                      + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__overlap))));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_cube_end 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_split_end) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__is_lspt));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__width_stride 
            = (0x00003fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_cube_in_width)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__req_size 
            = (0x00001fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__reg2dp_cube_in_width));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_cube_end 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_split_end;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p2__DOT__p2_pipe_valid) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p4__DOT__p4_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p3__DOT__p3_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p1__DOT__p1_pipe_valid) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p3__DOT__p3_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p3__DOT__p3_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p3__DOT__p3_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p3__DOT__p3_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p3__DOT__p3_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p3__DOT__p3_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__dma_rd_req_pd[0U] 
        = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__base_addr_width);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__dma_rd_req_pd[1U] 
        = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__base_addr_width 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__dma_rd_req_pd[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__req_size;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__ig2cq_pd 
        = (0x00004000U | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_cube_end) 
                           << 0x00000011U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_split_end) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__ig2eg_surf_end) 
                                                  << 0x0000000fU) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__req_size)))));
}

extern const VlUnpacked<CData/*3:0*/, 16> Vsim__ConstPool__TABLE_hc9c8fb03_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_h0ef30377_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_h5e3494de_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_ha2880859_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_ha530a8a7_0;

void Vsim___024root___nba_sequent__TOP__755(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__755\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__rd_popping) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__op_done_rd_pd 
            = ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__op_done_rd_adr))
                ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__op_done_rd_adr))
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__ram__DOT__ram_ff3)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__ram__DOT__ram_ff2))
                : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__op_done_rd_adr))
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__ram__DOT__ram_ff1)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__ram__DOT__ram_ff0)));
    }
    __Vtableidx6 = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer) 
                     << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__op_done_wr_adr) 
                                << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__wr_reserving)));
    if ((1U & Vsim__ConstPool__TABLE_hc9c8fb03_0[__Vtableidx6])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__ram__DOT__ram_ff0 
            = Vsim__ConstPool__TABLE_h0ef30377_0[__Vtableidx6];
    }
    if ((2U & Vsim__ConstPool__TABLE_hc9c8fb03_0[__Vtableidx6])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__ram__DOT__ram_ff1 
            = Vsim__ConstPool__TABLE_h5e3494de_0[__Vtableidx6];
    }
    if ((4U & Vsim__ConstPool__TABLE_hc9c8fb03_0[__Vtableidx6])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__ram__DOT__ram_ff2 
            = Vsim__ConstPool__TABLE_ha2880859_0[__Vtableidx6];
    }
    if ((8U & Vsim__ConstPool__TABLE_hc9c8fb03_0[__Vtableidx6])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__ram__DOT__ram_ff3 
            = Vsim__ConstPool__TABLE_ha530a8a7_0[__Vtableidx6];
    }
}

void Vsim___024root___nba_comb__TOP__6(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3942) {
        if ((0x009cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_cya;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_cya;
        } else if ((0x0014U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_cube_in_channel;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_cube_in_channel;
        } else if ((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_cube_in_height;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_cube_in_height;
        } else if ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_cube_in_width;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_cube_in_width;
        } else if ((0x0020U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_cube_out_channel;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_cube_out_channel;
        } else if ((0x001cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_cube_out_height;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_cube_out_height;
        } else if ((0x0018U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_cube_out_width;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_cube_out_width;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_input_data;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_input_data;
        }
    } else if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3941) {
        if ((0x0074U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_dst_base_addr_high;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_dst_base_addr_high;
        } else if ((0x0070U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_dst_base_addr_low 
                   << 5U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_dst_base_addr_low 
                   << 5U);
        } else if ((0x0078U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_dst_line_stride 
                   << 5U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_dst_line_stride 
                   << 5U);
        } else if ((0x0080U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_dst_ram_type;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_dst_ram_type;
        } else if ((0x007cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_dst_surface_stride 
                   << 5U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_dst_surface_stride 
                   << 5U);
        } else if ((0x0088U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__dp2reg_d0_inf_input_num;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__dp2reg_d1_inf_input_num;
        } else if ((0x0028U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_nan_to_zero;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_nan_to_zero;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__dp2reg_d0_nan_input_num;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__dp2reg_d1_nan_input_num;
        }
    } else if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3940) {
        if ((0x0090U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__dp2reg_d0_nan_output_num;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__dp2reg_d1_nan_output_num;
        } else if ((0x0024U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_split_num) 
                    << 8U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_flying_mode) 
                               << 4U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pooling_method)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_split_num) 
                    << 8U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_flying_mode) 
                               << 4U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pooling_method)));
        } else if ((8U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_op_en;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_op_en;
        } else if ((0x002cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_partial_width_in_mid) 
                    << 0x00000014U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_partial_width_in_last) 
                                        << 0x0000000aU) 
                                       | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_partial_width_in_first)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_partial_width_in_mid) 
                    << 0x00000014U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_partial_width_in_last) 
                                        << 0x0000000aU) 
                                       | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_partial_width_in_first)));
        } else if ((0x0030U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_partial_width_out_mid) 
                    << 0x00000014U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_partial_width_out_last) 
                                        << 0x0000000aU) 
                                       | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_partial_width_out_first)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_partial_width_out_mid) 
                    << 0x00000014U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_partial_width_out_last) 
                                        << 0x0000000aU) 
                                       | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_partial_width_out_first)));
        } else if ((0x0094U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_dma_en;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_dma_en;
        } else if ((0x0098U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__dp2reg_d0_perf_write_stall;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__dp2reg_d1_perf_write_stall;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_kernel_stride_height) 
                    << 0x00000014U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_kernel_stride_width) 
                                        << 0x00000010U) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_kernel_height) 
                                           << 8U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_kernel_width))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_kernel_stride_height) 
                    << 0x00000014U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_kernel_stride_width) 
                                        << 0x00000010U) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_kernel_height) 
                                           << 8U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_kernel_width))));
        }
    } else if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3939) {
        if ((0x0040U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pad_bottom) 
                    << 0x0000000cU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pad_right) 
                                        << 8U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pad_top) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pad_left))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pad_bottom) 
                    << 0x0000000cU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pad_right) 
                                        << 8U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pad_top) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pad_left))));
        } else if ((0x0044U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pad_value_1x;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pad_value_1x;
        } else if ((0x0048U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pad_value_2x;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pad_value_2x;
        } else if ((0x004cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pad_value_3x;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pad_value_3x;
        } else if ((0x0050U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pad_value_4x;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pad_value_4x;
        } else if ((0x0054U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pad_value_5x;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pad_value_5x;
        } else if ((0x0058U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pad_value_6x;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pad_value_6x;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pad_value_7x;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pad_value_7x;
        }
    } else if ((0x003cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_recip_kernel_height;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_recip_kernel_height;
    } else if ((0x0038U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_recip_kernel_width;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_recip_kernel_width;
    } else if ((0x0064U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_src_base_addr_high;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_src_base_addr_high;
    } else if ((0x0060U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_src_base_addr_low 
               << 5U);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_src_base_addr_low 
               << 5U);
    } else if ((0x0068U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_src_line_stride 
               << 5U);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_src_line_stride 
               << 5U);
    } else if ((0x006cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_src_surface_stride 
               << 5U);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_src_surface_stride 
               << 5U);
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_rd_data = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_rd_data = 0U;
    }
}

void Vsim___024root___nba_sequent__TOP__756(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__756\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_rd_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_skid_ready_flop) 
           & ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__tran_cnt)) 
              & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_rd_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_skid_ready_flop) 
           & ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__tran_cnt)) 
              & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro2_rd_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_skid_ready_flop) 
           & ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__tran_cnt)) 
              & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro3_rd_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_skid_ready_flop) 
           & ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__tran_cnt)) 
              & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro4_rd_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_skid_ready_flop) 
           & ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__tran_cnt)) 
              & (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro5_rd_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_skid_ready_flop) 
           & ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__tran_cnt)) 
              & (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro6_rd_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_skid_ready_flop) 
           & ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__tran_cnt)) 
              & (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro7_rd_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_skid_ready_flop) 
           & ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__tran_cnt)) 
              & (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__cdp2cvif_rd_cdt_lat_fifo_pop 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__dma_rd_cdt_lat_fifo_pop) 
               & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__reg2dp_src_ram_type))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p2__DOT__p2_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__cdp2mcif_rd_cdt_lat_fifo_pop 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__dma_rd_cdt_lat_fifo_pop) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__reg2dp_src_ram_type)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p1__DOT__p1_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__pipe_p1__DOT__p1_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_skid_pipe_valid))));
}

void Vsim___024root___nba_comb__TOP__7(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT____VdfgRegularize_h885c49b6_0_1 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__wr_rsp_complete)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__op_done_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT____VdfgRegularize_hfbfec04b_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__rbk_opdone_fifo__DOT__op_done_rd_pvld_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__wr_rsp_complete));
}

void Vsim___024root___nba_sequent__TOP__757(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__757\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_start 
        = (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_high)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_start_low)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd4_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_vld) 
           & (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_axid)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd3_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_vld) 
           & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_axid)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd4_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_vld) 
           & (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_axid)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd3_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_vld) 
           & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_axid)));
    vlSelfRef.tb_top__DOT__dbb_mem__DOT__rready = (1U 
                                                   & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_valid)) 
                                                      | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_ready)));
    vlSelfRef.tb_top__DOT__cvsram_mem__DOT__rready 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__ack_raw_rdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__ack_bot_vld)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__ack_bot_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__ack_raw_rdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__ack_bot_vld)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__ack_bot_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__mcif2bdma_wr_rsp_complete 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_prdy) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_pvld)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_pd)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__cvif2bdma_wr_rsp_complete 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_prdy) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_pvld)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_pd)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p11__DOT__p11_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p11__DOT__p11_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p11__DOT__p11_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p11__DOT__p11_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p11__DOT__p11_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p11__DOT__p11_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__csb2sdp_rdma_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__sdp_rdma_req_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p7__DOT__p7_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p7__DOT__p7_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p7__DOT__p7_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p7__DOT__p7_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p7__DOT__p7_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p7__DOT__p7_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p8__DOT__p8_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p8__DOT__p8_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p8__DOT__p8_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p8__DOT__p8_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p8__DOT__p8_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p8__DOT__p8_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p9__DOT__p9_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p9__DOT__p9_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p9__DOT__p9_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p9__DOT__p9_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p9__DOT__p9_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p9__DOT__p9_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__intr_fifo_rd_prdy_d 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_wr_rsp_complete));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__slcg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_processing) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_processing_d)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__intr_fifo_rd_prdy_d 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__intr_fifo_rd_prdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__core_intr_d 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__sdp_done_mask0)) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__sdp_done_status0)) 
                | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__sdp_done_mask1)) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__sdp_done_status1))) 
               | ((((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdp_done_mask0)) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdp_done_status0)) 
                   | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdp_done_mask1)) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdp_done_status1))) 
                  | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__pdp_done_mask0)) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__pdp_done_status0)) 
                     | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__pdp_done_mask1)) 
                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__pdp_done_status1)) 
                        | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__bdma_done_mask0)) 
                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__bdma_done_status0)) 
                           | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__bdma_done_mask1)) 
                               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__bdma_done_status1)) 
                              | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__rubik_done_mask0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__rubik_done_status0)) 
                                 | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__rubik_done_mask1)) 
                                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__rubik_done_status1)) 
                                    | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_dat_done_mask0)) 
                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_dat_done_status0)) 
                                       | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_dat_done_mask1)) 
                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_dat_done_status1)) 
                                          | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_wt_done_mask0)) 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_wt_done_status0)) 
                                             | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_wt_done_mask1)) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_wt_done_status1)) 
                                                | (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cacc_done_mask0)) 
                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cacc_done_status0)) 
                                                   | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cacc_done_mask1)) 
                                                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cacc_done_status1))))))))))))))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_single_reg__DOT__nvdla_cdp_s_lut_le_slope_shift_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_slope_uflow_shift 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_slope_oflow_shift 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_single_reg__DOT__nvdla_cdp_s_lut_lo_slope_shift_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_slope_uflow_shift 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_slope_oflow_shift 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_single_reg__DOT__nvdla_cdp_s_lut_le_slope_scale_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_slope_uflow_scale 
                = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_slope_oflow_scale 
                = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_single_reg__DOT__nvdla_cdp_s_lut_lo_slope_scale_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_slope_uflow_scale 
                = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_slope_oflow_scale 
                = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000026U)));
        }
        if (((0x0024U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_single_reg__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_end_high 
                = (0x0000003fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0020U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_single_reg__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_end_low 
                = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                           >> 0x00000016U));
        }
        if (((0x0034U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_single_reg__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_end_high 
                = (0x0000003fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0030U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_single_reg__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_end_low 
                = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                           >> 0x00000016U));
        }
        if (((0x007cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datin_shifter 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x007cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datin_shifter 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0080U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datout_offset 
                = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                           >> 0x00000016U));
        }
        if (((0x0080U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datout_offset 
                = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                           >> 0x00000016U));
        }
        if (((0x0074U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datin_offset 
                = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0074U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datin_offset 
                = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x001cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_single_reg__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_high 
                = (0x0000003fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_wr_en) 
             & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_table_id)))) {
            if ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg0 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0040U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg64 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg1 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg2 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg3 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg4 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg5 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg6 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg7 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg8 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg9 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x000aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg10 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x000bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg11 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x000cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg12 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x000dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg13 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x000eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg14 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg15 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0010U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg16 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0011U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg17 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0012U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg18 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0013U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg19 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0014U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg20 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0015U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg21 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0016U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg22 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0017U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg23 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0018U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg24 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0019U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg25 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x001aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg26 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x001bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg27 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x001cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg28 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x001dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg29 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x001eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg30 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x001fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg31 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0020U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg32 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0021U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg33 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0022U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg34 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0023U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg35 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0024U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg36 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0025U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg37 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0026U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg38 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0027U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg39 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0028U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg40 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0029U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg41 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x002aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg42 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x002bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg43 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x002cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg44 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x002dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg45 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x002eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg46 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x002fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg47 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0030U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg48 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0031U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg49 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0032U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg50 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0033U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg51 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0034U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg52 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0035U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg53 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0036U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg54 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0037U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg55 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0038U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg56 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0039U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg57 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x003aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg58 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x003bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg59 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x003cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg60 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x003dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg61 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x003eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg62 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x003fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg63 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_wr_en) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_table_id))) {
            if ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg0 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0100U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg256 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg1 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg2 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg3 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg4 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg5 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg6 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg7 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg8 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg9 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x000aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg10 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x000bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg11 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x000cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg12 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x000dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg13 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x000eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg14 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg15 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0010U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg16 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0011U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg17 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0012U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg18 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0013U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg19 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0014U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg20 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0015U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg21 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0016U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg22 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0017U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg23 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0018U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg24 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0019U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg25 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x001aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg26 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x001bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg27 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x001cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg28 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x001dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg29 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x001eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg30 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x001fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg31 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0020U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg32 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0021U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg33 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0022U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg34 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0023U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg35 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0024U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg36 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0025U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg37 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0026U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg38 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0027U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg39 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0028U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg40 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0029U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg41 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x002aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg42 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x002bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg43 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x002cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg44 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x002dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg45 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x002eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg46 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x002fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg47 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0030U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg48 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0031U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg49 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0032U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg50 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0033U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg51 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0034U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg52 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0035U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg53 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0036U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg54 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0037U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg55 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0038U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg56 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0039U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg57 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x003aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg58 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x003bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg59 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x003cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg60 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x003dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg61 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x003eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg62 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x003fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg63 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0040U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg64 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0041U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg65 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0042U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg66 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0043U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg67 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0044U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg68 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0045U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg69 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0046U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg70 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0047U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg71 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0048U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg72 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0049U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg73 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x004aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg74 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x004bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg75 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x004cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg76 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x004dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg77 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x004eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg78 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x004fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg79 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0050U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg80 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0051U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg81 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0052U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg82 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0053U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg83 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0054U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg84 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0055U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg85 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0056U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg86 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0057U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg87 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0058U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg88 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0059U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg89 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x005aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg90 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x005bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg91 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x005cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg92 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x005dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg93 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x005eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg94 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x005fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg95 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0060U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg96 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0061U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg97 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0062U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg98 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0063U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg99 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0064U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg100 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0065U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg101 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0066U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg102 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0067U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg103 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0068U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg104 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0069U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg105 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x006aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg106 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x006bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg107 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x006cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg108 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x006dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg109 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x006eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg110 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x006fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg111 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0070U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg112 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0071U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg113 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0072U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg114 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0073U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg115 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0074U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg116 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0075U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg117 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0076U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg118 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0077U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg119 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0078U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg120 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0079U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg121 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x007aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg122 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x007bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg123 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x007cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg124 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x007dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg125 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x007eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg126 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x007fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg127 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0080U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg128 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0081U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg129 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0082U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg130 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0083U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg131 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0084U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg132 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0085U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg133 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0086U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg134 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0087U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg135 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0088U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg136 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0089U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg137 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x008aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg138 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x008bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg139 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x008cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg140 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x008dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg141 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x008eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg142 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x008fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg143 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0090U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg144 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0091U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg145 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0092U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg146 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0093U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg147 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0094U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg148 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0095U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg149 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0096U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg150 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0097U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg151 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0098U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg152 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x0099U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg153 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x009aU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg154 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x009bU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg155 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x009cU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg156 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x009dU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg157 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x009eU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg158 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x009fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg159 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00a0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg160 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00a1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg161 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00a2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg162 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00a3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg163 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00a4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg164 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00a5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg165 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00a6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg166 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00a7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg167 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00a8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg168 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00a9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg169 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00aaU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg170 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00abU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg171 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00acU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg172 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00adU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg173 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00aeU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg174 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00afU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg175 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00b0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg176 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00b1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg177 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00b2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg178 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00b3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg179 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00b4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg180 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00b5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg181 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00b6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg182 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00b7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg183 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00b8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg184 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00b9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg185 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00baU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg186 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00bbU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg187 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00bcU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg188 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00bdU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg189 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00beU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg190 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00bfU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg191 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00c0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg192 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00c1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg193 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00c2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg194 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00c3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg195 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00c4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg196 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00c5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg197 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00c6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg198 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00c7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg199 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00c8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg200 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00c9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg201 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00caU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg202 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00cbU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg203 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00ccU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg204 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00cdU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg205 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00ceU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg206 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00cfU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg207 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00d0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg208 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00d1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg209 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00d2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg210 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00d3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg211 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00d4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg212 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00d5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg213 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00d6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg214 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00d7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg215 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00d8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg216 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00d9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg217 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00daU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg218 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00dbU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg219 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00dcU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg220 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00ddU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg221 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00deU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg222 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00dfU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg223 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00e0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg224 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00e1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg225 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00e2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg226 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00e3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg227 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00e4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg228 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00e5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg229 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00e6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg230 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00e7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg231 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00e8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg232 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00e9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg233 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00eaU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg234 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00ebU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg235 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00ecU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg236 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00edU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg237 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00eeU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg238 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00efU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg239 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00f0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg240 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00f1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg241 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00f2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg242 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00f3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg243 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00f4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg244 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00f5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg245 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00f6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg246 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00f7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg247 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00f8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg248 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00f9U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg249 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00faU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg250 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00fbU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg251 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00fcU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg252 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00fdU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg253 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00feU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg254 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
            if ((0x00ffU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg255 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x00000016U)));
            }
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_op_en_reg 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_op_en_reg_w;
        if (((0x0078U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datin_scale 
                = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0078U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datin_scale 
                = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0088U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datout_shifter 
                = (0x0000003fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0088U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datout_shifter 
                = (0x0000003fU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0084U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datout_scale 
                = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x0084U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datout_scale 
                = (0x0000ffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((0x000fU == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_status_0_stall_count_en 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (((0x005cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_dst_surface_stride 
                = (0x07ffffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (((0x005cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_dst_surface_stride 
                = (0x07ffffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d1__DOT__nvdla_cdp_d_perf_enable_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_dma_en 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_dual_reg_d0__DOT__nvdla_cdp_d_perf_enable_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_dma_en 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                 >> 0x00000016U)));
        }
        if (((0x004cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_daout_surf_stride 
                = (0x07ffffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (((0x004cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_daout_surf_stride 
                = (0x07ffffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (((0x0028U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_dain_surf_stride 
                = (0x07ffffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        if (((0x0028U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_dain_surf_stride 
                = (0x07ffffffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd 
                                          >> 0x0000001bU)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_op_en_reg 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_op_en_reg_w;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__slcg_op_en_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__slcg_op_en_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__slcg_op_en_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__slcg_op_en_d2;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__slcg_op_en_d3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__slcg_op_en_d2;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_single_reg__DOT__nvdla_cdp_s_lut_info_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x00000016U)));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d1) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d2[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d2[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d2[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d2[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[3U];
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d1) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d2[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d2[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d2[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d2[3U] = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_pvld_d1) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_pvld_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d2[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d2[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d2[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d2[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[3U];
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_pvld_d1) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_pvld_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d2[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d2[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d2[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d2[3U] = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__dp2reg_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__dp2reg_consumer_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__u_single_reg__DOT__lut_addr_trigger) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_table_id 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__req_pd 
                                 >> 0x00000026U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__csb2rbk_req_pvld) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd 
                = ((0x00ffffffffc00000ULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__csb2rbk_req_pd_tmp 
                                             << 6U)) 
                   | (QData)((IData)((0x0000ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__csb2rbk_req_pd_tmp)))));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__slcg_op_en_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__slcg_op_en_d1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__slcg_op_en_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__slcg_op_en_d1;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__slcg_op_en_d2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__slcg_op_en_d1;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__u_reg__DOT__nvdla_glb_s_intr_mask_0_wren) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__sdp_done_mask0 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__sdp_done_mask1 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x00000017U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdp_done_mask0 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x00000018U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdp_done_mask1 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x00000019U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__pdp_done_mask0 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x0000001aU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__pdp_done_mask1 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x0000001bU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__bdma_done_mask0 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x0000001cU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__bdma_done_mask1 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x0000001dU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__rubik_done_mask0 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x0000001eU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__rubik_done_mask1 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x0000001fU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_dat_done_mask0 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x00000026U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_dat_done_mask1 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x00000027U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_wt_done_mask0 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x00000028U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_wt_done_mask1 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x00000029U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cacc_done_mask0 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x0000002aU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cacc_done_mask1 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_csb__DOT__req_pd 
                                 >> 0x0000002bU)));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_pvld) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_mask[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_mask[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_mask[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_mask[3U];
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_pvld) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[3U] = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_dat_a_src_pvld) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_pvld_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_dat_a_src_mask[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_dat_a_src_mask[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_dat_a_src_mask[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_dat_a_src_mask[3U];
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_dat_a_src_pvld) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_pvld_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[3U] = 0U;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__slcg_op_en_d1 
            = (0x0000000fU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_op_en_ori))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__slcg_op_en_d1 
            = (7U & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_op_en_ori))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__slcg_op_en_d1 
            = (7U & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_op_en_ori))));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_slope_uflow_shift = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_slope_oflow_shift = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_slope_uflow_shift = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_slope_oflow_shift = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_slope_uflow_scale = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_slope_oflow_scale = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_slope_uflow_scale = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_slope_oflow_scale = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_end_high = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_end_low = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_end_high = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_end_low = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datin_shifter = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datin_shifter = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datout_offset = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datout_offset = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datin_offset = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datin_offset = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_high = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg64 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg7 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg8 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg9 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg10 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg11 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg12 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg13 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg14 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg15 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg16 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg17 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg18 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg19 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg20 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg21 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg22 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg23 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg24 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg25 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg26 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg27 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg28 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg29 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg30 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg31 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg32 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg33 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg34 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg35 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg36 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg37 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg38 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg39 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg40 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg41 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg42 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg43 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg44 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg45 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg46 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg47 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg48 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg49 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg50 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg51 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg52 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg53 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg54 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg55 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg56 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg57 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg58 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg59 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg60 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg61 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg62 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__raw_reg63 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg256 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg7 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg8 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg9 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg10 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg11 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg12 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg13 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg14 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg15 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg16 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg17 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg18 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg19 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg20 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg21 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg22 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg23 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg24 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg25 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg26 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg27 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg28 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg29 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg30 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg31 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg32 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg33 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg34 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg35 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg36 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg37 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg38 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg39 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg40 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg41 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg42 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg43 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg44 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg45 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg46 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg47 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg48 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg49 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg50 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg51 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg52 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg53 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg54 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg55 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg56 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg57 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg58 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg59 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg60 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg61 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg62 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg63 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg64 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg65 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg66 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg67 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg68 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg69 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg70 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg71 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg72 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg73 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg74 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg75 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg76 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg77 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg78 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg79 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg80 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg81 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg82 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg83 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg84 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg85 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg86 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg87 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg88 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg89 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg90 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg91 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg92 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg93 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg94 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg95 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg96 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg97 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg98 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg99 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg100 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg101 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg102 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg103 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg104 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg105 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg106 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg107 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg108 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg109 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg110 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg111 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg112 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg113 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg114 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg115 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg116 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg117 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg118 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg119 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg120 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg121 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg122 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg123 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg124 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg125 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg126 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg127 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg128 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg129 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg130 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg131 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg132 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg133 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg134 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg135 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg136 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg137 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg138 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg139 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg140 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg141 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg142 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg143 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg144 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg145 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg146 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg147 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg148 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg149 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg150 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg151 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg152 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg153 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg154 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg155 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg156 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg157 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg158 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg159 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg160 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg161 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg162 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg163 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg164 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg165 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg166 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg167 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg168 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg169 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg170 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg171 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg172 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg173 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg174 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg175 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg176 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg177 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg178 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg179 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg180 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg181 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg182 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg183 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg184 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg185 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg186 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg187 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg188 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg189 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg190 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg191 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg192 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg193 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg194 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg195 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg196 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg197 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg198 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg199 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg200 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg201 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg202 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg203 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg204 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg205 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg206 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg207 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg208 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg209 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg210 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg211 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg212 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg213 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg214 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg215 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg216 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg217 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg218 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg219 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg220 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg221 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg222 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg223 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg224 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg225 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg226 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg227 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg228 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg229 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg230 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg231 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg232 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg233 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg234 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg235 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg236 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg237 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg238 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg239 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg240 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg241 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg242 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg243 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg244 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg245 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg246 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg247 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg248 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg249 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg250 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg251 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg252 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg253 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg254 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__density_reg255 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_op_en_reg = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datin_scale = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datin_scale = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datout_shifter = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datout_shifter = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datout_scale = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datout_scale = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_status_0_stall_count_en = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_dst_surface_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_dst_surface_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_dma_en = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_dma_en = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_daout_surf_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_daout_surf_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_dain_surf_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_dain_surf_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_op_en_reg = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__slcg_op_en_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__slcg_op_en_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__slcg_op_en_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d2[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d2[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d2[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d2[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d2[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d2[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d2[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d2[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_table_id = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__slcg_op_en_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__slcg_op_en_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__slcg_op_en_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__sdp_done_mask0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__sdp_done_mask1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdp_done_mask0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdp_done_mask1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__pdp_done_mask0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__pdp_done_mask1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__bdma_done_mask0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__bdma_done_mask1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__rubik_done_mask0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__rubik_done_mask1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_dat_done_mask0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_dat_done_mask1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_wt_done_mask0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_wt_done_mask1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cacc_done_mask0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cacc_done_mask1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_mask_d1[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_dat_mask_d1[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__slcg_op_en_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__slcg_op_en_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__slcg_op_en_d1 = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_cvt__DOT__pipe_p1__DOT__p1_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_cvt__DOT__pipe_p1__DOT__p1_skid_pipe_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__pipe_p3__DOT__p3_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__pipe_p3__DOT__p3_skid_pipe_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__pipe_p4__DOT__p4_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__pipe_p4__DOT__p4_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__pipe_p4__DOT__p4_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_cvt__DOT__pipe_p1__DOT__p1_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_ig__DOT__u_cvt__DOT__pipe_p1__DOT__p1_skid_pipe_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__pipe_p3__DOT__p3_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__pipe_p3__DOT__p3_skid_pipe_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__pipe_p4__DOT__p4_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__pipe_p4__DOT__p4_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__pipe_p4__DOT__p4_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__csb2cvif_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__cvif_req_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__csb2mcif_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__mcif_req_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__mcif2pdp_wr_rsp_complete 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_prdy) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_pvld)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_pd)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__cvif2pdp_wr_rsp_complete 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_prdy) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_pvld)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_pd)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__cdp_rdma_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_req_int) 
               & (0x0000e000U == (0x0003f000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_rd_data) 
                                                 << 2U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__pdp_rdma_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_req_int) 
               & (0x0000c000U == (0x0003f000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_rd_data) 
                                                 << 2U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__pdp_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_req_int) 
               & (0x0000d000U == (0x0003f000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_rd_data) 
                                                 << 2U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__mcif2sdp_wr_rsp_complete 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_prdy) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_pvld)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_pd)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__cvif2sdp_wr_rsp_complete 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_prdy) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_pvld)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_pd)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_vld) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_axid)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd0_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_vld) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_axid)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_vld) 
           & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_axid)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd2_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_vld) 
           & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_axid)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_vld) 
           & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_axid)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd1_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_vld) 
           & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_eg__DOT__iflop_axi_axid)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_start 
        = (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_high)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__mon_op_en_pos 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__mon_op_en_dly)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_op_en_reg) 
              >> 2U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__sdp_rdma_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_req_int) 
               & (0x0000a000U == (0x0003f000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_rd_data) 
                                                 << 2U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_wr_rsp_complete 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__ack_top_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_processing_d 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_processing));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__sdp_done_status0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__sdp_done_status0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__sdp_done_status1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__sdp_done_status1_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdp_done_status0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__cdp_done_status0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdp_done_status1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__cdp_done_status1_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__pdp_done_status0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__pdp_done_status0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__pdp_done_status1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__pdp_done_status1_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__bdma_done_status0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__bdma_done_status0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__bdma_done_status1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__bdma_done_status1_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__rubik_done_status0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__rubik_done_status0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__rubik_done_status1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__rubik_done_status1_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_dat_done_status0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__cdma_dat_done_status0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_dat_done_status1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__cdma_dat_done_status1_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_wt_done_status0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__cdma_wt_done_status0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cdma_wt_done_status1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__cdma_wt_done_status1_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cacc_done_status0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__cacc_done_status0_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__cacc_done_status1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_glb__DOT__u_ic__DOT__cacc_done_status1_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__cvif_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_req_int) 
               & (0x00003000U == (0x0003f000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_rd_data) 
                                                 << 2U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__mcif_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_req_int) 
               & (0x00002000U == (0x0003f000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_rd_data) 
                                                 << 2U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__dp2reg_consumer_w 
        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_contract_stride_0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_contract_stride_0;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_line_stride 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_dain_line_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_planar_stride 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_dain_planar_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_line_stride 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_daout_line_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_planar_stride 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_daout_planar_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_perf_en 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_perf_en;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dataout_channel 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_dataout_channel;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_y_stride 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_deconv_y_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_height 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_datain_height;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_channel 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_datain_channel;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_type 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_datain_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_type 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_dataout_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_op_en_ori 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_op_en;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_contract_stride_0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_contract_stride_0;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_line_stride 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_dain_line_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_planar_stride 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_dain_planar_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_line_stride 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_daout_line_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_planar_stride 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_daout_planar_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_perf_en 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_perf_en;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dataout_channel 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_dataout_channel;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_y_stride 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_deconv_y_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_height 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_datain_height;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_channel 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_datain_channel;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_req_type 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_datain_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_type 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_dataout_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_op_en_ori 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_op_en;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__src_base 
        = (((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer)
                              ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_dain_addr_high
                              : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_dain_addr_high))) 
            << 0x0000001bU) | (QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer)
                                                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_dain_addr_low
                                                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_dain_addr_low))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dest_base 
        = (((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer)
                              ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_daout_addr_high
                              : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_daout_addr_high))) 
            << 0x0000001bU) | (QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer)
                                                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_daout_addr_low
                                                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_daout_addr_low))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__ack_top_rdy 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__ack_top_id) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mc_dma_wr_rsp_complete) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mc_pending))) 
           | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__ack_top_id)) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cv_dma_wr_rsp_complete) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cv_pending))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_rdy 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_type) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p5__DOT__p5_skid_ready_flop)) 
           | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_type)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__pipe_p6__DOT__p6_skid_ready_flop)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__lut_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_lut_addr) 
           == ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_table_id)
                ? 0x0100U : 0x0040U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg_rd_en 
        = ((~ (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd 
                       >> 0x00000036U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__select_d0 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_producer)) 
           & (8U <= (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                    << 2U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__select_d1 
        = ((8U <= (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_producer));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pvld) 
           & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd 
                      >> 0x00000036U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3994 = (
                                                   ((0x0038U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x003cU 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x0040U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x0050U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x0030U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x004cU 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x0014U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0018U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3995 = (
                                                   ((0x0044U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x0048U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x001cU 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x0020U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x0024U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x002cU 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x0010U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0028U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__csb2rbk_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__rbk_req_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d0));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__dp2reg_consumer) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__reg2dp_src_ram_type 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_src_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_op_en;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__reg2dp_src_ram_type 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_src_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_op_en;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d0));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__dp2reg_consumer) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__reg2dp_src_ram_type 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_src_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_op_en;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__reg2dp_src_ram_type 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_src_ram_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__slcg_op_en_d0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_op_en;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__ack_bot_rdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__ack_top_vld)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__ack_top_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__s_reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg_wr_en) 
           & (8U > (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                   << 2U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg_wr_en) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_op_en)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__select_d0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg_wr_en) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_op_en)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__select_d1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__ack_raw_rdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__ack_bot_vld)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__ack_bot_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_rbk_d_datain_size_0_0_wren 
        = ((0x0014U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_rbk_d_deconv_stride_0_wren 
        = ((0x0054U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__nvdla_rbk_d_misc_cfg_0_wren 
        = ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d0__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_rbk_d_datain_size_0_0_wren 
        = ((0x0014U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_rbk_d_deconv_stride_0_wren 
        = ((0x0054U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__nvdla_rbk_d_misc_cfg_0_wren 
        = ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__u_dual_reg_d1__DOT__reg_wr_en));
}

void Vsim___024root___nba_sequent__TOP__758(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__758\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_data[0U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_data[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_data[1U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_data[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_data[2U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_data[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__cube_end 
        = (IData)((0x0001c000U == (0x0001c000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_data[2U])));
}

void Vsim___024root___nba_comb__TOP__8(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_26;
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_skid_ready_flop) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_pipe_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_pipe_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_pipe_data[2U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_skid_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_skid_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_skid_data[2U];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cvtout_pd[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_pd_3) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_pd_2)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_pd_1) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_pd_0))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cvtout_pd[1U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_pd_3) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_pd_2)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_pd_1) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_pd_0))))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cvtout_pd[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__pipe_p4__DOT__p4_pipe_data;
    __Vtemp_26[0U] = (((- (IData)((0xe0U == (0x000000ffU 
                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                                >> 0x0000000fU))))) 
                       & (IData)((0x00001fffffffffffULL 
                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_7))) 
                      | (((- (IData)((0xc0U == (0x000000ffU 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                                   >> 0x0000000fU))))) 
                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_7)) 
                         | (((- (IData)((0x80U == (0x000000ffU 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                                      >> 0x0000000fU))))) 
                             & (IData)((0x7fffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_pd[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_pd[0U])))))) 
                            | ((- (IData)((0U == (0x000000ffU 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                                     >> 0x0000000fU))))) 
                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_pd[0U]))));
    __Vtemp_26[1U] = (((- (IData)((0xe0U == (0x000000ffU 
                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                                >> 0x0000000fU))))) 
                       & (IData)(((0x00001fffffffffffULL 
                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_7) 
                                  >> 0x00000020U))) 
                      | (((- (IData)((0xc0U == (0x000000ffU 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                                   >> 0x0000000fU))))) 
                          & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_7 
                                     >> 0x00000020U))) 
                         | (((- (IData)((0x80U == (0x000000ffU 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                                      >> 0x0000000fU))))) 
                             & (IData)(((0x7fffffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_pd[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_pd[0U])))) 
                                        >> 0x00000020U))) 
                            | ((- (IData)((0U == (0x000000ffU 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                                     >> 0x0000000fU))))) 
                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_pd[1U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[0U] 
        = (((- (IData)((0xfeU == (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                                 >> 0x0000000fU))))) 
            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0.__VdfgRegularize_h6e95ff9d_0_3266)) 
           | (((- (IData)((0xfcU == (0x000000ffU & 
                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                      >> 0x0000000fU))))) 
               & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__d) 
              | ((0x07ffffffU & ((- (IData)((0xf8U 
                                             == (0x000000ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                                    >> 0x0000000fU))))) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_6))) 
                 | (((- (IData)((0xf0U == (0x000000ffU 
                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                              >> 0x0000000fU))))) 
                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_6)) 
                    | __Vtemp_26[0U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[1U] 
        = (((- (IData)((0xf0U == (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                                 >> 0x0000000fU))))) 
            & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_6 
                       >> 0x00000020U))) | __Vtemp_26[1U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__icvt_out_pd[2U] 
        = ((- (IData)((0U == (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_data 
                                             >> 0x0000000fU))))) 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_pd[2U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                  >> 0x00000013U) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52 = ((0x0000000fU 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                     >> 8U)) 
                                                 <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__NormalC2CubeEnd = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
                if (((IData)((0x007b0000U == (0x007f0000U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]))) 
                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__NormalC2CubeEnd = 1U;
                }
            }
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50 = (IData)(
                                                        ((2U 
                                                          == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
                                                         & (0U 
                                                            == 
                                                            (0x00000f00U 
                                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_cur 
        = (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)
                           ? (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                << 0x00000014U) | (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                   >> 0x0000000cU)) 
                              - (IData)(1U)) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_cur_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__less2more 
        = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_cur) 
              > (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__more2less 
        = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_cur) 
              < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__l2m_1stC_vld 
        = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__less2more) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__FIRST_C_end 
        = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2675) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__more2less) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__FIRST_C_bf_end 
        = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
           & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt) 
               < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__more2less)));
    if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_align 
            = (0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_align 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_done;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_align 
            = (0x0000000fU & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))
                               ? 0U : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))
                                        ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__more2less)
                                            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here)
                                                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt)
                                                : (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                      >> 8U)))
                                            : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__less2more)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52)
                                                    ? 
                                                   ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                     << 0x00000018U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                       >> 8U))
                                                    : 0U)
                                                : (
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                      >> 8U))))
                                        : ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                            << 0x00000018U) 
                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                              >> 8U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_align 
            = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
               & ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))
                   ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__more2less)
                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2675)
                       : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__less2more)
                           ? (((0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                               >> 8U)) 
                               == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre)) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din))
                           : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)))
                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_nex 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur;
    if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_nex = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_nex = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_nex = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
            if (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                  >> 0x00000013U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_nex = 1U;
            }
        } else if ((((((0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                       >> 8U)) == (0x0000000fU 
                                                   & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                        << 0x00000014U) 
                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                          >> 0x0000000cU)) 
                                                      - (IData)(1U)))) 
                      & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__more2less))) 
                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)) 
                    | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__more2less) 
                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt) 
                            == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre))) 
                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here)) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_nex = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
        if (((IData)((0x007b0000U == (0x007f0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]))) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_nex = 4U;
        } else if (((IData)((0x004b0000U == (0x004f0000U 
                                             & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]))) 
                    & ((~ (IData)((0x00300000U == (0x00300000U 
                                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])))) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_nex = 2U;
        }
    } else if (((IData)((0x00080000U == (0x000f0000U 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]))) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_nex = 1U;
    }
}

void Vsim___024root___nba_sequent__TOP__759(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__759\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_raw_vld) 
         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_raw_rdy))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_id 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_cmd_dst_ram_type;
    } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_raw_vld) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_raw_rdy))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_id = 0U;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ld2st_rd_accept) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_cmd_src_ram_type 
            = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__ld2st_rd_pd[2U] 
                     >> 0x0000000dU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_cmd_interrupt_ptr 
            = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__ld2st_rd_pd[2U] 
                     >> 0x00000010U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_cmd_dst_ram_type 
            = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__ld2st_rd_pd[2U] 
                     >> 0x0000000eU));
    }
    if (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_busy_in)) 
         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_pvld))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__di_d[0U] 
            = (IData)((((QData)((IData)(((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3114[5U] 
                                          << 0x00000015U) 
                                         | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3114[4U] 
                                            >> 0x0000000bU)))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (0xffffffe0U 
                                                           & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3115[6U] 
                                                               << 0x0000001aU) 
                                                              | (0x03ffffe0U 
                                                                 & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3115[5U] 
                                                                    >> 6U))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__di_d[1U] 
            = (IData)(((((QData)((IData)(((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3114[5U] 
                                           << 0x00000015U) 
                                          | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3114[4U] 
                                             >> 0x0000000bU)))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (0xffffffe0U 
                                                            & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3115[6U] 
                                                                << 0x0000001aU) 
                                                               | (0x03ffffe0U 
                                                                  & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3115[5U] 
                                                                     >> 6U))))))) 
                       >> 0x00000020U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__di_d[2U] 
            = ((0xfffe0000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__di_d[2U]) 
               | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__launch_ptr) 
                    << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__reg2dp_cmd_interrupt) 
                                       << 0x0000000fU)) 
                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__Vcellout__Jreg_ff__BRA__124__KET____DOT__SSS__DOT__nr__Q) 
                      << 0x0000000eU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q) 
                                          << 0x0000000dU) 
                                         | (0x00001fffU 
                                            & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3113[4U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3113[3U] 
                                                  >> 0x0000001eU)))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__di_d[2U] 
            = ((0x0001ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__di_d[2U]) 
               | ((IData)((((QData)((IData)((0x00001fffU 
                                             & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3111[3U] 
                                                >> 4U)))) 
                            << 0x0000001bU) | (QData)((IData)(
                                                              (0x07ffffffU 
                                                               & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3109[2U] 
                                                                   << 0x00000012U) 
                                                                  | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3109[1U] 
                                                                     >> 0x0000000eU))))))) 
                  << 0x00000011U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__di_d[3U] 
            = (((IData)((((QData)((IData)((0x00001fffU 
                                           & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3111[3U] 
                                              >> 4U)))) 
                          << 0x0000001bU) | (QData)((IData)(
                                                            (0x07ffffffU 
                                                             & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3109[2U] 
                                                                 << 0x00000012U) 
                                                                | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3109[1U] 
                                                                   >> 0x0000000eU))))))) 
                >> 0x0000000fU) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__reg2dp_dst_surf_stride 
                                    << 0x00000019U) 
                                   | ((IData)(((((QData)((IData)(
                                                                 (0x00001fffU 
                                                                  & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3111[3U] 
                                                                     >> 4U)))) 
                                                 << 0x0000001bU) 
                                                | (QData)((IData)(
                                                                  (0x07ffffffU 
                                                                   & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3109[2U] 
                                                                       << 0x00000012U) 
                                                                      | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3109[1U] 
                                                                         >> 0x0000000eU)))))) 
                                               >> 0x00000020U)) 
                                      << 0x00000011U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__di_d[4U] 
            = ((0xfff00000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__di_d[4U]) 
               | (((0x0001ffffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__reg2dp_dst_surf_stride 
                                   >> 7U)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0x00001fffU 
                                                                          & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3111[3U] 
                                                                             >> 4U)))) 
                                                         << 0x0000001bU) 
                                                        | (QData)((IData)(
                                                                          (0x07ffffffU 
                                                                           & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3109[2U] 
                                                                               << 0x00000012U) 
                                                                              | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3109[1U] 
                                                                                >> 0x0000000eU)))))) 
                                                       >> 0x00000020U)) 
                                              >> 0x0000000fU)) 
                  | (0x01fe0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__reg2dp_dst_surf_stride 
                                    >> 7U))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__di_d[4U] 
            = ((0x000fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__di_d[4U]) 
               | ((IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3107 
                           >> 0x00000016U)) << 0x00000014U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ram__DOT__di_d[5U] 
            = (1U & ((IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3107 
                              >> 0x00000016U)) >> 0x0000000cU));
    }
}

void Vsim___024root___nba_comb__TOP__9(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__is_last_beat 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__beat_count) 
           == (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_line_size) 
                              >> 1U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__is_surf_last 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__line_count) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_line_repeat_number));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__dma_rd_req_pd[0U] 
        = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__line_addr);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__dma_rd_req_pd[1U] 
        = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__line_addr 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__dma_rd_req_pd[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_line_size;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_rdy 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_pipe_rand_ready) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_cmd_dst_ram_type)) 
           | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_cmd_dst_ram_type)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_rand_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__is_cube_last 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_surf_repeat_number) 
            == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__surf_count)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__is_surf_last));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_cmd_rdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cmd_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_dat_rdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dat_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_cmd_require_ack 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_cmd_interrupt) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__is_cube_last));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__fifo_intr_wr_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_cmd_vld) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_cmd_rdy) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_cmd_require_ack)));
}

void Vsim___024root___nba_comb__TOP__10(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__bdma2cvif_rd_req_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__bdma2mcif_rd_req_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__bdma2cvif_wr_req_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__bdma2mcif_wr_req_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mcif2bdma_rd_rsp_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cvif2bdma_rd_rsp_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__cv_dma_rd_req_vld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__mc_dma_rd_req_vld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim___024root___nba_sequent__TOP__760(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__760\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[5U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[1U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[2U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[3U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[4U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[5U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[6U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[7U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[8U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[9U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[9U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000aU] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000bU] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000cU] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000dU] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000dU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000eU] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000fU] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000fU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U];
}

void Vsim___024root___nba_sequent__TOP__761(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__761\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_popping) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pd 
            = (0x00007fffU & ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__ram__DOT__ra))
                               ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__ram__DOT__ra))
                                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U]
                                   : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__ram__DOT__ram_ff2))
                               : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__ram__DOT__ra))
                                   ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__ram__DOT__ram_ff1)
                                   : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__ram__DOT__ram_ff0))));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_wr_cmd_require_ack 
        = (IData)((0x7000U == (0x7000U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pd))));
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__ram_we) 
         & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__ram__DOT__ram_ff2 
            = (0x00007fffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__ram_we) 
         & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__ram__DOT__ram_ff1 
            = (0x00007fffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__ram_we) 
         & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__ram__DOT__ram_ff0 
            = (0x00007fffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_data[2U]);
    }
}

void Vsim___024root___nba_comb__TOP__11(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__Vfuncout;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__idata;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__idata = 0;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_rdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__pipe_p4__DOT__p4_pipe_valid) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_skid_ready_flop));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__data_info_in_rdy_d3 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__pipe_p4__DOT__p4_pipe_valid)) 
                 | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_skid_ready_flop) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_vld))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cvtout_pvld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fp16_dout_load 
        = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cvtout_pvld) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_skid_ready_flop)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__data_info_in_rdy_d2 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__pipe_p3__DOT__p3_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__data_info_in_rdy_d3)));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__idata 
        = ((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fp16_dout_load) 
               & (IData)((((0x7800U == (0x7800U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3.__VdfgRegularize_h6e95ff9d_0_3274))) 
                           & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10))) 
                          & (0x03ffU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3.__VdfgRegularize_h6e95ff9d_0_3273))))) 
              << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fp16_dout_load) 
                         & (IData)((((0x7800U == (0x7800U 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2.__VdfgRegularize_h6e95ff9d_0_3272))) 
                                     & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10))) 
                                    & (0x03ffU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2.__VdfgRegularize_h6e95ff9d_0_3271))))) 
                        << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fp16_dout_load) 
                                     & (IData)((((0x7800U 
                                                  == 
                                                  (0x7800U 
                                                   & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1.__VdfgRegularize_h6e95ff9d_0_3270))) 
                                                 & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10))) 
                                                & (0x03ffU 
                                                   == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1.__VdfgRegularize_h6e95ff9d_0_3269))))) 
                                    << 1U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fp16_dout_load) 
                                              & (IData)(
                                                        (((0x7800U 
                                                           == 
                                                           (0x7800U 
                                                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0.__VdfgRegularize_h6e95ff9d_0_3268))) 
                                                          & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10))) 
                                                         & (0x03ffU 
                                                            == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0.__VdfgRegularize_h6e95ff9d_0_3267))))))) 
           | ((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17) 
                  << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16) 
                            << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17) 
                                        << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16))) 
               << 4U) | ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17) 
                           << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16) 
                                     << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__Vstatic__ocnt 
        = (0x0000000fU & (((((1U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__idata)) 
                             + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__idata) 
                                      >> 1U))) + (1U 
                                                  & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__idata) 
                                                     >> 2U))) 
                           + (((1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__idata) 
                                      >> 3U)) + (1U 
                                                 & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__idata) 
                                                    >> 4U))) 
                              + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__idata) 
                                       >> 5U)))) + 
                          ((1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__idata) 
                                  >> 6U)) + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__idata) 
                                                   >> 7U)))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__Vfuncout 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__Vstatic__ocnt;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__saturation_ele 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__fun_bit_sum_8__28__Vfuncout;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__data_info_in_rdy_d1 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__pipe_p2__DOT__p2_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__data_info_in_rdy_d2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__mon_sat_cnt_nxt 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__sat_cnt)) 
                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__saturation_ele))) 
                                 >> 0x00000020U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__sat_cnt_nxt 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__sat_cnt 
           + (IData)((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__saturation_ele))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__data_info_in_rdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__pipe_p1__DOT__p1_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__data_info_in_rdy_d1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_in_ready 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_input_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__data_info_in_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__sync2ocvt_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_in_ready) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_valid));
}

void Vsim___024root___nba_sequent__TOP__762(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__762\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__dma_wr_pd_mask 
        = (((0U != (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_omask_d) 
                                   >> 6U))) << 1U) 
           | (0U != (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_omask_d))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__push_size 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__dma_wr_pd_mask), 1U) 
                 + (0U != (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_omask_d)))));
}

void Vsim___024root___nba_sequent__TOP__763(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__763\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_popping) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_opd 
            = ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ra))
                ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ra))
                    ? 0U : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ra))
                             ? 0U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__di_d)))
                : ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ra))
                    ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ra))
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ram_ff3)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ram_ff2))
                    : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ra))
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ram_ff1)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ram_ff0))));
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram_we) 
         & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ram_ff3 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__di_d;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram_we) 
         & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ram_ff2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__di_d;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram_we) 
         & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ram_ff1 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__di_d;
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram_we) 
         & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__ram_ff0 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__ram__DOT__di_d;
    }
}

void Vsim___024root___nba_sequent__TOP__764(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__764\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_popping) {
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ra))) {
            if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ra))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[2U] = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ra))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[2U] = 0U;
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[2U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[2U];
            }
        } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ra))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ra))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff3[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff3[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[2U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff3[2U];
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff2[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff2[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[2U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff2[2U];
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ra))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff1[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff1[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff1[2U];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff0[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff0[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff0[2U];
        }
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram_we) 
         & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff3[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff3[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff3[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[2U];
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram_we) 
         & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[2U];
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram_we) 
         & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[2U];
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram_we) 
         & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff0[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff0[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__ram_ff0[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__ram__DOT__di_d[2U];
    }
}

void Vsim___024root___nba_comb__TOP__12(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_rand_ready) 
           & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wptr) 
               != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rptr)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_open)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_vld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_valid));
}

void Vsim___024root___nba_comb__TOP__13(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_44 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1.pooling_out_pvld) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0.pooling_out_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_45 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2.pooling_out_pvld) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_44));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_46 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3.pooling_out_pvld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_45));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_47 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4.pooling_out_pvld) 
            << 4U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_46));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_48 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5.pooling_out_pvld) 
            << 5U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_47));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_49 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6.pooling_out_pvld) 
            << 6U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_48));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_pvld 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.pooling_out_pvld) 
            << 7U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_49));
}

void Vsim___024root___nba_comb__TOP__14(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__all_downs_rdy 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_wr_busy_int)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__axi_both_rdy));
}

void Vsim___024root___nba_comb__TOP__15(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__all_downs_rdy 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_wr_busy_int)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_cvt__DOT__axi_both_rdy));
}

void Vsim___024root___nba_sequent__TOP__765(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__765\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync1__DOT__src_d_f 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_falcon_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync1__DOT__SRC_D_NEXT));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync2__DOT__src_d_f 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_falcon_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync2__DOT__SRC_D_NEXT));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync0__DOT__src_d_f 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_falcon_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync0__DOT__SRC_D_NEXT));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_pushing_gray__DOT__polarity 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync0__DOT__src_d_f) 
           ^ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync1__DOT__src_d_f) 
              ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync2__DOT__src_d_f)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync0__DOT__SRC_D_NEXT 
        = (1U ^ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_pushing_gray__DOT__polarity) 
                 ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync0__DOT__src_d_f)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync1__DOT__SRC_D_NEXT 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync1__DOT__src_d_f) 
           ^ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_pushing_gray__DOT__polarity) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync0__DOT__src_d_f)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync2__DOT__SRC_D_NEXT 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync2__DOT__src_d_f) 
           ^ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_wr_pushing_sync0__DOT__src_d_f)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__wr_pushing_gray__DOT__polarity)));
}

void Vsim___024root___nba_sequent__TOP__766(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__766\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__WAFF 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__muxed_Wa_w0;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__WDQ_pr 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_opd)
                : 0U) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_pd_in));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__WAFF) 
                          >> 2U));
}

void Vsim___024root___nba_sequent__TOP__767(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__767\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_sum 
        = (0x0000003fU & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                            >> 0x0000001fU) + (1U & 
                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                >> 0x0000001eU))) 
                          + (((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                     >> 0x0000001dU)) 
                              + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                       >> 0x0000001cU))) 
                             + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                       >> 0x0000001bU)) 
                                + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                          >> 0x0000001aU)) 
                                   + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                             >> 0x00000019U)) 
                                      + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                >> 0x00000018U)) 
                                         + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                   >> 0x00000017U)) 
                                            + ((1U 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                   >> 0x00000016U)) 
                                               + ((1U 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                      >> 0x00000015U)) 
                                                  + 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                       >> 0x00000014U)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                        >> 0x00000013U)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                         >> 0x00000012U)) 
                                                     + 
                                                     ((1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                          >> 0x00000011U)) 
                                                      + 
                                                      ((1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                           >> 0x00000010U)) 
                                                       + 
                                                       ((1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                            >> 0x0000000fU)) 
                                                        + 
                                                        ((1U 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                             >> 0x0000000eU)) 
                                                         + 
                                                         ((1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                              >> 0x0000000dU)) 
                                                          + 
                                                          ((1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                               >> 0x0000000cU)) 
                                                           + 
                                                           ((1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                                >> 0x0000000bU)) 
                                                            + 
                                                            ((1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                                 >> 0x0000000aU)) 
                                                             + 
                                                             ((1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                                  >> 9U)) 
                                                              + 
                                                              ((1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                                   >> 8U)) 
                                                               + 
                                                               ((1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                                    >> 7U)) 
                                                                + 
                                                                ((1U 
                                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                                     >> 6U)) 
                                                                 + 
                                                                 ((1U 
                                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                                      >> 5U)) 
                                                                  + 
                                                                  ((1U 
                                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                                       >> 4U)) 
                                                                   + 
                                                                   ((1U 
                                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                                        >> 3U)) 
                                                                    + 
                                                                    ((1U 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                                         >> 2U)) 
                                                                     + 
                                                                     ((1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag 
                                                                          >> 1U)) 
                                                                      + 
                                                                      (1U 
                                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_nan_flag)))))))))))))))))))))))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_sum 
        = (0x0000003fU & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                            >> 0x0000001fU) + (1U & 
                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                >> 0x0000001eU))) 
                          + (((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                     >> 0x0000001dU)) 
                              + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                       >> 0x0000001cU))) 
                             + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                       >> 0x0000001bU)) 
                                + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                          >> 0x0000001aU)) 
                                   + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                             >> 0x00000019U)) 
                                      + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                >> 0x00000018U)) 
                                         + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                   >> 0x00000017U)) 
                                            + ((1U 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                   >> 0x00000016U)) 
                                               + ((1U 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                      >> 0x00000015U)) 
                                                  + 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                       >> 0x00000014U)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                        >> 0x00000013U)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                         >> 0x00000012U)) 
                                                     + 
                                                     ((1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                          >> 0x00000011U)) 
                                                      + 
                                                      ((1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                           >> 0x00000010U)) 
                                                       + 
                                                       ((1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                            >> 0x0000000fU)) 
                                                        + 
                                                        ((1U 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                             >> 0x0000000eU)) 
                                                         + 
                                                         ((1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                              >> 0x0000000dU)) 
                                                          + 
                                                          ((1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                               >> 0x0000000cU)) 
                                                           + 
                                                           ((1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                                >> 0x0000000bU)) 
                                                            + 
                                                            ((1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                                 >> 0x0000000aU)) 
                                                             + 
                                                             ((1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                                  >> 9U)) 
                                                              + 
                                                              ((1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                                   >> 8U)) 
                                                               + 
                                                               ((1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                                    >> 7U)) 
                                                                + 
                                                                ((1U 
                                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                                     >> 6U)) 
                                                                 + 
                                                                 ((1U 
                                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                                      >> 5U)) 
                                                                  + 
                                                                  ((1U 
                                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                                       >> 4U)) 
                                                                   + 
                                                                   ((1U 
                                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                                        >> 3U)) 
                                                                    + 
                                                                    ((1U 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                                         >> 2U)) 
                                                                     + 
                                                                     ((1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag 
                                                                          >> 1U)) 
                                                                      + 
                                                                      (1U 
                                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wt_fp16_inf_flag)))))))))))))))))))))))))))))));
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_rsp_valid) 
         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data_cnt))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data_w[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data_w[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data_w[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data_w[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data_w[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data_w[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data_w[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__wmb_local_data_w[7U];
    }
}

void Vsim___024root___nba_comb__TOP__16(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__pipe_p2__DOT__p2_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__cdma_wt2cvif_rd_req_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__pipe_p1__DOT__p1_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__cdma_wt2mcif_rd_req_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p11__DOT__p11_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p11__DOT__p11_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__mcif2cdma_wt_rd_rsp_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p11__DOT__p11_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p11__DOT__p11_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__cvif2cdma_wt_rd_rsp_ready)));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h508fe9be_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vsim__ConstPool__TABLE_hc9891833_0;

void Vsim___024root___nba_comb__TOP__17(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[0U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[0U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[0U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[0U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[1U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[1U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[1U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[1U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[2U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[2U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[2U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[2U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[3U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[3U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[3U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[3U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[4U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[4U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[4U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[4U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[5U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[5U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[5U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[5U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[6U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[6U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[6U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[6U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[7U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[7U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[7U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[7U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[8U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[8U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[8U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[8U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[9U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[9U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[9U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[9U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000aU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[0x0000000aU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000aU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[0x0000000aU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000bU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[0x0000000bU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000bU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[0x0000000bU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000cU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[0x0000000cU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000cU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[0x0000000cU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000dU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[0x0000000dU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000dU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[0x0000000dU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000eU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[0x0000000eU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000eU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[0x0000000eU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000fU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[0x0000000fU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000fU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[0x0000000fU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x00000010U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_pipe_data[0x00000010U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p3__DOT__p3_skid_data[0x00000010U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_pipe_data[0x00000010U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__pipe_p4__DOT__p4_skid_data[0x00000010U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_253 = (3U 
                                                  & ((1U 
                                                      & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x00000010U]) 
                                                     + 
                                                     VL_SHIFTR_III(2,2,32, 
                                                                   (3U 
                                                                    & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x00000010U]), 1U)));
    __Vtableidx23 = ((0x00000030U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x00000010U] 
                                     << 4U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rsp_size_cnt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__mon_dma_rsp_size_cnt_inc 
        = Vsim__ConstPool__TABLE_h508fe9be_0[__Vtableidx23];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rsp_size_cnt_inc 
        = Vsim__ConstPool__TABLE_hc9891833_0[__Vtableidx23];
}

void Vsim___024root___nba_sequent__TOP__768(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__768\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_popping) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rsp_fifo_data 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__use_buff_d)
                               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__buff_d)
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ro_d)
                                   ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__ram_Inst_64X10__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2) 
                                      >> 5U) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__ram_Inst_64X10__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2))));
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_enable) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__use_buff_d 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__use_buff_d_next;
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__use_buff_d_next)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ro_d 
                = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_adr_p));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__use_buff_d_next) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__buff_d 
                = (0x0000001fU & ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_adr_p))
                                   ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__buff) 
                                      >> 5U) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__buff)));
        }
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_reserving) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_adr))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_adr))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__buff 
                    = ((0x001fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__buff)) 
                       | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_data_in) 
                          << 5U));
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__buff = 0U;
            }
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__buff 
                = ((0x03e0U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__buff)) 
                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__wr_data_in));
        }
    }
}

void Vsim___024root___nba_comb__TOP__18(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_req_pd[0U] 
        = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_addr_d2 
                   << 5U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_req_pd[1U] 
        = (IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_addr_d2 
                    << 5U) >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_req_pd[2U] 
        = (0x00007fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__req_size_out_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[0U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[0U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[0U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[0U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[0U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[1U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[1U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[1U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[1U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[1U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[2U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[2U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[2U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[2U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[2U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[3U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[3U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[3U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[3U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[3U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[4U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[4U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[4U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[4U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[4U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[5U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[5U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[5U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[5U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[5U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[6U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[6U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[6U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[6U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[6U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[7U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[7U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[7U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[7U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[7U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[8U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[8U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[8U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[8U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[8U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[9U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[9U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[9U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[9U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[9U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[0x0000000aU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000aU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000aU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000aU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000aU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[0x0000000bU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000bU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000bU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000bU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000bU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[0x0000000cU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000cU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000cU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000cU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000cU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[0x0000000dU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000dU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000dU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000dU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000dU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[0x0000000eU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000eU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000eU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000eU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000eU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[0x0000000fU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000fU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000fU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000fU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000fU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dma_rd_rsp_pd[0x00000010U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_ready_flop)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_pipe_data[0x00000010U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p3__DOT__p3_skid_data[0x00000010U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_ready_flop)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_pipe_data[0x00000010U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__pipe_p4__DOT__p4_skid_data[0x00000010U])));
    if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_sub_cube_cnt))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l1c1[0x0000000fU];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__rsp_data_l0c1[0x0000000fU];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[4U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[2U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[4U])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[2U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000aU])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[8U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[5U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000aU])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[8U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[7U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000010U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000eU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[8U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000010U])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000eU]))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[9U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000012U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000000aU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000016U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000014U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000000bU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000016U])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000014U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000000cU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000018U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000000dU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001cU])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001aU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000000eU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001cU])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001aU]))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000000fU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000010U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[3U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[1U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000011U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[3U])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[1U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000012U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000013U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[9U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[7U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000014U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[9U])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[7U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000015U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000016U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000fU])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000dU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000017U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000fU])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000dU]))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000018U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000011U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000019U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000015U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000013U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000001aU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000015U])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000013U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000001bU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000017U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000001cU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001bU])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000019U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000001dU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001bU])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000019U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000001eU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001fU])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001dU]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000001fU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001fU])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001dU]))) 
                   >> 0x00000020U));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_data_shrink_d1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000017U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__is_data_normal_d1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_normal[0x0000001fU];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000010U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000011U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000012U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000013U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000014U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000015U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000016U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000017U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000018U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x00000019U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_remapped[0x0000001fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__dat_cur_expand[0x0000001fU];
    }
}

void Vsim___024root___nba_sequent__TOP__769(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__769\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3127 = (
                                                   ((QData)((IData)(
                                                                    (((((((0x0000000cU 
                                                                           & ((- (IData)(
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x0000001fU))) 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x0000001eU)))))) 
                                                                         << 0x0000000cU) 
                                                                        | (((0x0000000cU 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x0000001dU)))) 
                                                                                << 2U)) 
                                                                            | (3U 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x0000001cU)))))) 
                                                                           << 8U)) 
                                                                       | ((((0x0000000cU 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x0000001bU)))) 
                                                                                << 2U)) 
                                                                            | (3U 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x0000001aU)))))) 
                                                                           << 4U) 
                                                                          | ((0x0000000cU 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x00000019U)))) 
                                                                                << 2U)) 
                                                                             | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x00000018U)))))))) 
                                                                      << 0x00000010U) 
                                                                     | (((((0x0000000cU 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x00000017U)))) 
                                                                               << 2U)) 
                                                                           | (3U 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x00000016U)))))) 
                                                                          << 0x0000000cU) 
                                                                         | (((0x0000000cU 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x00000015U)))) 
                                                                                << 2U)) 
                                                                             | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x00000014U)))))) 
                                                                            << 8U)) 
                                                                        | ((((0x0000000cU 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x00000013U)))) 
                                                                                << 2U)) 
                                                                             | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x00000012U)))))) 
                                                                            << 4U) 
                                                                           | ((0x0000000cU 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x00000011U)))) 
                                                                                << 2U)) 
                                                                              | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x00000010U))))))))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     (((((((0x0000000cU 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x0000000fU)))) 
                                                                               << 2U)) 
                                                                           | (3U 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x0000000eU)))))) 
                                                                          << 0x0000000cU) 
                                                                         | (((0x0000000cU 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x0000000dU)))) 
                                                                                << 2U)) 
                                                                             | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x0000000cU)))))) 
                                                                            << 8U)) 
                                                                        | ((((0x0000000cU 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x0000000bU)))) 
                                                                                << 2U)) 
                                                                             | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 0x0000000aU)))))) 
                                                                            << 4U) 
                                                                           | ((0x0000000cU 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 9U)))) 
                                                                                << 2U)) 
                                                                              | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 8U)))))))) 
                                                                       << 0x00000010U) 
                                                                      | (((((0x0000000cU 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 7U)))) 
                                                                                << 2U)) 
                                                                            | (3U 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 6U)))))) 
                                                                           << 0x0000000cU) 
                                                                          | (((0x0000000cU 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 5U)))) 
                                                                                << 2U)) 
                                                                              | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 4U)))))) 
                                                                             << 8U)) 
                                                                         | ((((0x0000000cU 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 3U)))) 
                                                                                << 2U)) 
                                                                              | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 2U)))))) 
                                                                             << 4U) 
                                                                            | ((0x0000000cU 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3 
                                                                                >> 1U)))) 
                                                                                << 2U)) 
                                                                               | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3)))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mask_pad 
        = (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_pad_mask_d3)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_rsp_pad_mask_ergb[0U] 
        = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3127);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_rsp_pad_mask_ergb[1U] 
        = (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3127 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_rsp_pad_mask_ergb[2U] 
        = (((((((0x0000000cU & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                  >> 0x0000000fU)))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                               >> 0x0000000eU)))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                  >> 0x0000000dU)))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                          >> 0x0000000cU)))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                  >> 0x0000000bU)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                   >> 0x0000000aU)))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                   >> 9U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                    >> 8U)))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                 >> 7U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                         >> 6U)))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                 >> 5U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                         >> 4U)))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                 >> 3U)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                  >> 2U)))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                  >> 1U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_rsp_pad_mask_ergb[3U] 
        = (((((((0x0000000cU & ((- (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                            >> 0x0000001fU))) 
                                << 2U)) | (3U & (- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                               >> 0x0000001eU)))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                  >> 0x0000001dU)))) 
                                                   << 2U)) 
                                   | (3U & (- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                          >> 0x0000001cU)))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                  >> 0x0000001bU)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                   >> 0x0000001aU)))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                   >> 0x00000019U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                    >> 0x00000018U)))))))) 
            << 0x00000010U) | (((((0x0000000cU & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                 >> 0x00000017U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                         >> 0x00000016U)))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                 >> 0x00000015U)))) 
                                                  << 2U)) 
                                  | (3U & (- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                         >> 0x00000014U)))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                 >> 0x00000013U)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                  >> 0x00000012U)))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                  >> 0x00000011U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_pad_mask_d3 
                                                                   >> 0x00000010U)))))))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_ctrl__DOT__layer_st) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__req_img_p0_addr_base 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__req_addr_ori;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__req_img_p1_addr_base 
            = (((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                  ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.datain_addr_high_1
                                  : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.datain_addr_high_1))) 
                << 0x0000001bU) | (QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                    ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.datain_addr_low_1
                                                    : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.datain_addr_low_1))));
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_rsp_cur_vld) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[0U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[0U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[0U])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[0U]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[0U])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x00000020U]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x00000010U]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x00000040U]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x00000020U]))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[1U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[1U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[1U])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[1U]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[1U])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x00000021U]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x00000011U]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x00000041U]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_426)))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[2U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[2U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[2U])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[2U]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[2U])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x00000022U]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x00000012U]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x00000042U]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_427) 
                                  << 0x00000010U) | (IData)(
                                                            (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_426 
                                                             >> 0x00000020U)))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[3U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[3U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[3U])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[3U]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[3U])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x00000023U]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x00000013U]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x00000043U]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_427) 
                                  >> 0x00000010U) | 
                                 ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_427 
                                           >> 0x00000020U)) 
                                  << 0x00000010U))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[4U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[4U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[4U])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[4U]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[4U])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x00000024U]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x00000014U]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x00000044U]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_428)))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[5U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[5U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[5U])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[5U]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[5U])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x00000025U]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x00000015U]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x00000045U]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_429) 
                                  << 0x00000010U) | (IData)(
                                                            (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_428 
                                                             >> 0x00000020U)))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[6U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[6U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[6U])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[6U]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[6U])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x00000026U]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x00000016U]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x00000046U]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_429) 
                                  >> 0x00000010U) | 
                                 ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_429 
                                           >> 0x00000020U)) 
                                  << 0x00000010U))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[7U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[7U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[7U])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[7U]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[7U])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x00000027U]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x00000017U]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x00000047U]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_430)))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[8U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[8U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[8U])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[8U]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[8U])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x00000028U]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x00000018U]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x00000048U]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_431) 
                                  << 0x00000010U) | (IData)(
                                                            (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_430 
                                                             >> 0x00000020U)))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[9U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[9U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[9U])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[9U]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[9U])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x00000029U]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x00000019U]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x00000049U]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_431) 
                                  >> 0x00000010U) | 
                                 ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_431 
                                           >> 0x00000020U)) 
                                  << 0x00000010U))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[0x0000000aU] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[0x0000000aU]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[0x0000000aU]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[0x0000000aU])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x0000002aU]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x0000001aU]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x0000004aU]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_432)))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[0x0000000bU] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[0x0000000bU]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[0x0000000bU]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[0x0000000bU])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x0000002bU]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x0000001bU]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x0000004bU]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_433) 
                                  << 0x00000010U) | (IData)(
                                                            (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_432 
                                                             >> 0x00000020U)))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[0x0000000cU] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[0x0000000cU]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[0x0000000cU]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[0x0000000cU])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x0000002cU]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x0000001cU]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x0000004cU]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_433) 
                                  >> 0x00000010U) | 
                                 ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_433 
                                           >> 0x00000020U)) 
                                  << 0x00000010U))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[0x0000000dU] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[0x0000000dU]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[0x0000000dU]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[0x0000000dU])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x0000002dU]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x0000001dU]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x0000004dU]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_434)))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[0x0000000eU] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[0x0000000eU]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[0x0000000eU]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[0x0000000eU])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x0000002eU]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x0000001eU]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x0000004eU]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_435) 
                                  << 0x00000010U) | (IData)(
                                                            (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_434 
                                                             >> 0x00000020U)))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h0[0x0000000fU] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3810[0x0000000fU]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_439))) 
                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_16b_mnorm[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                    & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3809[0x0000000fU]) 
                   | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_440))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3804[0x0000000fU])) 
                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3807[0x0000002fU]) 
                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_441))) 
                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3803[0x0000001fU]) 
                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x0000004fU]) 
                           | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_442))) 
                              & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_435) 
                                  >> 0x00000010U) | 
                                 ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_435 
                                           >> 0x00000020U)) 
                                  << 0x00000010U))))))));
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_rsp_cur_vld) 
         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2676))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[0U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x00000010U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x00000010U])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x00000030U]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3805[0x00000050U])));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[1U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x00000011U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x00000011U])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x00000031U]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_431))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[2U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x00000012U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x00000012U])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x00000032U]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (((IData)(((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_y_d1 
                                                 >> 0x00000013U)))
                                   ? 0ULL : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5)) 
                         << 0x00000010U) | (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_431 
                                                    >> 0x00000020U))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[3U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x00000013U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x00000013U])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x00000033U]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (((IData)(((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_y_d1 
                                                 >> 0x00000013U)))
                                   ? 0ULL : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5)) 
                         >> 0x00000010U) | ((IData)(
                                                    (((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_y_d1 
                                                                  >> 0x00000013U)))
                                                       ? 0ULL
                                                       : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[4U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x00000014U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x00000014U])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x00000034U]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_432))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[5U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x00000015U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x00000015U])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x00000035U]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (((IData)(((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_uv_lo 
                                                 >> 0x00000025U)))
                                   ? 0ULL : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5)) 
                         << 0x00000010U) | (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_432 
                                                    >> 0x00000020U))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[6U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x00000016U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x00000016U])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x00000036U]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (((IData)(((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_uv_lo 
                                                 >> 0x00000025U)))
                                   ? 0ULL : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5)) 
                         >> 0x00000010U) | ((IData)(
                                                    (((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_uv_lo 
                                                                  >> 0x00000025U)))
                                                       ? 0ULL
                                                       : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[7U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x00000017U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x00000017U])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x00000037U]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_433))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[8U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x00000018U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x00000018U])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x00000038U]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (((IData)(((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_uv_lo 
                                                 >> 0x00000027U)))
                                   ? 0ULL : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5)) 
                         << 0x00000010U) | (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_433 
                                                    >> 0x00000020U))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[9U] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x00000019U]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x00000019U])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x00000039U]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (((IData)(((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_uv_lo 
                                                 >> 0x00000027U)))
                                   ? 0ULL : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5)) 
                         >> 0x00000010U) | ((IData)(
                                                    (((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_uv_lo 
                                                                  >> 0x00000027U)))
                                                       ? 0ULL
                                                       : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[0x0000000aU] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x0000001aU]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x0000001aU])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x0000003aU]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_434))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[0x0000000bU] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x0000001bU]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x0000001bU])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x0000003bU]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (((IData)(((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_y_d1 
                                                 >> 0x00000015U)))
                                   ? 0ULL : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5)) 
                         << 0x00000010U) | (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_434 
                                                    >> 0x00000020U))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[0x0000000cU] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x0000001cU]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x0000001cU])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x0000003cU]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (((IData)(((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_y_d1 
                                                 >> 0x00000015U)))
                                   ? 0ULL : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5)) 
                         >> 0x00000010U) | ((IData)(
                                                    (((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_y_d1 
                                                                  >> 0x00000015U)))
                                                       ? 0ULL
                                                       : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[0x0000000dU] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x0000001dU]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x0000001dU])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x0000003dU]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_435))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[0x0000000eU] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x0000001eU]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x0000001eU])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x0000003eU]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (((IData)(((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_uv_lo 
                                                 >> 0x00000029U)))
                                   ? 0ULL : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5)) 
                         << 0x00000010U) | (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_435 
                                                    >> 0x00000020U))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__pk_mn_out_data_h1[0x0000000fU] 
            = ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_438))) 
                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_8b_mnorm[0x0000001fU]) 
                | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3802))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3808[0x0000001fU])) 
               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3801))) 
                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3806[0x0000003fU]) 
                  | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3800))) 
                     & (((IData)(((1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_uv_lo 
                                                 >> 0x00000029U)))
                                   ? 0ULL : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5)) 
                         >> 0x00000010U) | ((IData)(
                                                    (((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__mn_mask_uv_lo 
                                                                  >> 0x00000029U)))
                                                       ? 0ULL
                                                       : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT____VdfgRegularize_h6c66e55c_0_5) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)))));
    }
    if (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_busy_in)) 
         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_bundle_done_d1))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__ram__DOT__di_d 
            = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_layer_end_d1) 
                 << 0x0000000aU) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_line_end_d1) 
                                    << 9U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_burst_size_d1) 
                                                << 4U) 
                                               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_burst_size_d1)));
    }
}

void Vsim___024root___nba_comb__TOP__19(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_vld) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_l0_data[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data[7U];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[0U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[0U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[0U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[0U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[1U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[1U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[1U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[1U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[2U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[2U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[2U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[2U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[3U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[3U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[3U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[3U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[4U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[4U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[4U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[4U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[5U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[5U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[5U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[5U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[6U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[6U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[6U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[6U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[7U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[7U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[7U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[7U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[8U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[8U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[8U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[8U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[9U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[9U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[9U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[9U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000aU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000aU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000aU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000aU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000bU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000bU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000bU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000bU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000cU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000cU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000cU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000cU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000dU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000dU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000dU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000dU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000eU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000eU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000eU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000eU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000fU]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000fU])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000fU]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000fU])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x00000010U] 
        = (((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__mc_dma_rd_rsp_vld))) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_ready)
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_pipe_data[0x00000010U]
                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p3__DOT__p3_skid_data[0x00000010U])) 
           | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__cv_dma_rd_rsp_vld))) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_ready)
                  ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_pipe_data[0x00000010U]
                  : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__pipe_p4__DOT__p4_skid_data[0x00000010U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[0U] 
        = (IData)((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                      << 0x00000010U) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                        >> 0x00000010U)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                                          >> 0x00000010U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[1U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                         >> 0x00000010U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                                         << 0x00000010U) 
                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                                           >> 0x00000010U))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[2U] 
        = (IData)((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                      << 0x00000010U) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                        >> 0x00000010U)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                                          >> 0x00000010U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[3U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                         >> 0x00000010U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                                         << 0x00000010U) 
                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                                           >> 0x00000010U))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[4U] 
        = (IData)((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                      << 0x00000010U) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                        >> 0x00000010U)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                                          >> 0x00000010U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[5U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                         >> 0x00000010U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                                         << 0x00000010U) 
                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                                           >> 0x00000010U))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[6U] 
        = (IData)((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                      << 0x00000010U) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                        >> 0x00000010U)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                                          >> 0x00000010U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3118[7U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                         >> 0x00000010U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                                         << 0x00000010U) 
                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                                           >> 0x00000010U))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[0U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U]) 
                                     | (0x0000ffffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U])))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((0xffff0000U 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U]) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U]))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[1U] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U]) 
                                      | (0x0000ffffU 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U])))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U]) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U]))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[2U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U]) 
                                     | (0x0000ffffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U])))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((0xffff0000U 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U]) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U]))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[3U] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U]) 
                                      | (0x0000ffffU 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U])))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U]) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U]))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[4U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U]) 
                                     | (0x0000ffffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U])))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((0xffff0000U 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U]) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U]))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[5U] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U]) 
                                      | (0x0000ffffU 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U])))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U]) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U]))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[6U] 
        = (IData)((((QData)((IData)(((0xffff0000U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U]) 
                                     | (0x0000ffffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U])))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((0xffff0000U 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U]) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U]))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3119[7U] 
        = (IData)(((((QData)((IData)(((0xffff0000U 
                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U]) 
                                      | (0x0000ffffU 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U])))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U]) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U]))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[0U] 
        = (IData)((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                        >> 8U)))) << 0x00000020U) 
                   | (QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                         >> 8U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[1U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                         >> 8U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                                         << 0x00000018U) 
                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                                           >> 8U))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[2U] 
        = (IData)((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                        >> 8U)))) << 0x00000020U) 
                   | (QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                         >> 8U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[3U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                         >> 8U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                                         << 0x00000018U) 
                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                                           >> 8U))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[4U] 
        = (IData)((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                        >> 8U)))) << 0x00000020U) 
                   | (QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                         >> 8U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[5U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                         >> 8U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                                         << 0x00000018U) 
                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                                           >> 8U))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[6U] 
        = (IData)((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                        >> 8U)))) << 0x00000020U) 
                   | (QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                         >> 8U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3120[7U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                         >> 8U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                                         << 0x00000018U) 
                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                                           >> 8U))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[0U] 
        = (IData)((0x0000ffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U])) 
                                               >> 0x00000010U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[1U] 
        = (((IData)(((0xffffffffffff0000ULL & (((QData)((IData)(
                                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U])) 
                                                << 0x00000020U) 
                                               | (0xffffffffffff0000ULL 
                                                  & (QData)((IData)(
                                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U]))))) 
                     | (QData)((IData)((0x0000ffffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U]))))) 
            << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U])) 
                                            << 0x00000010U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U])) 
                                              >> 0x00000010U))) 
                                       >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[2U] 
        = (((IData)(((0xffffffffffff0000ULL & (((QData)((IData)(
                                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U])) 
                                                << 0x00000020U) 
                                               | (0xffffffffffff0000ULL 
                                                  & (QData)((IData)(
                                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U]))))) 
                     | (QData)((IData)((0x0000ffffU 
                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U]))))) 
            >> 0x00000010U) | ((IData)((((0xffffffffffff0000ULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U])) 
                                              << 0x00000020U) 
                                             | (0xffffffffffff0000ULL 
                                                & (QData)((IData)(
                                                                  vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U]))))) 
                                         | (QData)((IData)(
                                                           (0x0000ffffU 
                                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U])))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[3U]) 
           | ((IData)((((0xffffffffffff0000ULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U])) 
                                                   << 0x00000020U) 
                                                  | (0xffffffffffff0000ULL 
                                                     & (QData)((IData)(
                                                                       vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U]))))) 
                        | (QData)((IData)((0x0000ffffU 
                                           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U])))) 
                       >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[3U]) 
           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
              << 0x00000010U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[4U] 
        = ((0x0000ffffU & (IData)((((QData)((IData)(
                                                    (0x0000ffffU 
                                                     & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U]))) 
                                    << 0x00000030U) 
                                   | (0x0000ffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U])) 
                                          << 0x00000010U) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U])) 
                                            >> 0x00000010U)))))) 
           | (0xffff0000U & (IData)((((QData)((IData)(
                                                      (0x0000ffffU 
                                                       & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U]))) 
                                      << 0x00000030U) 
                                     | (0x0000ffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U])) 
                                            << 0x00000010U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U])) 
                                              >> 0x00000010U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[5U] 
        = ((0x0000ffffU & (IData)(((((QData)((IData)(
                                                     (0x0000ffffU 
                                                      & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U]))) 
                                     << 0x00000030U) 
                                    | (0x0000ffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U])) 
                                           << 0x00000010U) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U])) 
                                             >> 0x00000010U)))) 
                                   >> 0x00000020U))) 
           | (0xffff0000U & (IData)(((((QData)((IData)(
                                                       (0x0000ffffU 
                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U]))) 
                                       << 0x00000030U) 
                                      | (0x0000ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U])) 
                                               >> 0x00000010U)))) 
                                     >> 0x00000020U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[6U] 
        = (IData)((((QData)((IData)((0x0000ffffU & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U]))) 
                    << 0x00000030U) | (0x0000ffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U])) 
                                           << 0x00000010U) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U])) 
                                             >> 0x00000010U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3121[7U] 
        = (IData)(((((QData)((IData)((0x0000ffffU & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U]))) 
                     << 0x00000030U) | (0x0000ffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U])) 
                                            << 0x00000010U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U])) 
                                              >> 0x00000010U)))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[0U] 
        = (IData)((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                      << 0x0000001eU) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                        >> 2U)))) << 0x00000020U) 
                   | (QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                         >> 2U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[1U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                         >> 2U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                                         << 0x0000001eU) 
                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                                           >> 2U))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[2U] 
        = (IData)((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                      << 0x0000001eU) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                        >> 2U)))) << 0x00000020U) 
                   | (QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                         >> 2U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[3U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                         >> 2U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                                         << 0x0000001eU) 
                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                                           >> 2U))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[4U] 
        = (IData)((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                      << 0x0000001eU) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                        >> 2U)))) << 0x00000020U) 
                   | (QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                         >> 2U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[5U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                         >> 2U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                                         << 0x0000001eU) 
                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                                           >> 2U))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[6U] 
        = (IData)((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                      << 0x0000001eU) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                        >> 2U)))) << 0x00000020U) 
                   | (QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                         >> 2U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3124[7U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                         >> 2U)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                                         << 0x0000001eU) 
                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                                           >> 2U))))) 
                   >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[0U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                                 >> 0x00000010U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[1U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                                 >> 0x00000010U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[2U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                                 >> 0x00000010U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[3U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                                 >> 0x00000010U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[4U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                                 >> 0x00000010U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[5U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                                 >> 0x00000010U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[6U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                                 >> 0x00000010U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[7U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                                 >> 0x00000010U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[0U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                  >> 0x00000018U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[1U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                  >> 0x00000018U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[2U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                  >> 0x00000018U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[3U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                  >> 0x00000018U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[4U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                  >> 0x00000018U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[5U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                  >> 0x00000018U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[6U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                  >> 0x00000018U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[7U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                  >> 0x00000018U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[0U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                                 >> 0x00000014U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[1U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                                 >> 0x00000014U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[2U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                                 >> 0x00000014U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[3U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                                 >> 0x00000014U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[4U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                                 >> 0x00000014U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[5U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                                 >> 0x00000014U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[6U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                                 >> 0x00000014U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[7U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                                 >> 0x00000014U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[0U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                  >> 0x00000016U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[1U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                  >> 0x00000016U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[2U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                  >> 0x00000016U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[3U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                  >> 0x00000016U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[4U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                  >> 0x00000016U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[5U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                  >> 0x00000016U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[6U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                  >> 0x00000016U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[7U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                  >> 0x00000016U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[0U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0U] 
                                                 >> 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[1U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[1U] 
                                                 >> 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[2U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[2U] 
                                                 >> 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[3U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[3U] 
                                                 >> 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[4U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[4U] 
                                                 >> 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[5U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[5U] 
                                                 >> 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[6U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[6U] 
                                                 >> 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[7U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[7U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3117[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[8U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[9U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0x0000000aU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0x0000000bU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0x0000000cU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0x0000000dU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0x0000000eU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o1[0x0000000fU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                             >> 0x00000010U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU])) 
            << 0x00000010U) | ((0x0000ff00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU]) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                 >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3122[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[8U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[9U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0x0000000aU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0x0000000bU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0x0000000cU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0x0000000dU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0x0000000eU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o5[0x0000000fU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3123[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[8U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                                 >> 0x00000014U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[9U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                                 >> 0x00000014U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0x0000000aU] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                                 >> 0x00000014U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0x0000000bU] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                                 >> 0x00000014U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0x0000000cU] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                                 >> 0x00000014U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0x0000000dU] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                                 >> 0x00000014U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0x0000000eU] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                 >> 0x00000014U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o6[0x0000000fU] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                             >> 0x00000014U)) | (0x000003ffU 
                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU])) 
            << 0x00000014U) | ((0x000ffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU]) 
                               | (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                 >> 0x00000014U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3125[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[8U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                  >> 0x00000016U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[9U] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                  >> 0x00000016U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0x0000000aU] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                  >> 0x00000016U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0x0000000bU] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                  >> 0x00000016U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0x0000000cU] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                  >> 0x00000016U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0x0000000dU] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                  >> 0x00000016U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0x0000000eU] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                  >> 0x00000016U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o8[0x0000000fU] 
        = ((((0x00000c00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                             << 0x0000000aU)) | (0x000003ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                    >> 2U))) 
            << 0x00000014U) | ((0x000ffc00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                               >> 2U)) 
                               | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                  >> 0x00000016U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3126[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[8U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[8U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[9U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[9U] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0x0000000aU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000aU] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0x0000000bU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000bU] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0x0000000cU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000cU] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0x0000000dU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000dU] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0x0000000eU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000eU] 
                                                 >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_data_sw_o9[0x0000000fU] 
        = ((((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                             >> 8U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                        >> 0x00000018U)) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rd_rsp_pd[0x0000000fU] 
                                                 >> 8U))));
}
